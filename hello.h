#pragma once
#include <string>

#ifdef WIN32
  #define HELLO_EXPORT __declspec(dllexport) 
#else
  #define HELLO_EXPORT  
#endif

HELLO_EXPORT void hello();
HELLO_EXPORT std::string getIdString(const uint16_t f_id);