#include<iostream>
#include<locale>
#include<conio.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Turkish");
	/* 
	const float PI=3.1415;
    float r,alan,cevre;
    */
   
   /*
    cout<<"Yarýçap giriniz: ";
    cin>>r;
    alan=PI*r*r;
    cevre=2*PI*r;
    cout<<"Dairenin alaný "<<alan<<endl;
	cout<<"Dairenin çevresi "<<cevre;  
	*/  
	
		
	/* 
	string mytext;
	cout<<"Bir mesaj gir: ";   {girdiyi "Bugün hava güzel" olarak varsayalým           
	cin>>mytext;               çýktýsý Senin mesajýn "Bugün" }
	cout<<"Senin mesajýn \""<<mytext<<"\"";
	*/
	
	//Aradaki fark önemli!!!! Birinde ilk kelimeyi arlýken diðerinde tamamýný
	
	/* 
	string mytext;
	cout<<"Bir mesaj gir: ";   {girdiyi "Bugün hava güzel" olarak varsayalým           
	getline(cin,mytext);        çýktýsý Senin mesajýn"Bugün hava  güzel"}
	cout<<"Senin mesajýn \""<<mytext<<"\"";
	*/

	 
	/*                   Diðer bi yazma yöntemi;
	char mytext[100];
	cout<<"Bir mesaj giriniz: ";
	cin.getline(mytext,sizeof(mytext));
	cout<<"Senin mesajýn \""<<mytext<<"\"";
	*/
	
	
	
	getch();
	return 0;
}
