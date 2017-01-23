#include <string>
#include <vector>
using namespace std;

class ArgHandler {
private:
  int argc;
  char** argv;
  int fileCount;
  vector<string> fileNames;
  string flag;

public:
  ArgHandler(int argc, char** argv)throw(const char *);
  int getFileCount();
  string getFlag();
  vector<string> getFileNames();
};
