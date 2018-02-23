#ifndef _hash_struct_h
#define _hash_struct_h

struct script_data {
  int num_lines;
  time_t date;
  struct script_data *script_predecessor;
};

struct language_type_scripts {
  char language[10];
  int tot_num_lines;
  int date[3];
  struct language_type_scripts *language_head_predecessor;
};

struct hash_scripts_head {
  std::vector<std::string> directories_in_key;
  std::vector<script_data> heads_of_script_data;
};

struct language_data {
  struct language_type_scripts language_type_data;
  struct hash_scripts_head hash_keys[300];
};

void display_script_data(script_data *script_data_to_display);

#endif
