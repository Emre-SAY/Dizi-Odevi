#include<stdio.h>
int dizi[100]{};
int main(){
	int m,n,ek;
	ek=dizi[0];
	printf("Olusturacaginiz dizinin eleman sayisisni giriniz:");
	scanf("%d",&m);
	for(n=0;n<m;n++){
		printf("%d. sayiyi giriniz : ",n+1);
		scanf("%d",&dizi[n]);
	}
	for(n=0 ; n<m ; n++){ 
	      if(ek > dizi[n]){
               ek = dizi[n];
            }
}
    printf("Dizideki en kucuk sayi : %d \n", ek);
	
	return 0;
}