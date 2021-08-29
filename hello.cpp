#include <iostream>

#include "hello.h"


void hello() {
    #ifdef NDEBUG
    std::cout << "Hello World Release!" <<std::endl;
    #else
    std::cout << "Hello World Debug!" <<std::endl;
    #endif
}

std::string getIdString(const uint16_t f_id) 
{
    return std::to_string( f_id );
}
