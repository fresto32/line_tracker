#include "recurs_file_finder.h"
#include "hash_struct.h"
#include <iostream>

int main() {
  boost::filesystem::path targetDir("./test_scripts");
  boost::filesystem::recursive_directory_iterator it(targetDir), eod;

  BOOST_FOREACH(boost::filesystem::path const &p, std::make_pair(it, eod)) {
      if (boost::filesystem::is_regular_file(p)) {
          std::cout << p.string() << std::endl;
          script_data *new_script = number_of_lines(p);
          display_script_data(new_script);
      } 
  }
  return 0;
}
