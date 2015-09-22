#ifndef SORT_TEST_H
#define SORT_TEST_H

#include "Sort.h"

#include <iostream>
#include <cxxtest/TestSuite.h>

using namespace std;

class SortTest : public CxxTest::TestSuite {
public:
  // Fill me in!

  void testIsSortedSorted(){
    Sort s;
    vector<int> v;
    v.push_back(4);
    v.push_back(2);
    v.push_back(9);
    v.push_back(1);
    v.push_back(10);
    TS_ASSERT(! s.isSorted(v) );
  }

  void testIsSortedUnsorted(){
    Sort s;
    vector<int>v2;
    v2.push_back(2);
    v2.push_back(90);
    v2.push_back(100);
    v2.push_back(200);
    v2.push_back(200);
    v2.push_back(300);
    TS_ASSERT( s.isSorted(v2) );
  }

  void testIsSortedReverse(){
   Sort s;
   vector<int> v;
   v.push_back(63);
   v.push_back(52);
   v.push_back(40);
   v.push_back(30);
   v.push_back(10);
   TS_ASSERT(! s.isSorted(v) );
  }

  void testSelectionSortSorted(){
    Sort s;
    vector<int>v2;
    v2.push_back(2);
    v2.push_back(90);
    v2.push_back(100);
    v2.push_back(200);
    v2.push_back(200);
    v2.push_back(300);
    v2 = s.selectionSort(v2);
    TS_ASSERT( s.isSorted(v2) );
  }

  void testSelectionSortUnsorted(){
    Sort s;
    vector<int> v;
    v.push_back(4);
    v.push_back(2);
    v.push_back(9);
    v.push_back(1);
    v.push_back(10);
    v = s.selectionSort(v);
    TS_ASSERT( s.isSorted(v) );
  }

  void testSelectionSortReverse(){
    Sort s;
    vector<int> v;
    v.push_back(63);
    v.push_back(52);
    v.push_back(40);
    v.push_back(30);
    v.push_back(10);
    v = s.selectionSort(v);
    TS_ASSERT( s.isSorted(v) );
  }

  void testCocktailSortSorted(){
    Sort s;
    vector<int>v2;
    v2.push_back(2);
    v2.push_back(90);
    v2.push_back(100);
    v2.push_back(200);
    v2.push_back(200);
    v2.push_back(300);
    v2 = s.cocktailSort(v2);
    TS_ASSERT( s.isSorted(v2) );
  }

  void testCocktailSortUnsorted(){
    Sort s;
    vector<int> v;
    v.push_back(4);
    v.push_back(2);
    v.push_back(9);
    v.push_back(1);
    v.push_back(10);
    v = s.cocktailSort(v);
    TS_ASSERT( s.isSorted(v) );
  }

  void testCocktailSortReverse(){
    Sort s;
    vector<int> v;
    v.push_back(63);
    v.push_back(52);
    v.push_back(40);
    v.push_back(30);
    v.push_back(10);
    v = s.cocktailSort(v);
    TS_ASSERT( s.isSorted(v) );
  }

  void testGnomeSortSorted(){
    Sort s;
    vector<int>v2;
    v2.push_back(2);
    v2.push_back(90);
    v2.push_back(100);
    v2.push_back(200);
    v2.push_back(200);
    v2.push_back(300);
    v2 = s.gnomeSort(v2);
    TS_ASSERT( s.isSorted(v2) );
  }

  void testGnomeSortUnsorted(){
    Sort s;
    vector<int> v;
    v.push_back(4);
    v.push_back(2);
    v.push_back(9);
    v.push_back(1);
    v.push_back(10);
    v = s.gnomeSort(v);
    TS_ASSERT( s.isSorted(v) );
  }

  void testGnomeSortReverse(){
    Sort s;
    vector<int> v;
    v.push_back(63);
    v.push_back(52);
    v.push_back(40);
    v.push_back(30);
    v.push_back(10);
    v = s.gnomeSort(v);
    TS_ASSERT( s.isSorted(v) );
  }

  void testShellSortSorted(){
    Sort s;
    vector<int>v2;
    v2.push_back(2);
    v2.push_back(90);
    v2.push_back(100);
    v2.push_back(200);
    v2.push_back(200);
    v2.push_back(300);
    v2 = s.shellSort(v2);
    TS_ASSERT( s.isSorted(v2) );
  }

  void testShellSortUnsorted(){
    Sort s;
    vector<int> v;
    v.push_back(4);
    v.push_back(2);
    v.push_back(9);
    v.push_back(1);
    v.push_back(10);
    v.push_back(1);
    v = s.shellSort(v);
    TS_ASSERT( s.isSorted(v) );
  }

  void testShellSortReverse(){
    Sort s;
    vector<int> v;
    v.push_back(63);
    v.push_back(52);
    v.push_back(40);
    v.push_back(30);
    v.push_back(10);
    v = s.shellSort(v);
    TS_ASSERT( s.isSorted(v) );
  }

  void testYourBestSort(){

  }
  
};

#endif
