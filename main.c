#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "Posit.h"

// *********************************************************************
void process_arg(char *arg)
{
    if (*arg == '?') 
    {
        printf("usage pp [args]\n");
        exit(0);
    }
    else
    {
        printf("unknown arg '-%s'\n", arg);
    }
}

// *********************************************************************
int main(int argc, char **argv)
{
    for (int i = 1; i < argc; i++)
    {
        char *cp = argv[i];
        if (*cp == '-')
        {
            process_arg(++cp);
        }
    }

    posit_config(2);
    posit_dump(0x83, 8); printf("\n");
    posit_config(2);
    posit_dump(0x39b3, 16); printf("\n");
    posit_config(3);
    posit_dump(0x7e,8); printf("\n");
    printf(" All done.");
    return 0;
}
