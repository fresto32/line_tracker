struct file_info_list_node {
  int num_lines = 0;
  int date[3];
  struct file_info_list_node *predecessor_node;
};

struct array_info_head_node {
  int tot_num_lines;
  int date[3];
  struct array_info_head_node *predecessor_head;
};

struct folder_directory_hash_array {
  struct file_info_list_node[300];
  struct array_info_head_node;
};
