// Posit.h - simple implementation of Posits

typedef unsigned char BYTE;
typedef unsigned long ULONG;

typedef struct {
    BYTE isNeg;
    BYTE regime;
    BYTE exp;
    unsigned long fraction;
} POSIT_T;

typedef unsigned char  POSIT_8;
typedef unsigned short POSIT_16;
typedef unsigned long  POSIT_32;

extern BYTE es;
extern ULONG useed;

ULONG pow2(int);
void posit_config(int);
void posit_dump(ULONG, BYTE);
void posit_dump8(POSIT_8);