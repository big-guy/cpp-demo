// GENERATED SOURCE FILE
#ifndef __LIB6IMPL__
#define __LIB6IMPL__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB6CORE1_H "lib6core1.h"
#include LIB6CORE1_H
#include "lib6core1.h"

#include "lib7api1.h"

/*
 * Here is a type declaration.
 */
struct lib6impl1 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib6impl2 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib6impl3 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib6impl4 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib6Impl {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib6Core1& p);
    void doSomethingWith(Lib7Api1& p);
};

#endif

