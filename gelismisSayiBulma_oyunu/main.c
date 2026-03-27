#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    srand(time(NULL)); // her calıstırmada farklı sayı uretmesi icin gerekli
    int i,y,x,i_icin;
    int sayi = rand() % 50 + 0;  // 100 - 0 arasi sayı sectirme

    printf("Sistem 50 ila 0 arasinda bir sayi secti. lutfen 10 denemede tahmin etmeye calisiniz.\n");
    printf("Sayilar arasinda;\n5 fark ---> sicak\n10 fark --->ilik\n15 fark ---> soguk\n");
    
    for(i=0;i<10;i++)
    {
        i_icin = i + 1;
        printf("%d. sayinizi tahmin edin: \n",i+1);
        scanf("%d", &y);    
        
        x = abs(y - sayi);
        if(x == 0)
        {
            printf("Tebrikler kazandiniz!!!");
            return 0;
        }
        else if(x<=5)
        {
            printf("Sicak...\n");
        }
        else if(x>5 && x<=10)
        {
            printf("Ilik...\n");
        }
        else if(x>10 && x<=15)
        {
            printf("soguk...\n");
        }
        else
        {
            printf("cok soguk...\n");
        }
        
        printf("kalan hakkiniz: %d\n", 10-i_icin);
    }

    return 0;
}