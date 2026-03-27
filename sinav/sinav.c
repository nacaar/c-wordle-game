#include <stdlib.h>

// 10 elemanlı dizinin sayılarının toplamı


int main ()
{
	int x=0,i,j,sayi,dizi[10];

	for(i=0;i<10;i++)
	{
		printf("%d. sayiyi giriniz: \n",i+1);
		scanf("%d",&sayi);
		x = x + sayi;
	}

	printf(" x : %d",x);




	return 0;
}