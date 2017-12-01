// GENERATED SOURCE FILE
#ifndef __LIB2API3__
#define __LIB2API3__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB3API1_H "lib3api1.h"
#include LIB3API1_H
#include "lib3api1.h"

/*
 * Here is a type declaration.
 */
struct lib2api31 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib2api32 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib2api33 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib2api34 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib2Api3 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib3Api1& p);
};

#endif

