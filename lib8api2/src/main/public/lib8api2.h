// GENERATED SOURCE FILE
#ifndef __LIB8API2__
#define __LIB8API2__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB9API1_H "lib9api1.h"
#include LIB9API1_H
#include "lib9api1.h"

/*
 * Here is a type declaration.
 */
struct lib8api21 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib8api22 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib8api23 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib8api24 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib8Api2 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib9Api1& p);
};

#endif

