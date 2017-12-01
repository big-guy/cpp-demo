// GENERATED SOURCE FILE
#ifndef __LIB14API2__
#define __LIB14API2__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB15API1_H "lib15api1.h"
#include LIB15API1_H
#include "lib15api1.h"

/*
 * Here is a type declaration.
 */
struct lib14api21 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib14api22 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib14api23 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib14api24 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib14Api2 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib15Api1& p);
};

#endif

