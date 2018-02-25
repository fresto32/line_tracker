#include <string>
#include <vector>
#include <iostream>
#include <ctime>
#include "hash_struct.h"
#include "hash_path.h"
#include "boost/filesystem.hpp"

void display_script_data(script_data *script_data_to_display) {
  // Displays # of lines and date of the script_data structure
  std::cout << "Script Data\n";
  std::cout << "# Of lines: " << script_data_to_display->num_lines << "\n";
  std::cout << "Date: " << ctime(&script_data_to_display->date) << "\n\n";
}


language_data* initialize_hash_structure(char *language) {
  language_data *new_hash_struct = new language_data;

  std::string lang(language);

  new_hash_struct->language_type_data.language = lang;
  new_hash_struct->language_type_data.tot_num_lines = 0;
  new_hash_struct->language_type_data.date = time(0);
  new_hash_struct->language_type_data.language_head_predecessor = NULL;

  return new_hash_struct;
} 

void insert_data(boost::filesystem::path const &dir_path, 
    struct language_data *language_data) {
  // Go to hash_keys[HASH]
  unsigned char key[] = dir_path.generic_u16string();
  struct hash_scripts_head *hash_script_head = 
    language_data->hash_keys[Pearson16(key)];

  // If directory in directories_in_key, set index of script_data vector to
  // relevant entry.

  // Else, add directory to key and set index

  
  // create new script_data and prepend to head/set as head.
  // Also increment the size of language_type_scripts tot_lines

}
