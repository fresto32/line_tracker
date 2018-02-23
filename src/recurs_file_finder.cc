#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include "boost/filesystem.hpp"
#include "boost/foreach.hpp"
#include "hash_struct.h"
#include "recurs_file_finder.h"

script_data* number_of_lines(boost::filesystem::path const &p) {
  // A path filesystem object is assumed to be pased. The number_of_lines
  // function then iterates through every line in the file and returns
  // a script_data object with date of last modification, total number of 
  // lines and a null pointer to its predecessor.

  std::ifstream inFile;
  inFile.open(p.string());

  if (!inFile) {
    std::cerr << "File does not exist or unable to open file\n";
    std::exit(1);
  }
  
  int num_lines = 0;
  std::string x = "";
  
  while (std::getline(inFile, x)) num_lines++;

  script_data *new_script = new script_data;
  new_script->date = boost::filesystem::last_write_time(p);
  new_script->num_lines = num_lines;
  new_script->script_predecessor = NULL;

  return new_script;

}


