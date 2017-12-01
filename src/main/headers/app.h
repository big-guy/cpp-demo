// GENERATED SOURCE FILE
#ifndef __APP__
#define __APP__

#define APP_DEFS1_H "app_defs1.h"
#include APP_DEFS1_H
#include "app_defs1.h"

#include "lib1api1.h"

/*
 * Here is a type declaration.
 */
struct app1 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct app2 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct app3 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct app4 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class App {
  public:
    void doSomething();
    void doSomethingWith(Lib1Api1& p);
};

/*
 * Here is a type declaration.
 */
class AppImpl3Api {
  public:
    void doSomething();
};

/*
 * Here is a type declaration.
 */
class AppImpl2Api1 {
  public:
    void doSomething();
};

/*
 * Here is a type declaration.
 */
class AppImpl1Core1 {
  public:
    void doSomething();
};

/*
 * Here is a type declaration.
 */
class AppImpl1Core2 {
  public:
    void doSomething();
};

/*
 * Here is a type declaration.
 */
class AppImpl2Api2 {
  public:
    void doSomething();
};

/*
 * Here is a type declaration.
 */
class AppImpl1Impl {
  public:
    void doSomething();
    void doSomethingWith(AppImpl1Core1& p);
    void doSomethingWith(AppImpl2Api1& p);
};

/*
 * Here is a type declaration.
 */
class AppImpl1Api1 {
  public:
    void doSomething();
    void doSomethingWith(AppImpl2Api1& p);
};

/*
 * Here is a type declaration.
 */
class AppImpl1Api2 {
  public:
    void doSomething();
    void doSomethingWith(AppImpl2Api1& p);
};

/*
 * Here is a type declaration.
 */
class AppImpl1Api3 {
  public:
    void doSomething();
    void doSomethingWith(AppImpl2Api1& p);
};

#endif

