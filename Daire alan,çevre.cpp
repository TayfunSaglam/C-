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
    cout<<"Yar��ap giriniz: ";
    cin>>r;
    alan=PI*r*r;
    cevre=2*PI*r;
    cout<<"Dairenin alan� "<<alan<<endl;
	cout<<"Dairenin �evresi "<<cevre;  
	*/  
	
		
	/* 
	string mytext;
	cout<<"Bir mesaj gir: ";   {girdiyi "Bug�n hava g�zel" olarak varsayal�m           
	cin>>mytext;               ��kt�s� Senin mesaj�n "Bug�n" }
	cout<<"Senin mesaj�n \""<<mytext<<"\"";
	*/
	
	//Aradaki fark �nemli!!!! Birinde ilk kelimeyi arl�ken di�erinde tamam�n�
	
	/* 
	string mytext;
	cout<<"Bir mesaj gir: ";   {girdiyi "Bug�n hava g�zel" olarak varsayal�m           
	getline(cin,mytext);        ��kt�s� Senin mesaj�n"Bug�n hava  g�zel"}
	cout<<"Senin mesaj�n \""<<mytext<<"\"";
	*/

	 
	/*                   Di�er bi yazma y�ntemi;
	char mytext[100];
	cout<<"Bir mesaj giriniz: ";
	cin.getline(mytext,sizeof(mytext));
	cout<<"Senin mesaj�n \""<<mytext<<"\"";
	*/
	
	
	
	getch();
	return 0;
}
