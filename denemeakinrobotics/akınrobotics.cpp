/*
AD: Furkan
Soyad: AKÇANLI
Tarih:17/10/2020

Bu program istenen her aralýkta ardýþýk sayýlarý bularak içlerinden en büyük deðere sahip olaný yazdýrmaktadýr.
Programdan çýkýlmadýkça iþlemler otomotik olarak farklý deðerler girilerek tekrarlanabilir.
ORNEK ÇIKTI:

Bulmak istediðiniz Ardýþýk Terim Sayýsýný Giriniz : 13
  1  2  3  4  5  6  7  8  9 10 11 12 13 --> 13  Ardýþýk Carpým Sonucu =          6227020800   (113-125  arasýndaki terimler)
  2  3  4  5  6  7  8  9 10 11 12 13 14 --> 13  Ardýþýk Carpým Sonucu =         87178291200   (114-126  arasýndaki terimler)
  3  4  5  6  7  8  9 10 11 12 13 14 15 --> 13  Ardýþýk Carpým Sonucu =        653837184000   (115-127  arasýndaki terimler)
  4  5  6  7  8  9 10 11 12 13 14 15 16 --> 13  Ardýþýk Carpým Sonucu =       3487131648000   (116-128  arasýndaki terimler)
  5  6  7  8  9 10 11 12 13 14 15 16 17 --> 13  Ardýþýk Carpým Sonucu =      14820309504000   (117-129  arasýndaki terimler)
  6  7  8  9 10 11 12 13 14 15 16 17 18 --> 13  Ardýþýk Carpým Sonucu =      53353114214400   (118-130  arasýndaki terimler)
  7  8  9 10 11 12 13 14 15 16 17 18 19 --> 13  Ardýþýk Carpým Sonucu =     168951528345600   (119-131  arasýndaki terimler)
  8  9 10 11 12 13 14 15 16 17 18 19 20 --> 13  Ardýþýk Carpým Sonucu =     482718652416000   (120-132  arasýndaki terimler)
 20 21 22 23 24 25 26 27 28 29 30 31 32 --> 13  Ardýþýk Carpým Sonucu = 2163102632570880000   (322-334  arasýndaki terimler)
 21 22 23 24 25 26 27 28 29 30 31 32 33 --> 13  Ardýþýk Carpým Sonucu = 3569119343741952000   (323-335  arasýndaki terimler)
 22 23 24 25 26 27 28 29 30 31 32 33 34 --> 13  Ardýþýk Carpým Sonucu = 5778574175582208000   (324-336  arasýndaki terimler)
 23 24 25 26 27 28 29 30 31 32 33 34 35 --> 13  Ardýþýk Carpým Sonucu = 9193186188426240000   (325-337  arasýndaki terimler)

_____________________________
 --> 13 En buyuk Ardýþýk carpým = 9193186188426240000

Dizinizin Boyutunu Giriniz: 1000
Bulmak istediðiniz Ardýþýk Terim Sayýsýný Giriniz : 14
  1  2  3  4  5  6  7  8  9 10 11 12 13 14 --> 14  Ardýþýk Carpým Sonucu =         87178291200   (113-126  arasýndaki terimler)
  2  3  4  5  6  7  8  9 10 11 12 13 14 15 --> 14  Ardýþýk Carpým Sonucu =       1307674368000   (114-127  arasýndaki terimler)
  3  4  5  6  7  8  9 10 11 12 13 14 15 16 --> 14  Ardýþýk Carpým Sonucu =      10461394944000   (115-128  arasýndaki terimler)
  4  5  6  7  8  9 10 11 12 13 14 15 16 17 --> 14  Ardýþýk Carpým Sonucu =      59281238016000   (116-129  arasýndaki terimler)
  5  6  7  8  9 10 11 12 13 14 15 16 17 18 --> 14  Ardýþýk Carpým Sonucu =     266765571072000   (117-130  arasýndaki terimler)
  6  7  8  9 10 11 12 13 14 15 16 17 18 19 --> 14  Ardýþýk Carpým Sonucu =    1013709170073600   (118-131  arasýndaki terimler)
  7  8  9 10 11 12 13 14 15 16 17 18 19 20 --> 14  Ardýþýk Carpým Sonucu =    3379030566912000   (119-132  arasýndaki terimler)
 20 21 22 23 24 25 26 27 28 29 30 31 32 33 --> 14  Ardýþýk Carpým Sonucu = 16042154653710385152   (322-335  arasýndaki terimler)
 21 22 23 24 25 26 27 28 29 30 31 32 33 34 --> 14  Ardýþýk Carpým Sonucu = 10669593244969058304   (323-336  arasýndaki terimler)
 22 23 24 25 26 27 28 29 30 31 32 33 34 35 --> 14  Ardýþýk Carpým Sonucu = 17782655408281763840   (324-337  arasýndaki terimler)

_____________________________
 --> 14 En buyuk Ardýþýk carpým = 17782655408281763840




*/


#include<iostream>
#include<string>
#include<stdlib.h>
#include <iomanip>


using namespace std;




void ardisikTerim(int dizi[], int diziBoyutu, int t)
{

	unsigned long long  max = 0;
	unsigned long long  carpim = 1;

	int counter1 = 0;
	int counter2 = 0;
	int i;
	int *ptr; // dizinin deðerleri pointerda tutulup aþaðýda pointer üzerinden iþlem yapýlmaktadýr.
	ptr = dizi;
	for (i = 0; i < diziBoyutu; i++) //dizi boyutuna göre tarama yapmasý için for döngüsü
	{

		for (int j = i; j < (i + t); j++) //Her defasýnda bir sonraki indise geçecek þekilde istenen aralýkta(t) 
										  //ardýþýk sayý taramasý yapýlmaktadýr

		{
			//Artan ardýþýk sayýlar taranmakta
			if (*(ptr + j + 1) - *(ptr + j) == 1)
			{
				counter1++;                   //istenen aralýk bulunana kadar sayan sayaç
				if (counter1 == t)
				{
					counter1 = 0;

					for (int j = i; j < i + t; j++)
					{

						carpim *= *(ptr + j);       //aralýk bulunduktan sonra bulunana deðerlerin çarpýmý bulunuyor
						cout << setw(3) << right << *(ptr + j);

					}

					if (max < carpim)    //bulunan çarpým sonuçlarýnýn en buyuk degerleri aranýyor.
					{
						max = carpim;
					}
					//bulunan degerler ekrana bulunduklarý sýra numaralarýyla yazýlmaktadýr.
					cout <<" --> "<< t <<"  Ardýþýk Carpým Sonucu = " << setw(19) << right << carpim; 
					cout << "   (" << i << "-" << t + (i - 1) << "  arasýndaki terimler)" << endl;
				}

			}
			else
			{
				counter1 = 0;
			}



			//Azalan Ardýþýk sayýlar taranmakta
			if (*(ptr + j) - *(ptr + j + 1) == 1)
			{
				counter2++;
				if (counter2 == t)
				{
					counter2 = 0;


					for (int j = i; j < i + t; j++)
					{
						carpim *= *(ptr + j);
						cout << setw(3) << right << *(ptr + j);

					}
					if (max < carpim)
					{
						max = carpim;
					}
				
					cout<< " --> "<< t << "  Ardýþýk Carpým Sonucu = " << setw(19) << right << carpim;

					cout<< "   (" << i << "-" << t + (i - 1) << "  arasýndaki terimler)" << endl;


				}

			}

			else
			{
				counter2 = 0;
			}

			carpim = 1;


		}

	}
	cout << endl;
	cout<<"_____________________________"<<endl;
	cout <<" --> "<<t<< " En buyuk Ardýþýk carpým = "<< max<<endl;  // en buyuk carpým deðeri yazdýrýlýyor.


}




int main()
{

	setlocale(LC_ALL, "Turkish"); //Türkçe karakterlerin sorun teþkil etmemesi için.

	// dizi parametreleri
	int arr[] = {
6,4,0,7,7,1,7,6,5,3,1,3,3,0,6,2,4,9,1,9,2,2,5,1,1,9,6,7,4,4,2,6,5,7,4,7,4,2,3,5,5,3,4,9,1,9,4,9,3
,4,
9,6,9,8,3,5,2,0,3,1,2,7,7,4,5,8,7,6,5,4,3,2,1,9,5,7,8,3,1,8,0,1,6,9,8,4,8,0,1,8,6,9,4,7,8,8,5,1,8,4
,3,
8,5,8,6,1,5,6,0,7,8,9,1,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,8,3,3,1,9,5,2,8,5,3,2,0,8,8,0,5,5,1
,1,
1,2,5,4,0,6,9,8,7,4,7,1,5,8,5,2,3,8,6,3,0,5,0,7,1,5,6,9,3,2,9,0,9,6,3,2,9,5,2,2,7,4,4,3,0,4,3,5,5
,7,
6,6,8,9,6,6,4,8,9,5,0,4,4,5,2,4,4,5,2,3,1,6,1,7,3,1,8,5,6,4,0,3,0,9,8,7,1,1,1,2,1,7,2,2,3,8,3,1,1
,3,
6,2,2,2,9,8,9,3,4,2,3,3,8,0,3,0,8,1,3,5,3,3,6,2,7,6,6,1,4,2,8,2,8,0,6,4,4,4,4,8,6,6,4,5,2,3,8,7,4
,9,
3,0,3,5,8,9,0,7,2,9,6,2,9,0,4,9,1,5,6,0,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,1,5,8,5,9,3,0,7,9,6,0,8,6
,6,
7,0,1,7,2,4,2,7,1,2,1,8,8,3,9,9,8,7,9,7,9,0,8,7,9,2,2,7,4,9,2,1,9,0,1,6,9,9,7,2,0,8,8,8,0,9,3,7,7
,6,
6,5,7,2,7,3,3,3,0,0,1,0,5,3,3,6,7,8,8,1,2,2,0,2,3,5,4,2,1,8,0,9,7,5,1,2,5,4,5,4,0,5,9,4,7,5,2,2,4
,3,
5,2,5,8,4,9,0,7,7,1,1,6,7,0,5,5,6,0,1,3,6,0,4,8,3,9,5,8,19,20,21,23,25,26,27,29,30,31,32,33,34,35,2,2,1,5,5,3,9
,7,
5,3,6,9,7,8,1,7,9,7,7,8,4,6,1,7,4,0,6,4,9,5,5,1,4,9,2,9,0,8,6,2,5,6,9,3,2,1,9,7,8,4,6,8,6,2,2,4,8
,2,
8,3,9,7,2,2,4,1,3,7,5,6,5,7,8,9,10,11,12,13,14,15,16,2,6,1,4,0,7,9,7,2,9,6,8,6,5,2,4,1,4,5,3,5,1,0,0,4,7
,4,
8,2,1,6,6,3,7,0,4,8,4,4,0,3,1,3,9,8,9,8,7,6,5,4,3,2,1,4,3,4,5,0,6,5,8,5,4,1,2,2,7,5,8,8,6,6,6,8,8
,1,
1,6,4,2,7,1,7,1,4,7,9,9,2,4,4,4,2,9,2,4,3,2,1,0,6,3,4,6,5,6,7,4,8,1,3,9,1,9,1,2,3,1,6,2,8,2,4,5,8
,6,
1,7,8,6,6,4,5,8,3,5,9,1,2,4,5,6,6,5,2,9,4,7,6,5,4,5,6,8,2,8,4,8,9,1,2,8,8,3,1,4,2,6,0,7,6,9,0,0,4
,2,
2,4,2,1,9,0,2,2,6,7,1,0,5,5,6,2,6,3,2,1,1,1,1,1,0,9,3,7,0,5,4,4,2,1,7,5,0,6,9,4,1,6,5,8,9,6,0,4,0
,8,
0,7,1,9,8,4,0,3,8,5,0,9,6,2,4,5,5,4,4,4,3,6,2,9,8,1,2,3,0,9,8,7,8,7,9,9,2,7,2,4,4,2,8,4,9,0,9,1,8
,8,
8,4,5,8,0,1,5,6,1,6,6,0,9,7,9,1,9,1,3,3,8,7,5,4,9,9,2,0,0,5,2,4,0,6,3,6,8,9,9,1,2,5,6,0,7,1,7,6,0
,6,
0,5,8,8,6,1,1,6,4,6,7,1,0,9,4,0,5,0,7,7,5,4,1,0,0,2,2,5,6,9,8,3,1,5,5,2,0,0,0,5,5,9,3,5,7,2,9,7,2
,5,
7,1,6,3,6,2,6,9,5,6,1,8,8,2,6,7,0,4,2,8,2,5,2,4,8,3,6,0,0,8,2,3,2,5,7,5,3,0,4,2,0,7,5,2,9,6,3,4,5,0 };  
	
	int ardýþýkterimSayisi, diziBoyutu;
	while (1)
	{
		cout << "Dizinizin Boyutunu Giriniz: ";
		cin >> diziBoyutu;

		cout << "Bulmak istediðiniz Ardýþýk Terim Sayýsýný Giriniz : ";
		cin >> ardýþýkterimSayisi;
		ardisikTerim(arr, diziBoyutu, ardýþýkterimSayisi);// istenen deðerler iþlem fonksiyonuna gönderiliyor.
		cout << endl;
	}

	system("PAUSE");


}






