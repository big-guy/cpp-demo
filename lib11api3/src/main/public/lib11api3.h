// GENERATED SOURCE FILE
#ifndef __LIB11API3__
#define __LIB11API3__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB12API1_H "lib12api1.h"
#include LIB12API1_H
#include "lib12api1.h"

/*
 * Here is a type declaration.
 */
struct lib11api31 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib11api32 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib11api33 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib11api34 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib11Api3 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib12Api1& p);
};

#endif

