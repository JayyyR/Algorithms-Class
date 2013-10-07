#include "group.h"
#include <cstdlib>  // include for the function exit()
#include <iostream> // include for the input/output members
#include <iomanip>  // include for input/output formatting
#include <fstream>  // include for the file i/o members
#include <cmath>
using namespace std;
using std::ifstream;
extern double user_time();
extern double system_time();

int main(){
 double start, finish;
  
 /*
  GroupOfNumbers G(-10,100,140);
  GroupOfNumbers A =G;
  cout<< "before linear select" << endl;
  G.displayGroupOfNumbers();
  A.quicksort();
  long small;
  
  G.linear_select(42, small);
  cout<< "A is: "<<endl;
  A.displayGroupOfNumbers();
  cout<< "The kth smallest number is: " << small << endl;*/
  
 long x = 4534545;
  GroupOfNumbers G(-10000000,10000000,10000000);
  long small4;
  start = user_time() + system_time();
  G.sort_select(x, small4);
  finish = user_time() + system_time();
  cout<< "The kth smallest number is (sort select): " << small4 << endl;
  cout << "\nIt took approximately " << finish - start  << endl;
  /*
  long small;
  start = user_time() + system_time();
  G.partial_sort_select(x, small);
  finish = user_time() + system_time();
  cout<< "The kth smallest number is (partial sort select): " << small << endl;
  cout << "\nIt took approximately " << finish - start  << endl;
  */
  long small2;
  start = user_time() + system_time();
  G.min_heap_select(x, small2);
  finish = user_time() + system_time();
  cout<< "The kth smallest number is (min heap select): " << small2 << endl;
  cout << "\nIt took approximately " << finish - start  << endl;
  
  long small3;
  start = user_time() + system_time();
  G.partial_max_heap_select(x, small3);
  finish = user_time() + system_time();
  cout<< "The kth smallest number is (partial max heap select): " << small3 << endl;
  cout << "\nIt took approximately " << finish - start  << endl;
  
  long small7;
  start = user_time() + system_time();
  G.quick_select (x, small7);
  finish = user_time() + system_time();
  cout<< "The kth smallest number is (quick select): " << small7 << endl;
  cout << "\nIt took approximately " << finish - start  << endl;
  
  long small5;
  start = user_time() + system_time();
  G.linear_select(x, small5);
  finish = user_time() + system_time();
  cout<< "The kth smallest number is (linear select): " << small5 << endl;
  cout << "\nIt took approximately " << finish - start  << endl;
 
 
 
 /*
  GroupOfNumbers F(0,40,40);
  F.displayGroupOfNumbers();
  F.heapsort();
  F.displayGroupOfNumbers();*/
}