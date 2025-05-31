#include<iostream>
#include<locale>
#include<conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int dizi[5],i=0,j,yedek;
	
	for(i=0;i<5;i++){
		
		cout<<"Dizinin "<<i+1<< ". elemanýný giriniz: ";
		cin>>dizi[i];
	}
		
	
	cout<<endl<<"Dizi küçükten büyüðe þu þekildedir: ";
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(dizi[i]>dizi[j]){
			yedek=dizi[i];
			dizi[i]=dizi[j];
			dizi[j]=yedek;
				
			}
		}	
	}

	for(i=0;i<5;i++){
		cout<<dizi[i]<<"  ";
	}
	
	cout<<endl<<"Dizi büyükten küçüðe þu þekildedir: ";
	
	for(i=4;i>=0;i--){
		cout<<dizi[i]<<"  ";
	}
	
	
	
	getch();
	return 0;
}
