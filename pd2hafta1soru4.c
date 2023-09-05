#include <stdio.h>
#include <stdlib.h>

int enbuyuk(int dizi[], int sayi) {
	int en_buyuk;
    if (sayi == 0) {
        return dizi[0];
    }

    en_buyuk = enbuyuk(dizi, sayi-1);
    if (dizi[sayi]> en_buyuk) {
        return dizi[sayi];
    }
    else {
        return en_buyuk;
    }
}

int main() {
	int dizi[10],i;
	int sayi=10;
	printf("dizinizin elemanlarini giriniz:\n");
	for( i=0;i<10;i++){
		printf("%d. eleman:",i+1);
		scanf("%d",&dizi[i]);
	}
	printf("dizinin elemanlari:  ");
	for( i=0;i<10;i++){
		printf(" %d ",dizi[i]);
	}
	printf("\nen buyuk eleman:%d",enbuyuk(dizi,sayi-1));
	return 0;
}
