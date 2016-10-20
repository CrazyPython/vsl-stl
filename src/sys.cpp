#include <string.h>

#if defined (__unix__) || (defined (__APPLE__) && defined (__MACH__))
#define ON_UNIX 0
#elif defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
#define ON_WINDOWS 1
#else
#error "unknown operating system - neither unix or windows"
#endif


#ifdef ON_UNIX
#include <unistd.h>

#else
#include <direct.h>
#define _chdir chdir
#define _getcwd getcwd
#endif

// TODO: Test below functions for effectiveness
// TODO: Implement wide char version

bool set_workdir(const std::string dir) {
    return chdir(dir.c_str()) != 0;
}

// TODO: Figure out proper buffer length to implement this
std::string get_workdir();
