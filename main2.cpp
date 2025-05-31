#include<iostream>
#include<locale>
#include<conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish");
	char x,y,z;
	x=68,y=65,z=89;
	
	string mytext="C++ will get easier over time";
	
	
	cout<<"char="<<x<<y<<z<<endl;  //sayýyý karakter olarak verir
	cout<<&mytext;    //& ramdeki adresini verir

	
	
	getch();
	return 0;
}
