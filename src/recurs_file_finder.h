#ifndef _RECURS_FILE_FINDER_H
#define _RECURS_FILE_FINDER_H

#include "boost/filesystem.hpp"
#include "boost/foreach.hpp"
#include "hash_struct.h"

script_data* number_of_lines(boost::filesystem::path const &p);

#endif
