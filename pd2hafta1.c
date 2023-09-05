/*klavyeden öðrenci sayýsý(en fazla 100) ve ders geçme notunu alarak bu bilgileri tanýmlanacak "hesapla" fonksiyonuna gönderen bir "main" fonksiyonu hazýrlayýnýz.
"hesapla" fonksiyonu kendisine gelen öðrenci sayýsý kadar notu klavyeden okuyarak 100 elemanlýbir diziye kaydetmeli vegeçme notuna göre kaç tane öðrencinin dersten 
kaldýðýný bularak fonksiyondan geri döndürürken , sýnýf ortalamasýný da ekrana yazdýrmalýdýr.*/


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
