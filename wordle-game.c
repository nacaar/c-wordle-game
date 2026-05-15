#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
    int uzunluk,i,j,uzunluk2,tekrar = 0,basari = 0;
    char kelime[16];    
    
    while(1){
        
        while(1){
            printf("lutfen kelimenizi giriniz(max_len 15): ");
            fgets(kelime,sizeof(kelime),stdin);
            kelime[strcspn(kelime, "\n")] = '\0';  // gemini --> fgets ile string alırken en sona \n koyar onu siliyoruz.
            uzunluk = strlen(kelime);
            
            if(uzunluk==0){
                printf("\n\nlutfen bir kelime giriniz!!\n\n");
            }
            else{
                break;
            }
        }
        
        
        char harfTahmin[uzunluk+2]; // +2 olmasının sebebi 48. satırdaki hatayı vermek icin fgets Kullanıcı klavyeden "kocamanbirkelime" (16 harf) yazıp Enter'a bassa bile
                                    //fgets sadece ilk 5 harfi ("kocam") alır ve sonuna \0 koyar.

        Sleep(750);
        printf("\n\n\nTum hazirliklar tamam! Oyun basliyor...\n\n");
        Sleep(1250);
        
        printf("Kelimeniz: \n\n\n    ");
        Sleep(1000);
        for(i=0;i<uzunluk;i++){
            printf("_");
            Sleep(250);
        }
       
        while(1){
            while (1){
                printf("\nlutfen bir kelime tahmin ediniz: ");
                fgets(harfTahmin,sizeof(harfTahmin),stdin);
            
                    // Güvenlik Duvarı: Artan harfleri çöpe at ve sondaki Enter'ı sil 
                if (strchr(harfTahmin, '\n') == NULL) {
                    int c;
                    while ((c = getchar()) != '\n' && c != EOF);  // geminiden aldım
                } else {
                    harfTahmin[strcspn(harfTahmin, "\n")] = '\0'; 
                }

                uzunluk2 = strlen(harfTahmin);
                if(uzunluk2>uzunluk){
                    printf("lutfen kelimeden daha uzun kelime girmeye calismayin!!\n");
                }
                else {
                    break;
                }
            }
            

            for(i=0;i<uzunluk;i++){
                if(harfTahmin[i]==kelime[i]){ 
                    printf("%c",kelime[i]);
                    basari++;
                }
                else{
                    printf("_"); 
                }
            }
            printf("\n");
            
            
            printf("\nkelimenizde olup yeri yanlis olan harfler:");
            
            
            for(i=0;i<uzunluk;i++){
                for(j=0;j<uzunluk;j++){
                    if(harfTahmin[i] == kelime[j] && harfTahmin[i] != kelime[i]){ // sadece yeri yanlıs olan harfler
                        printf(" %c ",harfTahmin[i]);
                        break;
                    }
            }
            }
            if(basari==uzunluk){
                printf("\ntebrikler kelimeyi basariyla buldunuz!!\n");
                break;
            }
            basari = 0;
        }
    
    printf("\n\ntekrar oynamak ister misiniz?(1/0)\n");
    scanf("%d",&tekrar);
    getchar();
    
    if(tekrar==1){
        basari = 0;
        continue;
    }
    else{
        return 1;
    }
}//while kapanıs


    return 0;
} // int main kapanıs