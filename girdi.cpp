#include<iostream>
#include<locale>
#include<conio.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Turkish");
	
	int a,b,toplam;
	cout<<"Sayý giriniz: ";
	cin>>a;
	cout<<"Sayý giriniz: ";
	cin>>b;
    toplam=a+b;

	cout<<endl<<"Senin girdiðin sayýlarýn toplamý "<<toplam;
	//cout<<endl<<"Senin girdiðin sayý "<<b;
	
	
	getch();
	return 0;
}
