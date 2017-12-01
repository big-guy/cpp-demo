// GENERATED SOURCE FILE
#ifndef __LIB5IMPL__
#define __LIB5IMPL__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB5CORE1_H "lib5core1.h"
#include LIB5CORE1_H
#include "lib5core1.h"

#include "lib6api1.h"

/*
 * Here is a type declaration.
 */
struct lib5impl1 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib5impl2 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib5impl3 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib5impl4 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib5Impl {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib5Core1& p);
    void doSomethingWith(Lib6Api1& p);
};

#endif

