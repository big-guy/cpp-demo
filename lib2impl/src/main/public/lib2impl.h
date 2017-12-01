// GENERATED SOURCE FILE
#ifndef __LIB2IMPL__
#define __LIB2IMPL__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB2CORE1_H "lib2core1.h"
#include LIB2CORE1_H
#include "lib2core1.h"

#include "lib3api1.h"

/*
 * Here is a type declaration.
 */
struct lib2impl1 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib2impl2 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib2impl3 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib2impl4 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib2Impl {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib2Core1& p);
    void doSomethingWith(Lib3Api1& p);
};

#endif

