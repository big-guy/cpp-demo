// GENERATED SOURCE FILE
#ifndef __LIB8API1__
#define __LIB8API1__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB9API1_H "lib9api1.h"
#include LIB9API1_H
#include "lib9api1.h"

/*
 * Here is a type declaration.
 */
struct lib8api11 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib8api12 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib8api13 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib8api14 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib8Api1 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib9Api1& p);
};

#endif

