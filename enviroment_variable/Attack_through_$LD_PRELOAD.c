//
// Created by Ocean on 19/04/2019.
//
#include <stdio.h>
#include <stdlib.h>

 int main()
  {
    sleep(1);
    return 0;
  }



    #include <stdio.h>
  void sleep (int s)
  {
    /* If this is invoked by a privileged program,
       you can do damages here!  */
    printf("I am not sleeping!\n");
  }