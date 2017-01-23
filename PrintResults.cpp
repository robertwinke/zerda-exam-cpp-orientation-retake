/*
 * PrintResults.cpp
 *
 *  Created on: Jan 23, 2017
 *      Author: robertwinke
 */

#include "PrintResults.h"

PrintResults::PrintResults(int lines, int words, int chars, string flag):
lines(lines), words(words), chars(chars), flag(flag)
{
  print();
}
void PrintResults::print() {
  if (flag == "-l") {
    cout << lines << endl;
  }
  else if (flag == "-w") {
    cout << words << endl;
  }
  else if (flag == "-c") {
    cout << chars << endl;
  }
  else {
    cout << lines << " | " << words << " | " << chars << endl;
  }
}


