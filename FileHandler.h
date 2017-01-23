/*
 * FileHandler.h
 *
 *  Created on: Jan 11, 2017
 *      Author: robertwinke
 */
#include <string>
#include <fstream>
#include <vector>

using namespace std;

#ifndef FILEHANDLER_H_
#define FILEHANDLER_H_

class FileHandler {
private:
  ifstream myFile;
  string buffer;
public:

  FileHandler(vector<string>) throw (const char*);
  string copyTextFromFile();
  string getText();
  ~FileHandler();
};



#endif /* FILEHANDLER_H_ */
