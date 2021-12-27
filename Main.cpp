
#include <cstdio>
#include <cstdlib>
#include "tutorial01_first_window/tutorial01.h"
#include "tutorial02_red_triangle/tutorial02.h"

int main(int argc,char *argv[])
{
    printf("arg count = %d\n",argc);
    printf("arg count = %s\n",argv[0]);
    printf("arg count = %s\n",argv[1]);

    // tutorial01();

    tutorial02();
    
    return 0;
} 