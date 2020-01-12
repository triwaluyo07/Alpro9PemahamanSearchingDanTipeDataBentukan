#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
}sumbu;

sumbu input_sumbu();
void output_sumbu(sumbu jarak);

typedef struct
{
    char nama[100];
    char nim [20];
}mhs;

mhs input_data();
void output(mhs M);
void output2(mhs M[],int batas);
#endif // HEADER_H_INCLUDED
