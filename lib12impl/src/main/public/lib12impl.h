// GENERATED SOURCE FILE
#ifndef __LIB12IMPL__
#define __LIB12IMPL__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB12CORE1_H "lib12core1.h"
#include LIB12CORE1_H
#include "lib12core1.h"

#include "lib13api1.h"

/*
 * Here is a type declaration.
 */
struct lib12impl1 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib12impl2 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib12impl3 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib12impl4 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib12Impl {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib12Core1& p);
    void doSomethingWith(Lib13Api1& p);
};

#endif

