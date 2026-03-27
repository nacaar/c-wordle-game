#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    srand(time(NULL)); // her calıstırmada farklı sayı uretmesi icin gerekli
    int i,x;
    int sayi = rand() % 100 + 0;  // 100 - 0 arasi sayı sectirme

    printf("Sistem 100 ila 0 arasinda bir sayi secti lutfen tahmin etmeye calisiniz.\n");
    printf("%d\n",sayi);
    for(i=0;i<100;i++)
    {
        printf("lutfen sistemin sectigi sayiyi tahmin ediniz: \n");
        scanf("%d",&x);
        if(x==sayi)
        {
            printf("Oyunu kazandiniz, tebrikler");
            return 0;
        }
        printf("Tekrar deneyiniz...\n");
    }

    return 0;
}