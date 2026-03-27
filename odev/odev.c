#include <stdio.h>
#include <stdlib.h>
float PI 3.14//Global değişken tüm program boyunca hem main hem de diğer fonk.larda tanınır ve kullanılabilir

/* Kullanıcıdan yarıcapı alınan
Dairenin cevresini Daire_Cevre (PI*r*2) Fonk.da hesaplayarak
MAIN fonk. Ekrana yazdıran program*/
//const float PI=3.14;
float Daire_Cevre(float r);//fonk prototipi bunu yazmaksak Daire_Cevre fonk. çalışmaz burada ; ile bitiriyoruz

int main() 
{
	float yaricap,cevre;//değer döndüren olduğu için cevre değişkenine main de ihtiyaç VAR, yaricap yerel(main de geçerli)
	printf("Dairenin Yaricapini Giriniz:");//Girdi çıktı fon.
	scanf("%f",&yaricap);
	cevre=Daire_Cevre(yaricap);//fonk çağırıp yaricap değerini gönderiyoruz,gelen sonucu cevreye atıyoruz
	printf("Yaricapi Girilen Dairenin Cevresi:%f",cevre);//soruda main fonksiyonunda ekrana yazdırmamız istendiği için döndürülen değer ekrana mainde yazdırılıyor.
	return 0;
}
float Daire_Cevre(float r)//Fonk kendisi ve blok ({}) sonunda ; olmayacak, main fonk gönderilen yaricap burada r değişkenine atanıyor
{
	float cevresi;//alani yerel değişken sadece Daire_Alan fonk. geçerli
	cevresi=PI*r*2;
	return cevresi;// Main fonksiyonundan gelen yaricapi kullanılarak cevresi hesaplandı ve main fonk bu deger göndrildi.
	
	
}