#include<iostream>
#include<locale>
#include<conio.h>
#include<time.h>
#include<cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int randsayi,tahminsayi=0,kacincitahmin,skor=100;
    srand(time(0));
    randsayi=rand()%100+1;
	cout<<"1 ile 100 aras�nda (1 ve 100 dahil) say� tahmin et\n";
	do{
		cout<<"Tahmin edilen say�y� giriniz: ";
		cin>>tahminsayi;
		if(tahminsayi==-1) break;
		if(tahminsayi<1  || tahminsayi>100){
			cout<<"L�tfen 1 ile 100 aras�nda say� giriniz\n";
			continue;
		}
		kacincitahmin++;
		if(tahminsayi==randsayi){
			cout<<"Tebrikler , say�y� "<<kacincitahmin<<". denemede buldun.";
			cout<<"Skorunuz "<<skor;break;
		}
		else {
			if(tahminsayi>randsayi)
			cout<<"Daha k���k say� gir!!\n";
			else
			cout<<"Daha b�y�k say� gir!!\n";
		    skor=skor-5;
		}
		
		
		
	}while(tahminsayi!=-1);
	
	
	
	getch();
	return 0;
}
