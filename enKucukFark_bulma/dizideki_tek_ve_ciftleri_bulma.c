#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i,j;
    int dizi[10];
    float x,y=999999;

    for(i=0;i<10;i++)
    {
        printf("lutfen dizinin %d. elemanini giriniz: \n",i+1);
        scanf("%d",&dizi[i]);
    }
    
    
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(i==j)
            {
                continue;
            }
            x = abs(dizi[i] - dizi[j]); // abs mutlak degerini alır -1 oldugunda 1 olarak dısarı cıkar.
            if(x<y)
            {
                y = x;
            }
        }    
    }
    if(y == 0)
    {
        printf("Ayni sayi girildigi icin fark sifirdir.");
    }
    else 
    {
        printf("xxxx: %0.2f",y);
    }

    return 0;
}