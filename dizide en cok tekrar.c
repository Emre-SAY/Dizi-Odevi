#include<stdio.h>
int dizi[5]={};
int main(){
	int a,b;
	printf("5 adet sayi giriniz\n");
	for(b=0;b<5;b++){
	
	scanf("%d",&dizi[b]);
}
int d2[5]={0};
for(int a=0;a<5;a++){
    for(int b=0;b<5;b++){
        if(dizi[a]==dizi[b]){
            d2[a]+=1;
        }
    }
}
int buyuk,sayac=0;
for(int a=0;a<5;a++){
for(int b=0;b<5;b++){
if(d2[a]>=d2[b]){
    sayac=1;
}
else{
    sayac=0;
}
}
if(sayac==1){
buyuk=a;
break;
}
sayac=0;
}
printf("Dizide en cok tekrar eden karakter =%d",dizi[buyuk]);
    return 0;
}
