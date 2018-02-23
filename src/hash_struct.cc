#include <string>
#include <vector>
#include <iostream>
#include <ctime>
#include "hash_struct.h"

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


