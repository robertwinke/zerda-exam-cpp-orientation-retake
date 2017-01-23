

#include "ArgHandler.h"

ArgHandler::ArgHandler(int argc, char** argv)throw(const char *): argc(argc), argv(argv) {
  fileCount = 0;
  flag = "";
  string temp;
  if (argc == 1) {
    throw "No filename is provided\n";
  }
  else {
    if (argv[1][0] == '-' && argv[1][1] == 'l') {
      flag = "-l";
    }
    if (argv[1][0] == '-' && argv[1][1] == 'w') {
      flag = "-w";
    }
    if (argv[1][0] == '-' && argv[1][1] == 'c') {
      flag = "-c";
    }
    for (int i = 1; i < argc; i++) {
      temp = (string)argv[i];
      if (temp.size() > 4) {
        if (temp.substr(temp.length() - 4) == ".txt") {
          fileNames.push_back(temp);
          fileCount++;
      }
      }
    }
  }
}
int ArgHandler::getFileCount() {
  return fileCount;
}
vector<string> ArgHandler::getFileNames() {
  return fileNames;
}
string ArgHandler::getFlag() {
  return flag;
}
