// GENERATED SOURCE FILE
#ifndef __LIB9API2__
#define __LIB9API2__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB10API1_H "lib10api1.h"
#include LIB10API1_H
#include "lib10api1.h"

/*
 * Here is a type declaration.
 */
struct lib9api21 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib9api22 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib9api23 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib9api24 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib9Api2 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib10Api1& p);
};

#endif

