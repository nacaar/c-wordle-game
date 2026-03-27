#include <stdio.h>
#include <windows.h> 

// s1_b1 = sezon 1 bolum 1 anlaminda

int secim,secim2,secim3,secim4,kiyafet,gun_sonu,el_feneri;
int sorumluluk=0, sakarlik=0, duzensizlik=0,arkadas_canlisi=0,rapor_gecikme = 0,flortoz=0,mizah=0,mont=0,aceleci=0; // başarımlar

// sezon 1 void // işe geç kalma 
void s1_b1() {
    printf("Sabah uyandın...\n");
    Sleep(2000);
    printf("Güneş yüzüne vuruyor.\n");
    Sleep(2000);
}
void s1_b2() {
    printf("Yataktan kalktın ve elini yüzünü yıkamak için tuvalete gittin\n");
    Sleep(2000);
    printf("Aç olduğunu fark ettin.\n"); 
    sorumluluk = 1;
}
void s1_b3() {
    printf("Ring...Ring...\n");
    Sleep(1000);
    printf("Uyandın ve patronun seni arıyor!\n");
    Sleep(750);
}
void s1_b4() {
    printf("Kahvaltıyı hazırlamak için mutfağa doğru yol aldın...\n");
    Sleep(2000);
    printf("Buzdolabından malzemeleri çıkarıp kahvaltını yaptın.\n");
}
void s1_b5() {
    sakarlik = 1;
    printf("Evden kahve ve birkaç atıştırmalık alıp arabana doğru yola koyuldun.\n");
    Sleep(2000);
    printf("Olamaz! Arabaya binerken kahveyi üstüne döktün!\n");
    Sleep(2000);
}
void s1_b13() {
    printf("Kıyafet değiştirecek zamanının olmadığını düşünerek doğruca işe gittin\n");
    Sleep(2000);
    printf("Patronun kıyafetini görünce seni azarlayıp masana yolladı.\n");
    Sleep(2000);
}
void s1_b14() {
    printf("Kıyafetlerini hızlıca değiştirip tekrar arabaya yöneldin.\n");
    Sleep(1500);
    printf("Arabayı iş yerine doğru sürdün ve iş yerine vardın\n");
    Sleep(1500);
    printf("Patronun çok geç kaldığını belirterek seni azarladı ve masana yolladı\n");
    Sleep(2000);
}
void s1_b9() {
    printf("Patronuna trafikte kaldığını söyledin ve sana olabildiğince hızlı gelmeni söyledi\n");
}
void s1_b10() {
    printf("Patronun bu davranışını devam ettireceğin halde seni kovacağını söyledi!\n");
    Sleep(2000);
    duzensizlik = 0;
}

// sezon 2 void // iş - melisayla yemek

void s2_b1() {
    printf("Masana oturdun ve mailleri kontrol ettin.\n");
    Sleep(2000);
    printf("Patronun senden rapor istemiş.\n");
    Sleep(1500);
    printf("Raporu hazırlıyorsun...\n");
    Sleep(3000);
    printf("Arkadaşın Ahmet senden yardım istiyor...\n");
    printf("1-)Yardım Et\n2-)Yardım etme\n");
    scanf("%d",&secim);
}
void s2_b2() {
    if (secim == 1) {
        arkadas_canlisi = 1; // basarım kazanıldı.
        rapor_gecikme = 1;
        printf("Ahmet yardımın için çok teşekkür etti.\n");
        Sleep(2000);
        printf("Bir saniye!\n");
        Sleep(1000);
        printf("Patronun verdiği raporları yetiştiremedin!\n");
        Sleep(2000);
    }
    else if (secim == 2) {
        printf("Ahmet'i reddettiğin için sana gönül koydu.\n");
        Sleep(2000);
        printf("Fakat raporları zamanında teslim ettin!\n");
        rapor_gecikme = 0;
    }
    else {
        printf("HATALI TUSLAMA");
        Sleep(1000);
        exit(0);
    }
}
void s2_b3() {
    printf("Patron seni odasına çağırıyor...\n");
    Sleep(2000);
    printf("Patron: Bugün oldukça şansını zorladın. Bunun böyle devam etmesini istemiyorum.\n");
    Sleep(2000);
    if (rapor_gecikme == 1) {  // farklı azarlama cumleleri icin yapıldı.
        printf("Patron: Senin raporu zamanında teslim etmen gerekiyor. İşini düzgün yap!\n");
        Sleep(500);
    }

    printf("1-)Özür dilerim, tekrarı olmayacak patron.\n2-)İsteyerek yaptığım bir şey değil patron, azarlamanıza gerek yok\n3-)Ters çık!\n");
    scanf("%d",&secim);
    if (secim == 1 || secim == 2) {
        printf("Patronla aranı düzelttin.\n");
        Sleep(500);
    }
    else if (secim==3) {
        printf("Patron seni odasından kovdu!\n");
        Sleep(500);
    }
}
void s2_b4() {
    printf("İş çıkış saati gelmişti ki...\n");
    Sleep(750);
    printf("Melisa: Beraber akşam yemeği için bir yerlere gidelim mi?\n");
    Sleep(1000);
    printf("1-)Kabul et\n2-)Reddet\n");
    scanf("%d", &secim2);
    if (secim2 == 1) {
        printf("Restorana doğru gidiyorsunuz...\n");
        Sleep(3000);
        printf("Yolda bir çiçekçi gördün\n");
        printf("1-)Ona bir çiçek al\n2-)Çiçek alma\n");
        scanf("%d",&secim2);
        if (secim2 == 1) {
            printf("Melisa çiçeği koklayarak teşekkür ettiğini söyler.\n");
            flortoz = 1;
            Sleep(1500);
        }
        else if (secim2 == 2) {
            printf("Ona çiçek almadığın için hayal kırıklığına uğradı. :c\n");
            Sleep(1000);
        }
        else {
            printf("HATALI TUSLAMA");
            Sleep(500);
            exit(0);
        }
    }
    else if (secim2 == 2) {
        printf("Eve gidip günün geçmesini bekledin.\n");
        gun_sonu = 1; // 3. sezona kadar diger tum voidlerin icine bunu if olarak eklemeliyim yoksa 3. sezona gecmek yerine 2. sezondan devam eder.
    }
    
}
void s2_b5() {
    if (gun_sonu == 1){ // oyuncunun 3. sezona direkt olarak gecmesi icin gerekli.
        return;
    }
        
    printf("Restorana girdiniz ve yemek siparişi verdiniz.\n");
    Sleep(2500);
    printf("Güzel bir akşam geçirdiniz.\n");
    Sleep(1500);
    if (kiyafet == 1) {
        printf("Melisa: Kıyafetindeki leke ne?\n");
        Sleep(1500);
        printf("1-)Şaka katarak söyle\n2-)Direkt söyle\n");
        scanf("%d",&secim);
        if (secim == 1) {
            mizah=1;
            printf("Melisayı güldürdün. .d\n");
            Sleep(1500);
        }
        else if (secim == 2) {
            printf("Melisa: hahaha, ne sakarsın sen :)");
            Sleep(1500);
        }
        
        
    }
}
void s2_b6() {
    if (gun_sonu == 1) { // oyuncunun 3. sezona direkt olarak gecmesi icin gerekli.
        return;
    }

    printf("Restorandan çıktınız.\n");
    Sleep(1500);
    printf("1-)Onu evine bırak.\n2-)Kendi evine git.\n");
    scanf("%d", &secim);
    if (secim==1) {
        printf("Melisa'yı evine bıraktın\n");
        Sleep(1000);
        printf("Melisa seni kahve içmek için evine çağırıyor.\n");
        printf("1-)Daveti kabul et\n2-)Daveti reddet.\n");
        scanf("%d", &secim2);
        if (secim2 == 1) {
            printf("Eve çıkıp kahvenizi içtiniz.\n");
            Sleep(1500);
            printf("Melisa bu gece burada kalmanı istedi.\n");
            Sleep(1500);
            printf("1-)Kal\n2-)Evine git\n");
            scanf("%d",&secim3);
            if (secim3 == 1 && kiyafet == 1) { // kıyafet degismemisse 
                printf("Gece orada kaldın ama sabah kıyafetini değiştirmek için evine uğradın.");
                Sleep(2500);
            }
            if (secim3 == 1) {
                printf("Gece orada kaldın ama sabah eşyaların için evine uğradın.");
                Sleep(2500);
            }
            else if (secim3 == 2) {
                printf("Evine doğru yola çıktın.");
                Sleep(1500);
            }

        }
        else if (secim2 == 2) {
            printf("Evine gidip günün bitmesini bekledin.\n");
            gun_sonu = 1;
        }
    
    }
    else if (secim == 2) {
        printf("Evine gidip günün bitmesini bekledin.\n");
        gun_sonu = 1;
    }

}

// sezon 3 void // -- ormana doğru gitme - tepeye varma - yerlesim yerine dogru yola koyulma 

void s3_b1_1() {  // arabadan tepeye kadar gecen sure // gerekli. sezon 3 kısmına yazmayacaksın diger voidlerin icinde kullanıyorum. //
    printf("Daha önce bu tepeye gelmiştin.\n");
    Sleep(500);
    printf("Ormanda bir tepe olduğunu hatırladın!\n");
    Sleep(500);
    printf("Tepeye doğru yürümeye başlayacaksın fakat...\n");
    Sleep(400);
    printf("1-)Ormanın içinden(tahmini 30dk)\n2-)Yol üzerinden(tahmini 2 saat)\n");
    scanf("%d", &secim2); 
    if (secim2 == 1) { // tepeye nereden gidecek? -- ormanın icinden
        printf("Ormanın içinden gidiyorsun...\n");
        Sleep(500);
        printf("Bir dakika! Arkandan bir ses duydun!\n");
        Sleep(500);
        printf("1-)Umursamadan git\n2-)Biraz dur ve etrafına bak\n3-)Sesin neyden geldiği bul\n");
        Sleep(1000);
        scanf("%d", &secim3);
        if (secim3==1 || secim3 == 2) { // sesin kaynağını araştıracak mı?
            printf("İçinde bir telaşla yürümeye devam ediyorsun...\n");
            Sleep(2000);
            printf("Sonunda tepeye vardın!\n");
        }
        else if (secim3==3) {
            printf("Sesin geldiği yere doğru gidiyorsun!..\n");
            Sleep(1500);
            printf("Oh! Ses bir kediden gelmiş.\n");
            Sleep(450);
        }
    }
    else if (secim2 == 2) { // tepeye nereden gidecek? -- yoldan
        printf("Uzun süre sonra vardın.\n");
        Sleep(500);
        printf("Şebeke var mı diye kontrol ediyorsun...\n");
        Sleep(500);
        printf("Evet! Şebeke çekiyor.\n");
        Sleep(500);
    }
}

void s3_b1() { // melisanın arabasını gormesinden kaza yapmasına kadar gecen sure 
    printf("İş yerine doğru giderken Melisa'nın arabasını gördün!\n");
    Sleep(750);
    printf("Onu takip etmek istedin sonuç olarak aynı yere gidiyorsunuz.\n");
    Sleep(750);
    printf("Bir dakika! Orman yoluna doğru gitmeye başladı.\n");
    printf("Neler olduğunu anlamak için\n");
    printf("1-)Telefonunla onu ara\n2-)Arama\n");
    scanf("%d",&secim);
    if (secim==1){
        printf("Telefonunla onu arayamadın çünkü orman yoluna çoktan girdiniz ve telefonlar çekmiyor! :c\n");
        Sleep(750);
    }
    else if (secim == 2) {
        printf("Onu aramadan sessizce takip ettin.\n");
        Sleep(750);
    }
    else {
        printf("\n**HATALI TUSLAMA!!**");
        Sleep(1000); 
        exit(0); //
    }

    printf("O da ne?\n");
    Sleep(400);
    printf("Arabayı süren kişi bir erkek!\n");
    Sleep(500);
    printf("Ne yapmam gerek diye düşünürken tekrar telefonuna baktın ve hala şebeke yok!\n");
    Sleep(750);
    printf("Aklına iki farklı yol geldi.\n1-)Gaza basarak önüne geçmeye çalış\n2-)Arkadan sessizce takip et\n");
    scanf("%d", &secim);
    if (secim == 1) {
        printf("Uygun yolu ve zamanı bekliyorsun...\n");
        Sleep(750);
        printf("Tam zamanı! Gaza basarak arabaya iyice yaklaştın.\n");
        Sleep(750);
        printf("Hass-, arabada Melisa yok!\n");
        Sleep(750);
        printf("Bu şaşkınlıkla bir anda daldın ve...\n");
        Sleep(750);
        printf("Ağaca çarptın ve kaza yaptın! :c\n");
        Sleep(500);
    }
    else if (secim == 2) {
        printf("Arabayı sakince arkasından takip ediyorsun...\n");
        Sleep(500);
        printf("Hayır! Araba bir anda farklı yola döndü ve sen onu takip etmeye çalıştın.\n");
        Sleep(1000);
        printf("Araban yoldan çıktı ve kaza yaptın! :c\n");
    }
    printf("Arabadan çıktın ve kendine ardından da etrafına bakınıyorsun...\n");
    Sleep(750);
    printf("Sende bir şey yok ve adamlardan da ses seda yok, gitmişler.\n");
    Sleep(750);
    printf("Telefonuna bakmak için arabaya yöneldin...\n");
    Sleep(500);
    printf("ve ve ve tekrardan şebeke çekmiyor.\n");
    Sleep(500);
    printf("Ne yapacaksın?\n");
    Sleep(500);
    printf("1-)Telefonun çekeceği yer ara\n2-)Arabada işe yarayacak eşya var mı diye bak\n");
    Sleep(500);
    scanf("%d", &secim);
    if (secim == 1) { // telefonun cekecegi yer ara
        mont = 0;
        aceleci = 1;
        s3_b1_1();
    }
    else if (secim == 2) { // arabadan eşya var mı diye bak
        printf("Arabada gerekli olacak bir eşya var mı diye bakıyorsun...\n");
        Sleep(2000);
        printf("Montunu gördün ve giymeye karar verdin.\n");
        mont = 1;
        aceleci = 0;
        s3_b1_1();
    }
}

void s3_b2() { // tepeden yola koyulmaya kadar gecen sure 
    printf("Melisayı aradın fakat telefonu açmadı!\n");
    Sleep(500);
    printf("Çaresizce etrafına bakınıyordun ki...\n");
    Sleep(500);
    printf("O da ne? Ormanın bir haritasını gördün.\n");
    Sleep(500);
    printf("Haritayı inceliyorsun...\n");
    Sleep(500);
    printf("ve evet nereye gittiklerini artık biliyorsun!\n");
    Sleep(500);
    printf("Arabanın girdiği yolda sadece bir yerleşim yeri var!\n");
    Sleep(500);
    printf("Oraya doğru yola koyulmalısın!\n");
    Sleep(500);
    printf("ama bir saniye arkanda terkedilmiş binalar var.\n");
    Sleep(500);
    printf("1-)Direkt gidecek misin?\n2-)Yoksa binaların içine bakacak mısın?\n");
    scanf("%d", &secim);
    
    if (secim==1)  { // hemen oraya git
        el_feneri = 0;
        printf("Yola koyuldun.");
        Sleep(1000);

    }
    else if (secim == 2) { //binalara gir
        printf("Binalara doğru ilerliyorsun...\n");
        Sleep(500);
        printf("1-)Direkt binaların içine gir\n2-)Önce binanın etrafında dolaş\n");
        scanf("%d", &secim2);
        if (secim2 == 1) { // direkt binanın icine girdi
            printf("Direkt binanın içine girdin ve içeriden sesler duydun!\n");
            Sleep(500);
            printf("Onlar da kim? Karşında 3 tane sarhoş adam duruyor!\n");
            Sleep(500);
            printf("Ne yapacaksın?\n");
            Sleep(500);
            printf("1-)Arkana bakmadan kaç\n2-)Öylece dur\n");
            Sleep(500);
            scanf("%d", &secim3);
            if (secim3 == 1) { //arkana bakmadan kaç
                printf("Koşuyorsun...\n");
                Sleep(500);
                printf("Bir süre sonra arkana baktın ve kimsenin gelmediğini fark ettin.\n");
                Sleep(1500);
                el_feneri = 0;
                printf("Şoku atlatıp haritadaki noktaya doğru gidiyorsun...\n");
                Sleep(1500);
            }
            else if (secim3 == 2) { //oylece dur
                printf("Adamlarla bakışıyorsun...\n");
                Sleep(1500);
                printf("Adamlar sarhoş olduğu için tepki vermediler ve sohbet etmeye devam ettiler.\n");
                Sleep(1500);
                printf("İçeriyi gezecek misin yoksa çıkıp yola mı koyulacaksın?\n");
                Sleep(1000);
                printf("1-)Evet\n2-)Hayır\n");
                scanf("%d", &secim4);
                if (secim4 == 1) { // iceriyi gez ve el fenerini bul
                    el_feneri = 1;
                    printf("Oh! İşine yaracak bir eşya: El Feneri\n");
                    Sleep(500);
                }
                else if (secim4 == 2) { // iceriyi gezmeden cık ve el feneri yok
                    el_feneri = 0;
                    printf("Hiç riske girmeden dışarı çıktın ve yola koyuldun.\n");
                    Sleep(750);
                }
            }
            else {
            printf("HATALI TUSLAMA");
            Sleep(500);
            exit(0);
            }
        }
        
        else if (secim2 == 2) { // binanın etrafında dolastı
            printf("Binanın etrafında dolaşıyorsun...\n");
            Sleep(1500);
            printf("Onlar da kim? İçeride 3 tane sarhoş adam var!\n");
            Sleep(500);
            printf("Binanın diğer tarafına doğru gidiyorsun...\n");
            Sleep(1500);
            printf("Binanın içinde bir el feneri gördün!\n");
            Sleep(500);
            printf("El fenerini almak için\n1-)İçeriye gir\n2-)İçeriye girme\n");
            scanf("%d", &secim3);
            if (secim3 == 1) { // iceriye gir
                el_feneri = 1;
                printf("Sessizce içeriye girdin ve el fenerini alıp çıktın!\n");
                Sleep(1000);
            }
            else if (secim3 == 2) { // iceriye girme
                el_feneri = 0;
                printf("Riske girmeyerek binalardan uzaklaşıyorsun...\n");
                Sleep(1500);
                printf("Melisa'yı bulmak için yola koyuldun.\n");
                Sleep(500);
            }
        }
        else {
            printf("HATALI TUSLAMA");
            Sleep(500);
            exit(0);
        }
    }
    else {
        printf("HATALI TUSLAMA");
        Sleep(500);
        exit(0);
    }
}

// sezon 4 void // yerlesim yerinde olan olaylar 

void s4_b1() { // yapılacak

}

int main() {
    SetConsoleOutputCP(65001);   // Türkçe karakterler için
    SetConsoleCP(65001);         // Türkçe karakterler için

    // SEZON I //
    
    s1_b1();       // oyunu başlatma 

    printf("1-) Yatağından kalk ve hazırlan\n2-) Perdeyi çekip biraz daha uyu.\n");
    scanf("%d", &secim);

    if (secim == 1) {   // oyuncu kalkmayı seçti
        s1_b2();
        printf("1-) Evde kahvaltı yap\n2-) Arabada giderken kahvaltı yap.\n");
        scanf("%d", &secim);

        if (secim == 1) { // evde kahvaltı
            s1_b4();
            Sleep(5000);
            printf("Evden çıktın ve iş yerine doğru gidiyorsun.\n");
        }
        else if (secim == 2) { // arabada kahvaltı
            s1_b5();
            printf("1-) Kıyafetlerini değiştirmeden işe git.\n2-) Eve git ve kıyafetlerini değiştir.\n");
            scanf("%d", &secim);

            if (secim == 1) { // kıyafet değiştirmeden
                s1_b13();
                kiyafet = 1;
            }
            else if (secim == 2) { // kıyafet değiştirildi
                s1_b14();
            }
            else { // hatalı giriş
                printf("HATALI TUŞLAMA!!!\n");
                Sleep(3000);
                s1_b4();
            }
        }
        else { // hatalı giriş
            printf("HATALI TUŞLAMA!!!\n");
            exit(0);
        }
    }
    else if (secim == 2) {   // biraz daha uyuma seçeneği
        s1_b3();
        printf("Telefonu açtın.\n1-) Ona trafikte olduğunu söyle\n2-) Ona doğruyu söyle\n");
        scanf("%d", &secim);

        if (secim == 1) { // trafikte olduğunu söyledi
            s1_b9();
        }
        else if (secim == 2) { // doğruyu söyledi
            s1_b10();
        }
        else { // hatalı giriş
            printf("HATALI TUŞLAMA!!!\n");
            exit(0);
        }
    }
    else { // ilk seçim hatalı ise
        printf("HATALI TUŞLAMA!!!\n");
        exit(0);
    }


    
// SEZON II //
    
    s2_b1();
    s2_b2();
    s2_b3();
    s2_b4();
    s2_b5();
    s2_b6();
    
// SEZON III // 
    
    s3_b1();
    s3_b2();

// SEZON IV //




    return 0;
} // int main kapanıs