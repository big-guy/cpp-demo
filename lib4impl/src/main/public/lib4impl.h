// GENERATED SOURCE FILE
#ifndef __LIB4IMPL__
#define __LIB4IMPL__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB4CORE1_H "lib4core1.h"
#include LIB4CORE1_H
#include "lib4core1.h"

#include "lib5api1.h"

/*
 * Here is a type declaration.
 */
struct lib4impl1 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib4impl2 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib4impl3 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib4impl4 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib4Impl {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib4Core1& p);
    void doSomethingWith(Lib5Api1& p);
};

#endif

