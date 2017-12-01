// GENERATED SOURCE FILE
#ifndef __LIB12API2__
#define __LIB12API2__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB13API1_H "lib13api1.h"
#include LIB13API1_H
#include "lib13api1.h"

/*
 * Here is a type declaration.
 */
struct lib12api21 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib12api22 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib12api23 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib12api24 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib12Api2 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib13Api1& p);
};

#endif

