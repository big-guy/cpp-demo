// GENERATED SOURCE FILE
#ifndef __LIB11IMPL__
#define __LIB11IMPL__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#define LIB11CORE1_H "lib11core1.h"
#include LIB11CORE1_H
#include "lib11core1.h"

#include "lib12api1.h"

/*
 * Here is a type declaration.
 */
struct lib11impl1 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib11impl2 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib11impl3 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib11impl4 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib11Impl {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib11Core1& p);
    void doSomethingWith(Lib12Api1& p);
};

#endif

