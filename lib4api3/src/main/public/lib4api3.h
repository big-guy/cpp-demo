// GENERATED SOURCE FILE
#ifndef __LIB4API3__
#define __LIB4API3__

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
struct lib4api31 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib4api32 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib4api33 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib4api34 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib4Api3 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib5Api1& p);
};

#endif

