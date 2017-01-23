
/*
 * FileHandler.cpp
 *
 *  Created on: Jan 11, 2017
 *      Author: robertwinke
 */


#include "FileHandler.h"

FileHandler::FileHandler(vector<string> fileNames) throw (const char*) {
  for (int i = 0; i < fileNames.size(); i++) {
    myFile.open(fileNames[i].c_str());
    if(!myFile.is_open()) {
      throw "couldn't open file\n";
    }
    buffer += copyTextFromFile();
    myFile.close();
  }
}

string FileHandler::copyTextFromFile() {
  string line;
  string temp;
  while(getline(myFile, line)) {
    temp += line + "\n";
  }
  return temp;
}
string FileHandler::getText() {
  return buffer;
}

FileHandler::~FileHandler() {
  myFile.close();
}
