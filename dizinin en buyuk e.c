#include<stdio.h>
int dizi[100]{};
int main(){
	int m,n,eb;
	eb=dizi[0];
	printf("Olusturacaginiz dizinin eleman sayisisni giriniz:");
	scanf("%d",&m);
	for(n=0;n<m;n++){
		printf("%d. sayiyi giriniz : ",n+1);
		scanf("%d",&dizi[n]);
	}
	for(n=0 ; n<m ; n++){ 
	      if(eb < dizi[n]){
               eb = dizi[n];
            }
}
    printf("Dizideki en buyuk sayi : %d \n", eb);
	
	return 0;
}