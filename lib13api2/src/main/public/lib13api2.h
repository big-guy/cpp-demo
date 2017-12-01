// GENERATED SOURCE FILE
#ifndef __LIB13API2__
#define __LIB13API2__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB14API1_H "lib14api1.h"
#include LIB14API1_H
#include "lib14api1.h"

/*
 * Here is a type declaration.
 */
struct lib13api21 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib13api22 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib13api23 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib13api24 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib13Api2 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib14Api1& p);
};

#endif

