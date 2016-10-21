
#ifndef VSL_STL_SYS_H
#define VSL_STL_SYS_H

#include <string.h>
#if defined (__unix__) || (defined (__APPLE__) && defined (__MACH__))
#include <unistd.h>
#else
#include <direct.h>
#endif

bool set_workdir(const std::string dir);
std::string get_workdir();

#endif //VSL_STL_SYS_H