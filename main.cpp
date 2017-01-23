//============================================================================
// Name        : vizsga3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "FileHandler.h"
#include "Counter.h"
#include "ArgHandler.h"
#include "PrintResults.h"

using namespace std;

int main(int argc, char** argv) {

  try {
    ArgHandler myArgHandler(argc, argv);
    FileHandler myFileHandler(myArgHandler.getFileNames());
    Counter myCounter(myFileHandler.getText());
    PrintResults myPrint(myCounter.getLineCount(),myCounter.getWordCount(),
      myCounter.getCharCount(), myArgHandler.getFlag());
  }
  catch (const char* err) {
    cerr << err;
  }

  return 0;
}
