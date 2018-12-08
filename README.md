# jni
Java Native Interface example. This is a very simple example of how to call a C/C++ function from within Java.

# Requirements
You need cmake, or know how to build a shared lib. I use cmake since a shared lib is a .dll in Windows, .so in Linux and .dylib in Mac. CMake is a little more cross platform friendly.

# Building and running
## Linux/Mac
$ cmake CMakeLists.txt
$ make
$ javac -d . src/java/App.java
$ java -Djava.library.path=. App

# How it works
There are two parts to this app. The Java app itself, and the C++ shared library that the Java app uses via the Java Native Interface.
## The Java piece
You will notice 2 methods declared **native** in **src/java/App.java**. This tells Java that you will be using native code:

```
public native int add(int n);
public native int print(String msg);
```

The methods defined with **native** are expected to be in the shared library. 
##C++ Piece
Two steps are involved here. First, you would normally create a header file via the following command:

```
javah -cp src/java App
```

This will create App.h.