#include<iostream>
#include<locale>
#include<conio.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Turkish");
	
	int a,b,toplam;
	cout<<"Say� giriniz: ";
	cin>>a;
	cout<<"Say� giriniz: ";
	cin>>b;
    toplam=a+b;

	cout<<endl<<"Senin girdi�in say�lar�n toplam� "<<toplam;
	//cout<<endl<<"Senin girdi�in say� "<<b;
	
	
	getch();
	return 0;
}
