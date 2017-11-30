#include <stdio.h>


#include "project100lib1.h"

#include "project100lib2.h"

#include "project100lib3.h"

#include "project100lib4.h"




int main () {
  long sum = 1;
  
  sum += CPP_project100lib1_1();
  
  sum += CPP_project100lib1_2();
  
  sum += CPP_project100lib2_1();
  
  sum += CPP_project100lib2_2();
  
  sum += CPP_project100lib3_1();
  
  sum += CPP_project100lib3_2();
  
  sum += CPP_project100lib4_1();
  
  sum += CPP_project100lib4_2();
  
  printf("You made %d function calls!", sum);
  return 0;
}
