#include <fstream>
#include <iostream>

// copy in binary mode
bool copyFile(const char *SRC, const char* DEST)
{
    std::ifstream src(SRC, std::ios::binary);
    std::ofstream dest(DEST, std::ios::binary);
    dest << src.rdbuf();
    return src && dest;
}

int main(int argc, char *argv[])
{
  if (argc=1){
    std::cout << "(not)GNU cp v0.2\n\nUsage:\n  cp [OPTIONS] [FILE*] [DESTFILE]\nOptions (not working):\n  N/A" << std::endl;
  } else {

    return copyFile(argv[1], argv[2]) ? 0 : 1;

  }
}
