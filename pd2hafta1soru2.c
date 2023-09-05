#include <stdio.h>
#include <stdlib.h>

float kitleindeks(float boy,int kilo){
	float vki;
	printf("lutfen boyunuzu metre cinsinden giriniz:");
	scanf("%f",&boy);
	printf("lutfen kilonuzu giriniz:");
	scanf("%d",&kilo);
	
	vki=kilo/(boy*boy);
	printf("%.2f\n",vki);
	
	if(vki>=0 && vki<=18){
		printf("zayif\n");
		return 1;
	}
	else if(vki>=19 && vki<=25){
		printf("normal\n");
		return 2;
	}
	else if(vki>=25 && vki<=30){
		printf("kilolu\n");
		return 3;
	}
	else if(vki>30){
		printf("obez\n");
		return 4;
	}
	else{
		printf("hatali giris yaptiniz!");
		return 0;
	}
}

int main() {
	float boy;
	int kilo;
	printf("donus durumu:%.2f",kitleindeks(boy,kilo));
	return 0;
}
