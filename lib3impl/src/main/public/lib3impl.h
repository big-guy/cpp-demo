// GENERATED SOURCE FILE
#ifndef __LIB3IMPL__
#define __LIB3IMPL__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB3CORE1_H "lib3core1.h"
#include LIB3CORE1_H
#include "lib3core1.h"

#include "lib4api1.h"

/*
 * Here is a type declaration.
 */
struct lib3impl1 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib3impl2 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib3impl3 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib3impl4 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib3Impl {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib3Core1& p);
    void doSomethingWith(Lib4Api1& p);
};

#endif

