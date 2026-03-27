#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

void asama1(){
    printf("   +---+\n");
    printf("   |   |\n");
    printf("       |\n");
    printf("       |\n");
    printf("       |\n");
    printf("       |\n");
    printf("=========\n");
}
void asama2(){
    printf("   +---+\n");
    printf("   |   |\n");
    printf("   O   |\n");
    printf("       |\n");
    printf("       |\n");
    printf("       |\n");
    printf("=========\n");
}
void asama3(){
    printf("   +---+\n");
    printf("   |   |\n");
    printf("   O   |\n");
    printf("  /|   |\n");
    printf("       |\n");
    printf("       |\n");
    printf("=========\n");
}
void asama4(){
    printf("   +---+\n");
    printf("   |   |\n");
    printf("   O   |\n");
    printf("  /|\\  |\n"); // Çift ters eğik çizgi kuralı burada devrede
    printf("       |\n");
    printf("       |\n");
    printf("=========\n");
}
void asama5(){
    printf("   +---+\n");
    printf("   |   |\n");
    printf("   O   |\n");
    printf("  /|\\  |\n");
    printf("  /    |\n");
    printf("       |\n");
    printf("=========\n");
}
void asama6(){
    printf("   +---+\n");
    printf("   |   |\n");
    printf("   O   |\n");
    printf("  /|\\  |\n");
    printf("  / \\  |\n");
    printf("       |\n");
    printf("=========\n");
}
void asama7(){
    printf("   +---+\n");
    printf("   |   |\n");
    printf("   O   |\n");
    printf("  /|\\  |\n");
    printf(" _/ \\  |\n"); // Sol tarafa bir ayak ucu eklendi
    printf("       |\n");
    printf("=========\n");
}
void asama8(){
    printf("   +---+\n");
    printf("   |   |\n");
    printf("   O   |\n");
    printf("  /|\\  |\n");
    printf(" _/ \\_ |\n"); // Sağ tarafa da ayak ucu eklendi (İdam tamamlandı)
    printf("       |\n");
    printf("=========\n");
}



int main() 
{
    int oyunModuSecme,kelimeUzunlugu,i,j,hata_sayisi=0,dogruTahmin=0,harfVarMi=0,tekrar=2;
    char girilen_kelime[15],tahmin_harfi,ekrandakiKelime[20],tekrarOynamak;
    const char *kelime;
   
    while(tekrar>1)
    {
    printf("Tahmin edilecek sayiyi sistemin mi secmesini(1) yoksa siz mi(2) secmek istersiniz?\n");
    scanf("%d",&oyunModuSecme);

    if(oyunModuSecme==1)
    {
        const char *kelimeler[] = {
            "Yazilim", "Bilgisayar", "Muhendislik", "Algoritma",
            "Degisken", "Dongu", "Isaretci", "Fonksiyon",
            "Donanim", "Ag", "Veritabani", "Sunucu","Secici", "Konya"
    
        };
        int kelime_sayisi = sizeof(kelimeler) / sizeof(kelimeler[0]); // dizideki kelime sayisini bulma
        srand(time(NULL)); //rastgele sayi ureticisi baslat
        int rastgele_sayi = rand() % kelime_sayisi; // rastgele sayi sec
        kelime = kelimeler[rastgele_sayi];
    }
    else if (oyunModuSecme==2)
    {
        printf("lutfen bir kelime giriniz: \n");
        scanf(" %s", girilen_kelime);
        printf("kelime basariyla alindi. \n");
        kelime = girilen_kelime;
    }
    // su ana kadar kelimeler belirlendi. kelime adlı degiskende kelime tutuluyor

    kelimeUzunlugu = strlen(kelime);
    
    for(j=0;j<kelimeUzunlugu;j++) // Ekranda görünecek gizli kelimeyi alt çizgilerle dolduruyoruz
    {
        ekrandakiKelime[j] = '_';
    }// for kapanis
    ekrandakiKelime[kelimeUzunlugu] = '\0'; // C dilinde kelimenin bittiğini belirtmek için sonuna \0 koymalıyız!



        while(hata_sayisi<8)
        {
            if(kelimeUzunlugu == dogruTahmin){
                printf("Tebrikler oyunu kazandiniz!!");
                break;
            } // if kapanis
            
            printf("\n==================================\n");
            printf("BULUNACAK KELIME: %s\n", ekrandakiKelime);
            printf("Kalan Hata Hakki: %d\n", 8 - hata_sayisi);
            printf("==================================\n");       
            printf("lutfen bir harf tahmin ediniz: \n");
            scanf(" %c",&tahmin_harfi);
            system("cls");
            
            for (i = 0; i < kelimeUzunlugu; i++)
            {
                if(tolower(tahmin_harfi) == tolower(kelime[i])) // tolower sayesinde buyuk kucuk harf duyarlılıgı gitti
                {
                    printf("tebrikler, sectiginiz harf kelimenin %d. harfi!\n",i+1);
                    dogruTahmin++;
                    harfVarMi=1;
                    ekrandakiKelime[i]= kelime[i];
                }// if kapanış
            } // for kapanis 
    
            if(harfVarMi==0)
            {
                hata_sayisi++;
                system("cls");
                printf("maalasef sectiginiz harf kelime icinde bulunmuyor!!\n");
                if(hata_sayisi == 1) asama1();
                else if(hata_sayisi == 2) asama2();
                else if(hata_sayisi == 3) asama3();
                else if(hata_sayisi == 4) asama4();
                else if(hata_sayisi == 5) asama5();
                else if(hata_sayisi == 6) asama6();
                else if(hata_sayisi == 7) asama7();
                else if(hata_sayisi == 8) {
                    asama8();
                    printf("\n--- OYUN BITTI! ASILDINIZ! ---\n");
                    printf("Dogru kelime: %s\n", kelime);
                break;
                }//else if kapanıs
                
            }// if kapanis
            harfVarMi = 0;
        }//while kapanis

        
        printf("\nOyunu tekrar oynamak ister misiniz?(E/H)");
        scanf(" %c",&tekrarOynamak);
        if(tekrarOynamak=='E' || tekrarOynamak == 'e')
        {
            tekrar=2;
            hata_sayisi=0;
            dogruTahmin=0;
        
        }
        else if(tekrarOynamak=='H' || tekrarOynamak == 'h')
        {
            tekrar = 0;
        }

    } // while kapanis
    
    return 0;
}// int main kapanıs