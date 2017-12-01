// GENERATED SOURCE FILE
#ifndef __LIB5API3__
#define __LIB5API3__

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
struct lib5api31 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib5api32 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib5api33 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib5api34 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib5Api3 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib6Api1& p);
};

#endif

