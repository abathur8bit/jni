# JNI
Java Native Interface (JNI) example. This is a very simple example of how to call a C/C++ function from within Java.

# Requirements
You either need **cmake**, or know how to build a shared lib. I use cmake since a shared lib is a .dll in Windows, .so in Linux and .dylib in macOS. CMake is a little more cross platform friendly.

# Building and running
## Linux/Mac
$ cmake CMakeLists.txt
$ make
$ javac -d . src/java/App.java
$ java -Djava.library.path=. App

# Windows
TODO

# How it works
There are two parts to this app. The Java app itself, and the C++ shared library that the Java app uses via the Java Native Interface.

## The Java piece
You will notice 2 methods declared **native** in **src/java/App.java**. This tells Java that you will be using native code, and are expected to be in the ahred library:

```
public native int add(int n);
public native int print(String msg);
```


## The C++ Piece
Two steps are involved here. First, you would normally create a header file via the following command. Note however that this was already done when I created the project:

```
javah -cp src/java App
```

Once the header file is created, you will create the C++ file, and implement the functions using the function signatures provided in the header. You will see this done in **src/cpp/App.cpp**. 

# Passing parameters to C++
In this example, I have passed an integer, and a String to C++. You can use the int's normally, but strings need to be converted. Do this will a call to 

```
const char *str = env->GetStringUTFChars(string, 0);
```

**str** will then point to the string C++ compatible character string.

