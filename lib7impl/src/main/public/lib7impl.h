// GENERATED SOURCE FILE
#ifndef __LIB7IMPL__
#define __LIB7IMPL__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB7CORE1_H "lib7core1.h"
#include LIB7CORE1_H
#include "lib7core1.h"

#include "lib8api1.h"

/*
 * Here is a type declaration.
 */
struct lib7impl1 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib7impl2 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib7impl3 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib7impl4 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib7Impl {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib7Core1& p);
    void doSomethingWith(Lib8Api1& p);
};

#endif

