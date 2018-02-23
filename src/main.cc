#include "recurs_file_finder.h"
#include "hash_struct.h"
#include "hash_path.h"
#include <iostream>

int main() {
  boost::filesystem::path targetDir("./test_scripts");
  boost::filesystem::recursive_directory_iterator it(targetDir), eod;

  // Initialize vector of language_types
  // Verifying for .cc and .h extensions only for testing
  std::vector<language_data> languages;
  languages.push_back(*initialize_hash_structure("cc"));
  languages.push_back(*initialize_hash_structure("h"));

  // Testing the script_data structure initialization for each file in
  // directory tree of ./test_scripts
  BOOST_FOREACH(boost::filesystem::path const &p, std::make_pair(it, eod)) {
      if (boost::filesystem::is_regular_file(p)) {
          std::cout << p.string() << std::endl;
          script_data *new_script = number_of_lines(p);
          display_script_data(new_script);
      } 
  }
  return 0;
}
