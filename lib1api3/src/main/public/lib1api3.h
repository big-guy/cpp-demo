// GENERATED SOURCE FILE
#ifndef __LIB1API3__
#define __LIB1API3__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB2API1_H "lib2api1.h"
#include LIB2API1_H
#include "lib2api1.h"

/*
 * Here is a type declaration.
 */
struct lib1api31 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib1api32 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib1api33 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib1api34 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib1Api3 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib2Api1& p);
};

#endif

