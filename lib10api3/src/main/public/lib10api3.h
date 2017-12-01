// GENERATED SOURCE FILE
#ifndef __LIB10API3__
#define __LIB10API3__

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
struct lib10api31 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib10api32 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib10api33 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib10api34 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib10Api3 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib11Api1& p);
};

#endif

