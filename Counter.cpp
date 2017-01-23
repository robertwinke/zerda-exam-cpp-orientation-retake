/*
 * Counter.cpp
 *
 *  Created on: Jan 23, 2017
 *      Author: robertwinke
 */


#include "Counter.h"

Counter::Counter(string text): text(text) {
  lineCount = 0;
  wordCount = 0;
  charCount = 0;
  count();
}
void Counter::count() {
  string line;

  for (unsigned int i = 0; i < text.length(); i++) {
    if (text[i] == ' ' || text[i] == '\n' || text[i] == '\r') {
      wordCount++;
    }
    if(text[i] == '\n' || text[i] == '\r') {
      lineCount++;
    }
    charCount++;
  }
}

int Counter::getLineCount() {
  return lineCount;
}
int Counter::getWordCount() {
  return wordCount;
}
int Counter::getCharCount() {
  return charCount;
}
