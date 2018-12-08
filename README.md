# jni
Java Native Interface example. This is a very simple example of how to call a C/C++ function from within
Java.

# Requirements
You need cmake, or know how to build a shared lib. I use cmake since a shared lib is a .dll in Windows, .so in Linux and .dylib in Mac. CMake is a little more cross platform friendly.

# Building Linux/Mac
$ cmake CMakeLists.txt
$ make
$ javac -d . src/java/App.java
$ java -Djava.library.path=. App

# The Java piece
