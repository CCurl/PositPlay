// Posit.c - simple implementation of Posits

#include <stdio.h>
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

void posit_bits(ULONG p, BYTE *bits, int sz)
{
    while (sz > 0)
    {
        bits[--sz] = p & 0x01;
        p = p >> 1;
    }
}

void posit_dump(ULONG p, BYTE sz)
{
    BYTE bits[64], r, b = 1;
    posit_bits(p, bits, sz);
    
    // Sign bit
    printf("useed: %ld, es: %d, %02x, s%d r", useed, es, p, bits[0]);
    
    // Regime bits
    r = bits[1];
    while ((b < sz) && (bits[b] == r))
    {
        printf("%d", bits[b++]);
    }
    printf("%d", bits[b++]);

    // exp (sz = es)
    printf(" e");
    r = es;
    while ((b < sz) && (r > 0))
    {
        printf("%d", bits[b++]);
        r--;
    }

    // fraction - the rest
    printf(" f");
    while (b < sz)
    {
        printf("%d", bits[b++]);
    }
}

void posit_dump8(POSIT_8 p)
{
    posit_dump(p, 8);
}

void posit_dump8x(POSIT_8 p)
{
    ULONG val = pow2(7);

    printf("es: %d, useed: %ld", es, useed);
    printf("%d ", p, (p & val) ? 1 : 0);
    while (val > 1)
    {
        val = val >> 1;
        printf("%d", (p & val) ? 1 : 0);
    }
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