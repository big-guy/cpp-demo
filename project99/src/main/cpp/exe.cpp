#include <stdio.h>


#include "project99lib1.h"

#include "project99lib2.h"

#include "project99lib3.h"

#include "project99lib4.h"




int main () {
  long sum = 1;
  
  sum += CPP_project99lib1_1();
  
  sum += CPP_project99lib1_2();
  
  sum += CPP_project99lib2_1();
  
  sum += CPP_project99lib2_2();
  
  sum += CPP_project99lib3_1();
  
  sum += CPP_project99lib3_2();
  
  sum += CPP_project99lib4_1();
  
  sum += CPP_project99lib4_2();
  
  printf("You made %d function calls!", sum);
  return 0;
}
