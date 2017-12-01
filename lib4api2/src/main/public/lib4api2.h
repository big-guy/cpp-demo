// GENERATED SOURCE FILE
#ifndef __LIB4API2__
#define __LIB4API2__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB5API1_H "lib5api1.h"
#include LIB5API1_H
#include "lib5api1.h"

/*
 * Here is a type declaration.
 */
struct lib4api21 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib4api22 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib4api23 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib4api24 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib4Api2 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib5Api1& p);
};

#endif

