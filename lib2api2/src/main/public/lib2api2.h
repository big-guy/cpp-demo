// GENERATED SOURCE FILE
#ifndef __LIB2API2__
#define __LIB2API2__

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
struct lib2api21 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib2api22 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib2api23 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib2api24 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib2Api2 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib3Api1& p);
};

#endif

