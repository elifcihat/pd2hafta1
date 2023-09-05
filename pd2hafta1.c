/*klavyeden ��renci say�s�(en fazla 100) ve ders ge�me notunu alarak bu bilgileri tan�mlanacak "hesapla" fonksiyonuna g�nderen bir "main" fonksiyonu haz�rlay�n�z.
"hesapla" fonksiyonu kendisine gelen ��renci say�s� kadar notu klavyeden okuyarak 100 elemanl�bir diziye kaydetmeli vege�me notuna g�re ka� tane ��rencinin dersten 
kald���n� bularak fonksiyondan geri d�nd�r�rken , s�n�f ortalamas�n� da ekrana yazd�rmal�d�r.*/


float hesapla(int ogrenci_sayisi,float gecme_notu){
	int kalan_ogr_sayisi=0,i;
	float ogr_notlari[100],toplam=0,sonuc;
	
	for(i=0;i<ogrenci_sayisi;i++){
		printf("%d.ogrencinin notu:",i+1);
		scanf("%f",&ogr_notlari[i]);
		if(ogr_notlari[i]>=gecme_notu){
			printf("%d ogrenci gecmistir\n",i+1);
		}
		else{
			printf("%d ogrenci kalmistir\n",i+1);
			kalan_ogr_sayisi++;
		}
		toplam=toplam+ogr_notlari[i];
	}
	sonuc=toplam/ogrenci_sayisi;
	printf("sinifin ortalamasi:%.2f\n",sonuc);
	return kalan_ogr_sayisi;
}

int main() {
	int ogrenci_sayisi;
	float gecme_notu;
	printf("kac adet ogrenci notu gireceksiniz(en fazla 100 ogrenci girebilirsiniz):");
	scanf("%d",&ogrenci_sayisi);
	printf("dersin gecme notu kactir:");
	scanf("%f",&gecme_notu);
	printf("kalan ogrenci sayisi:%.2f",hesapla(ogrenci_sayisi,gecme_notu));
	return 0;
}
