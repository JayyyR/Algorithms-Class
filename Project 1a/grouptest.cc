#include "group.h"
#include <cstdlib>  // include for the function exit()
#include <iostream> // include for the input/output members
#include <iomanip>  // include for input/output formatting

using namespace std;

int main(){
  
  GroupOfNumbers m(50); 
  cout << "empty? " << m.isEmpty() << endl;
  m.add(1);
  m.add(2);
  m.add(3);
  m.add(4);
  m.add(5);
  m.add(6);
  m.add(7);
  m.add(8);
  m.add(9);
  m.add(10);
  m.add(11);
  m.add(12);
  cout << "after adding 1 - 12" << endl;
  cout << "total: " << m.total() << endl;
  m.displayGroupOfNumbers();
  m.remove(4);
  cout << "after removal of 4" << endl;
  m.displayGroupOfNumbers();
  cout << "empty? " << m.isEmpty() << endl;
  cout << "total: " << m.total() << endl;
  
  GroupOfNumbers b;
  b = m;

  cout <<"b= m and b is: " << endl;
  b.displayGroupOfNumbers();
  cout << "total: " << b.total() << endl;
  
  GroupOfNumbers c(b);
  cout<<"c is copied from b and c is:" << endl;
  c.displayGroupOfNumbers();
  cout << "total: " << c.total() << endl;
  
  GroupOfNumbers d(m);
  cout<<"d is copied from m and d is:" << endl;
  d.displayGroupOfNumbers();
  cout << "total: " << d.total() << endl;
  
  d.remove(6);
  cout<<"removed 6 from d"<< endl;
  c.remove(12);
  b.remove(8);
  cout<<"removed 12 from c"<< endl;
  cout<<"removed 8 from b"<< endl;
  cout<<"d is"<< endl;
  d.displayGroupOfNumbers();
  cout << "total: " << d.total() << endl;
  
  cout<<"m is"<< endl;
  m.displayGroupOfNumbers();
  cout << "total: " << m.total() << endl;
  
  cout<<"b is"<< endl;
  b.displayGroupOfNumbers();
  cout << "total: " << b.total() << endl;
  
  cout<<"c is"<< endl;
  c.displayGroupOfNumbers();
  cout << "total: " << c.total() << endl;
  
  
  
  return 0;
}