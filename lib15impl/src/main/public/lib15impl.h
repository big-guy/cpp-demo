// GENERATED SOURCE FILE
#ifndef __LIB15IMPL__
#define __LIB15IMPL__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB15CORE1_H "lib15core1.h"
#include LIB15CORE1_H
#include "lib15core1.h"

#include "lib16api1.h"

/*
 * Here is a type declaration.
 */
struct lib15impl1 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib15impl2 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib15impl3 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib15impl4 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib15Impl {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib15Core1& p);
    void doSomethingWith(Lib16Api1& p);
};

#endif

