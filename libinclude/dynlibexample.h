//dynlibexample.h

#ifndef MYFUNCTIONS_H
#define MYFUNCTIONS_H

#include<string>
       
extern "C" {
        void message();
        int factor(int);
        std::string revstring(std::string, int);       
}


#endif