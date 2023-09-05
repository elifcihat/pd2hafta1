#include <stdio.h>
#include <stdlib.h>

int topla(int sayi){
	if(sayi==0){
		return 0;
	}
	else if(sayi==1){
		return 1;
	}
	else{
		return sayi+topla(sayi-1);
	}
}

int main() {
	int sayi;
	printf("lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	printf("toplam sonucu:%d",topla(sayi));
	return 0;
}
