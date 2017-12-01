// GENERATED SOURCE FILE
#ifndef __LIB8IMPL__
#define __LIB8IMPL__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB8CORE1_H "lib8core1.h"
#include LIB8CORE1_H
#include "lib8core1.h"

#include "lib9api1.h"

/*
 * Here is a type declaration.
 */
struct lib8impl1 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib8impl2 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib8impl3 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib8impl4 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib8Impl {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib8Core1& p);
    void doSomethingWith(Lib9Api1& p);
};

#endif

