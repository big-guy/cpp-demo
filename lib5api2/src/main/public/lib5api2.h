// GENERATED SOURCE FILE
#ifndef __LIB5API2__
#define __LIB5API2__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB6API1_H "lib6api1.h"
#include LIB6API1_H
#include "lib6api1.h"

/*
 * Here is a type declaration.
 */
struct lib5api21 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib5api22 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib5api23 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib5api24 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib5Api2 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib6Api1& p);
};

#endif

