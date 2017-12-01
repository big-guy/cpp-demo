// GENERATED SOURCE FILE
#ifndef __LIB16API2__
#define __LIB16API2__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB17API1_H "lib17api1.h"
#include LIB17API1_H
#include "lib17api1.h"

/*
 * Here is a type declaration.
 */
struct lib16api21 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib16api22 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib16api23 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib16api24 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib16Api2 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib17Api1& p);
};

#endif

