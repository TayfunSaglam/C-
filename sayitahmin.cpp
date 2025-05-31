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
	cout<<"1 ile 100 arasında (1 ve 100 dahil) sayı tahmin et\n";
	do{
		cout<<"Tahmin edilen sayıyı giriniz: ";
		cin>>tahminsayi;
		if(tahminsayi==-1) break;
		if(tahminsayi<1  || tahminsayi>100){
			cout<<"Lütfen 1 ile 100 arasında sayı giriniz\n";
			continue;
		}
		kacincitahmin++;
		if(tahminsayi==randsayi){
			cout<<"Tebrikler , sayıyı "<<kacincitahmin<<". denemede buldun.";
			cout<<"Skorunuz "<<skor;break;
		}
		else {
			if(tahminsayi>randsayi)
			cout<<"Daha küçük sayı gir!!\n";
			else
			cout<<"Daha büyük sayı gir!!\n";
		    skor=skor-5;
		}
		
		
		
	}while(tahminsayi!=-1);
	
	
	
	getch();
	return 0;
}
