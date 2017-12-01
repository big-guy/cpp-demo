// GENERATED SOURCE FILE
#ifndef __LIB10API1__
#define __LIB10API1__

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
struct lib10api11 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib10api12 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib10api13 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib10api14 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib10Api1 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib11Api1& p);
};

#endif

