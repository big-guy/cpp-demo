// GENERATED SOURCE FILE
#ifndef __LIB9IMPL__
#define __LIB9IMPL__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB9CORE1_H "lib9core1.h"
#include LIB9CORE1_H
#include "lib9core1.h"

#include "lib10api1.h"

/*
 * Here is a type declaration.
 */
struct lib9impl1 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib9impl2 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib9impl3 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib9impl4 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib9Impl {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib9Core1& p);
    void doSomethingWith(Lib10Api1& p);
};

#endif

