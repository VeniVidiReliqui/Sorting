/*
 * main.cpp
 * Name: Benjamin Hunt
 *
 * This program sorts numbers provided in a text file, and prints out the sorted
 * number to stdout (the screen).
 * It accepts 2 command-line parameters, the first an integer representing
 * the sort to use.  0 Selection sort, 1 Cocktail sort, 2 Gnomesort, 3 Shell sort,
 * 4 Your Best Sort.
 * The second parameter is a filename of a file containing the numbers to sort.
 * The file has one integer (could have many digits) per line.
 *
 * Oct 23 ,2013
 */

#include <iostream>
#include <string>
#include <fstream>

#include "Sort.h"

using namespace std;

int main(int argc, char* argv[]){
	// FILL ME IN!
  vector<int> array;

  ifstream file;
  file.open(argv[2]);
  int number_in;
  while (file >> number_in){
    array.push_back(number_in);
  }

  Sort s;

  switch (*(argv[1]) - '0'){
    case 0:
      array = s.selectionSort(array);
      break;

    case 1:
      array = s.cocktailSort(array);
      break;

    case 2:
      array = s.gnomeSort(array);
      break;

    case 3:
      array = s.shellSort(array);
      break;

    case 4:
      array = s.yourBestSort(array);
      break;
  }
  for (unsigned int i = 0; i < array.size(); i++){
    cout << array[i] << endl;
  }

	return 0;
}
