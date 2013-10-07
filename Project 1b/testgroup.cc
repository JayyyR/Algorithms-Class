#include "group.h"
#include <cstdlib>  // include for the function exit()
#include <iostream> // include for the input/output members
#include <iomanip>  // include for input/output formatting
#include <fstream>  // include for the file i/o members

using namespace std;
using std::ifstream;

int main(){
  
  
  GroupOfNumbers G(-100,100,50);
  G.displayGroupOfNumbers();
  
  GroupOfNumbers m("filetest", 12);
  m.displayGroupOfNumbers();
  m.writeGroupOfNumbersTo("writetest");
  /*m.add(23);
  m.add(42);
  m.add(43);
  m.add(60);
  m.add(52);
  m.displayGroupOfNumbers();*/
  
}