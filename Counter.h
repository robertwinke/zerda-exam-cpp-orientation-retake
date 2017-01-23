/*
 * Counter.h
 *
 *  Created on: Jan 23, 2017
 *      Author: robertwinke
 */
#include <string>
#include <iostream>
using namespace std;

#ifndef COUNTER_H_
#define COUNTER_H_

class Counter {
private:
  string text;
  int lineCount;
  int wordCount;
  int charCount;
public:
  Counter(string text);
  void count();
  int getLineCount();
  int getWordCount();
  int getCharCount();
};



#endif /* COUNTER_H_ */
