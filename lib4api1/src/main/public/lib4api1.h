// GENERATED SOURCE FILE
#ifndef __LIB4API1__
#define __LIB4API1__

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
struct lib4api11 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib4api12 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib4api13 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib4api14 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib4Api1 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib5Api1& p);
};

#endif

