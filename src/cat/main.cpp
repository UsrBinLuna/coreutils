
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(int argc, char *argv[]){

  // get command line arguments for filename
  int counter;
  if(argc==1)
      cout << "(not)GNU cat v0.2\nUsage:\n    cat <OPTIONS> <FILENAME>\n\nOptions (not working):\n  -h | --help - shows this message\n\r";
  if(argc>=2)
  {
    if (argv[0] == "--help"){
      // TODO: fix cli arguments
      cout << "(not)GNU cat v0.2\nUsage:\n    cat <OPTIONS> <FILENAME>\n\r";
    } else {
      //for(counter=0;counter<argc;counter++)
      //read file
      fstream f(argv[1], fstream::in );
      string s;
      getline( f, s, '\0');
      cout << s << endl;
      f.close();
    }
  }
}
