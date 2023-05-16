//dynlibexample.cpp

#include "dynlibexample.h"
#include<string>



void message() {
  printf("This is a message from a function called from a loaded shared library");
}


int factor(int n) {  
  if (n == 1)
      return 1;
  return n * factor(n - 1);
}


std::string revstring(std::string str, int n) {

  std::string::reverse_iterator itr;
  std::string revstr;

  for (itr = str.rbegin(); itr != str.rend(); itr++){
    revstr += *itr;
  }

  if (n > str.length() || n <= 0 ) n = str.length(); 

  return revstr.substr(0, n);

}
