#include "header.h"

///Nama : Tri Waluyo
///Kelas : A11.4203
///NIm : A11.2017.10097

int main()
{
    sumbu xy;
    xy = input_sumbu();
    puts("\n");
    output_sumbu(xy);

    puts("\n");

    mhs A[2]; ///2-> batas input
    A[0]=input_data();
    puts("\n");
    A[1]=input_data();
    puts("\n");
    output2(A,2);
    return 0;
}
