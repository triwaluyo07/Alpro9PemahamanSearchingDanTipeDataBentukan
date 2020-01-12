#include "header.h"

sumbu input_sumbu()
{
  sumbu jarak;
  printf("input x : ");
  scanf("%d",&jarak.x);
  printf("input y : ");
  scanf("%d",&jarak.y);

  return jarak;
}
void output_sumbu(sumbu jarak)
{
    printf("nilai x = %d\n",jarak.x);
    printf("nilai y = %d\n",jarak.y);
    printf("Hasil x+y = %d \n",jarak.x+jarak.y);
}

mhs input_data()
{
    mhs M;
    fflush(stdin);
    printf("input nama : ");
    gets(M.nama);
    printf("input nim : ");
    gets(M.nim);

}
void output(mhs M)
{
    printf("nama : %s\n",M.nama);
    printf("nim  : %s\n",M.nim);
}
void output2(mhs M[],int batas)
{
    if(batas==0)
    {

    }
    else
    {
    printf("nama : %s\n",M[batas-1].nama);
    printf("nim  : %s\n",M[batas-1].nim);
    output2(M,batas-1);
    }

}
