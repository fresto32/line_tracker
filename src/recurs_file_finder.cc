#include <fstream>
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main() {
  fs::create_directories("/Users/fresto32/Dropbox/[8] Computer Science/" + 
      "lines_tracker/src/");
  for (auto& p: fs::recursive_directory_iterator("a")) std::cout << p << "\n";

  return 0;
}

