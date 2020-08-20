#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
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

    posit_config(1);
    printf(" %d, %ld", es, useed);
    posit_config(2);
    printf(" %d, %ld", es, useed);
    posit_config(3);
    printf(" %d, %ld", es, useed);
    printf(" All done.");
    return 0;
}
