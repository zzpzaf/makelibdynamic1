# <p style="color:blue;"> C++ Create a simple shared/dynamic library in both Linux and macOS</p>

### <p style="background-color:darkblue; color:white">Dive not that deep, but just enough to get the grasp!</p>
---

This is a simple project, consisting of just 1 code and 1 header file. 
Its purpose is to provide a simple example of how to create a dynamic library that later on it can be dynamically loaded. It exposes just 3 simple functions, which we enclose in a ```extern "C" { ... }``` block, for un-mangling their symbols in the compiled binary. 

- The source code is self explainable. 
- The makefile **makedynlib** is also included and contains several useful targets.

