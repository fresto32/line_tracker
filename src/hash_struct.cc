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
