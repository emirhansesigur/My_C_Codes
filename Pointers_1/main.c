#include <stdlib.h>
#include <stdio.h>
// 2 say�y� bir fonksyonun i�inde kar��la�t�rma ve ku��k olan� char yap�s� halinde main i�ine g�nderme.

int *buyukbul(double *dizi)
{
    if(*dizi>*(dizi+1))
        return dizi;
    else return (dizi+1);
}

void main()
{
    double x[2]={1.2344,3.44556};
    printf("%p\n",x);
    printf("%p\n\n",x+1);

    printf("%p",buyukbul(x));
}
