// GENERATED SOURCE FILE
#ifndef __LIB13IMPL__
#define __LIB13IMPL__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB13CORE1_H "lib13core1.h"
#include LIB13CORE1_H
#include "lib13core1.h"

#include "lib14api1.h"

/*
 * Here is a type declaration.
 */
struct lib13impl1 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib13impl2 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib13impl3 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib13impl4 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib13Impl {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib13Core1& p);
    void doSomethingWith(Lib14Api1& p);
};

#endif

