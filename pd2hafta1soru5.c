#include <stdio.h>
#include <stdlib.h>

int basamaktopla(int sayi){
	if(sayi<10){
		return sayi;
	}
	else{
		return sayi%10+ basamaktopla(sayi/10);
	}
}

int main() {
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	printf("basamak toplami:%d",basamaktopla(sayi));
	return 0;
}
