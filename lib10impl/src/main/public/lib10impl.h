// GENERATED SOURCE FILE
#ifndef __LIB10IMPL__
#define __LIB10IMPL__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB10CORE1_H "lib10core1.h"
#include LIB10CORE1_H
#include "lib10core1.h"

#include "lib11api1.h"

/*
 * Here is a type declaration.
 */
struct lib10impl1 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib10impl2 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib10impl3 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib10impl4 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib10Impl {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib10Core1& p);
    void doSomethingWith(Lib11Api1& p);
};

#endif

