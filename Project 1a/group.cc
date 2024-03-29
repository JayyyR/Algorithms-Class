//*****************************************************
// CS 303 Algorithms
// Project 1, Part A
// Fall 2012
// Joseph Acosta
//*****************************************************

#include "group.h"
#include <cstdlib>  // include for the function exit()
#include <iostream> // include for the input/output members
#include <iomanip>  // include for input/output formatting

using namespace std;


//constructor
GroupOfNumbers::GroupOfNumbers(long defaultLimit):_LIMIT(defaultLimit), _total(0){
  if (defaultLimit < default_LIMIT) {
    _LIMIT = default_LIMIT;
  }
  try{
    _group = new long[_LIMIT];
  }
  catch(bad_alloc& ba){
    cerr<< "GroupOfNumbers: bad_alloc" << endl;
    cerr<< "GroupOfNumbers: allocation of size "<< _LIMIT << "failed" << endl;
    cerr<< "GroupOfNumbers: line: " << (__LINE__ - 5) << endl;
    cerr<< "GroupOfNumbers: file: " << __FILE__ << endl;
    cerr<< "GroupOfNumbers: exit: " << 1 << endl;
    exit(1); 
  }
}

//copy constructor
GroupOfNumbers::GroupOfNumbers(const GroupOfNumbers & G):_LIMIT(default_LIMIT), _total(0), _group(NULL){
  *this = G;
}

//destructor
GroupOfNumbers::~GroupOfNumbers(){
  delete[]_group;
}

//accessors
bool GroupOfNumbers::isEmpty() const{
  return (_total == 0);
}

long GroupOfNumbers::total() const{
  return _total;
}

void GroupOfNumbers::displayGroupOfNumbers() const{
  long i;
  cout.setf(ios::right);
  for (i=0; i<_total; i++){
    if ((i%10) == 0){
      cout <<'\n'<<setw(5)<<_group[i];
    }
    else{
      cout<<setw(5)<<_group[i];
    }
  }
  cout<<endl;
}

//mutators 
bool GroupOfNumbers::add(const long& newNumber){
  bool test = (_total < _LIMIT);
  if (test){
    _group[_total] = newNumber;
    _total++;
  }
  return test;
}

bool GroupOfNumbers::remove(const long& number){
  bool test;
  long i;
  for (i=0;(_group[i] != number) && (i<_total); i++){
  }
  test = (i<_total);
  if (test){
    _group[i] = _group[--_total];
  }
  return test;
}

GroupOfNumbers & GroupOfNumbers::operator=(const GroupOfNumbers & G){
  if (this != &G){
    delete[]_group;
    try{
      _group = new long[G._LIMIT];
    }
    catch(bad_alloc){
      cerr<<"GroupOfNumbers: bad alloc" << endl;
      cerr<<"GroupOfNumbers: allocation of size "<< G._LIMIT << "failed" << endl;
      cerr<<"GroupOfNumbers: line: " << (__LINE__ - 5) << endl;
      cerr<<"GroupOfNumbers: file: " << __FILE__ << endl;
      cerr<<"GroupOfNumbers: exit: " << 1 << endl;
      exit(1);
    }
    _LIMIT = G._LIMIT;
    long i;
    for (i = 0; i< G._total; i++){
      _group[i] = G._group[i];
    }
    _total = G._total;
  }
  return *this;
}
