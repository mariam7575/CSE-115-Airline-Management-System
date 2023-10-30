#include <stdio.h>
#include <stdlib.h>
#include "splash.h"
#include <unistd.h>
void splashscreen(void);
 int main(void)

 {
    splashscreen();
    sleep(5);
    system("cls");
    sleep(2);
return 0; 
}

