// GENERATED SOURCE FILE
#ifndef __LIB14IMPL__
#define __LIB14IMPL__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB14CORE1_H "lib14core1.h"
#include LIB14CORE1_H
#include "lib14core1.h"

#include "lib15api1.h"

/*
 * Here is a type declaration.
 */
struct lib14impl1 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib14impl2 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib14impl3 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib14impl4 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib14Impl {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib14Core1& p);
    void doSomethingWith(Lib15Api1& p);
};

#endif

