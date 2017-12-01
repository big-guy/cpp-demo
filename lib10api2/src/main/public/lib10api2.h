// GENERATED SOURCE FILE
#ifndef __LIB10API2__
#define __LIB10API2__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB11API1_H "lib11api1.h"
#include LIB11API1_H
#include "lib11api1.h"

/*
 * Here is a type declaration.
 */
struct lib10api21 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib10api22 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib10api23 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib10api24 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib10Api2 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib11Api1& p);
};

#endif

