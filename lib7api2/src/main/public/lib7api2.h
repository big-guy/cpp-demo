// GENERATED SOURCE FILE
#ifndef __LIB7API2__
#define __LIB7API2__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB8API1_H "lib8api1.h"
#include LIB8API1_H
#include "lib8api1.h"

/*
 * Here is a type declaration.
 */
struct lib7api21 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib7api22 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib7api23 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib7api24 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib7Api2 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib8Api1& p);
};

#endif

