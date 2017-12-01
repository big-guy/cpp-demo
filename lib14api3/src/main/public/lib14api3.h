// GENERATED SOURCE FILE
#ifndef __LIB14API3__
#define __LIB14API3__

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
struct lib14api31 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib14api32 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib14api33 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib14api34 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib14Api3 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib15Api1& p);
};

#endif

