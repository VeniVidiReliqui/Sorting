/*
 * Sort.cpp
 * Name: Benjamin Hunt
 *
 * Oct 31, 2013
 */

#include <iostream>
#include <vector>
#include <string.h>
#include "Sort.h"

using namespace std;

// You MUST have these implemented (even if they don't work correctly)
// in order for you to benchmark any of the sorts in our Scoreboard site.
// If not, the testing main will not be able to compile.


vector<int> Sort::selectionSort(const vector<int>& array){
  int array_size = array.size();
  vector<int> ret = array;

	for (int i = 0; i < array_size; i++){
	  for (int j = i; j < array_size; j++){
	    if (ret[i] > ret[j]){
	      swap(ret[i],ret[j]);
	    }
	  }
	}
	return ret;
}

vector<int> Sort::cocktailSort(const vector<int>& array){
  vector<int> ret = array;
  if (! isSorted(ret)){
    int array_size = array.size();
	  int pos = 0;
	  for (int i = 0; i < array_size/2; i++){
	    pos = i;
	    for (int k = 0; k < 2; k++){
	      for (int j = 0; j < array_size-(i); j++){
	        if (ret[pos] < ret[pos-1]){
	          swap(ret[pos],ret[pos-1]);
	        }
	        if (k == 0){
	          pos += 1;
	        }
	        else {
	          pos -=1;
	        }
	      }
	    }
	  }
  }
	return ret;
}

vector<int> Sort::gnomeSort(const vector<int>& array){
	vector<int> ret = array;
	unsigned int pos = 1;
	while (pos < array.size()){
	  if (ret[pos] >= ret[pos - 1]){
	    pos++;
	  }
	  else {
	    swap(ret[pos],ret[pos-1]);
	    if (pos > 1){
	      pos--;
	    }
	  }
	}
	return ret;
}

vector<int> Sort::shellSort(const vector<int>& array){
	vector<int> ret = array;
	int array_size = array.size();
	int gap = array_size / 2;
	while (gap > 0){
	  for (int i = gap; i < gap * 2; i++){
	    for (int j = i; j < array_size; j += gap){
	      for (int k = j; k >= 0; k -= gap){
	        if (ret[j] < ret[k]){
	          swap(ret[j],ret[k]);
	        }
	      }
	    }
	  }
	  gap = gap / 2;
	}
  if (ret[0] > ret[1]){
    swap(ret[0],ret[1]);
  }
	return ret;
}

vector<int> Sort::yourBestSort(const vector<int>& array){
  //This is just to show that I can copy code from the Internet too
  //http://rosettacode.org/wiki/Sorting_algorithms/Counting_sort#C.2B.2B
	vector<int> ret = array;
  int mi = 0;
  int mx = 0;
  int z = 0;
  int len = array.size();

  for (unsigned int i = 0; i < len; i++){
    if (ret[i] > mx) mx = ret[i];
    if (ret[i] < mi) mi = ret[i];
  }

  int nlen = ( mx - mi ) + 1; int* temp = new int[nlen];
  memset( temp, 0, nlen * sizeof( int ) );

  for( int i = 0; i < len; i++ ) temp[ret[i] - mi]++;

  for( int i = mi; i <= mx; i++ )
  {
      while( temp[i - mi] )
      {
        ret[z++] = i;
        temp[i - mi]--;
      }
  }

  delete [] temp;

	return ret;
}

bool Sort::isSorted(const vector<int>& array){
  for (unsigned int i = 1; i < array.size(); i++){
    if (array[i] < array[i-1]){
      return false;
    }
  }
  return true;
}
