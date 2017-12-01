// GENERATED SOURCE FILE
#ifndef __LIB13API3__
#define __LIB13API3__

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
struct lib13api31 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib13api32 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib13api33 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib13api34 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib13Api3 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib14Api1& p);
};

#endif

