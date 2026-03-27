#include <stdio.h>


int main()
{
    int dizi[10];
    int i,x = 0;

    for(i=0;i<10;i++)
    {
        printf("lutfen %d. sayiyi giriniz: \n",i+1);
        scanf ("%d",&dizi[i]);
        
    }
    
    for(i=0;i<10;i++)
    {
       if(dizi[i]>x)
        {
            x = dizi[i];
        } 
    }    

    printf("xxxx: %d",x);

    return 0;
}