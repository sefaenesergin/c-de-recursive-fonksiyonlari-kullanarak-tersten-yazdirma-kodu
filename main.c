//SEFA ENES ERGİN-sefaenesergin@gmail.com
//Kullanıcının girdiği bir metni tersten yazdıran recursive fonksiyon kodu
#include <stdio.h>
void tersYaz(char x[],int y){
    if(y>0){
// y>0 yaptık çünkü son indisten ilk indise geldiğinde bitmesini istiyoruz.
    printf(" %c \n", x[y-1]);
    tersYaz(x,y-1); // recursive kısım..
        // y-1 olmasının nedeni en son indisin bir üstte olması.
    }
}
int main(int argc, const char * argv[]) {
    char metin[101];//metnin kaydolacağı diziyi tanımladık
    printf("Lütfen metni giriniz...\n");
    gets(metin);//metni aldık.
    tersYaz(metin,strlen(metin)); //fonksiyona argümanları gönderdik.
    return 0;
}
