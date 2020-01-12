#include "header.h"
///Nama : Visensius Dony Putra
///NIM  : A11.2017.10096
///Tanggal : 15 Mei 2018
int main()
{
    float array2[4];
    int loop=0;
    while(loop<4)
        {
         printf("Masukkan array ke %d: ",loop);
         scanf("%f",&array2[loop]);
         loop++;
        }
    float array[4]={2.80,6.40,9.60,1.80};
    float dicari;
    printf("Masukkan angka yang akan dicari: ");
    scanf("%f",&dicari);
    printf("cari data array %.2f pada indeks ke %.0f",dicari,searching(array2,0,4,dicari));
    puts(" ");
    return 0;
}
