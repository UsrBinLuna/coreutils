#include <iostream>
#include <string>
#include <array>

using namespace std;

int main(int argc, char **argv){
  // get last element of argv
  int argvLastElement = sizeof(argv) / sizeof(argv[0] - 1);
  cout << argv[argvLastElement] << endl;
}
