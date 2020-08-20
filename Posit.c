// Posit.c - simple implementation of Posits

#include "Posit.h"

BYTE es = 2;
ULONG useed = 16;

ULONG pow2(int power)
{
    unsigned long ret = 1;
    for (int i = 0; i < power; i++)
        ret *= 2;
    return ret;
}

void posit_config(int expBits)
{
    es = expBits;
    useed = pow2(pow2(expBits));
}

void unpack_8(POSIT_8 val, POSIT_T *p)
{

}

void unpack_16(POSIT_16 val, POSIT_T *p)
{

}

void unpack_32(POSIT_32 val, POSIT_T *p)
{

}