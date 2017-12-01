// GENERATED SOURCE FILE
#include "app.h"
#include "app_private.h"
#include "lib1api1.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int app1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int app2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int app3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int app4(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int main() {
    App app;
    app.doSomething();
    std::cout << "it works" << std::endl;
    return 0;
}

/*
 * Here is a function.
 */
void App::doSomething() {
    Lib1Api1 lib1api1;
    lib1api1.doSomething();
    AppImpl1Api1 appimpl1api1;
    appimpl1api1.doSomething();
    AppImpl1Api2 appimpl1api2;
    appimpl1api2.doSomething();
    AppImpl1Api3 appimpl1api3;
    appimpl1api3.doSomething();
}

