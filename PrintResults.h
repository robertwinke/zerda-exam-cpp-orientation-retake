/*
 * printResults.h
 *
 *  Created on: Jan 23, 2017
 *      Author: robertwinke
 */
#include <string>
#include <iostream>
using namespace std;

#ifndef PRINTRESULTS_H_
#define PRINTRESULTS_H_


class PrintResults {
  int lines;
  int words;
  int chars;
  string flag;
public:
  PrintResults(int, int, int, string);
  void print();
};


#endif /* PRINTRESULTS_H_ */
