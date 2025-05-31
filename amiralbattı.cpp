#include<iostream>
#include<locale>
#include<conio.h>
#include<string>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish");
	int b=1;
	
	bool gemi[4][4]={
	{0,0,0,0},
	{0,0,0,0},
	{0,0,0,0},
	{0,0,0,0}
	};
	
	cout<<"Gemileri yerleştiriniz"<<endl<<"1 ile 4 arasında değerler giriniz!!"<<endl;
	for(int a=4;a>0;a--){
		int satir,sutun;
		cout<<b<<" .geminin satırını giriniz: ";cin>>satir;
		
		cout<<b<<" .geminin sütununu giriniz: ";cin>>sutun;
		
	    gemi[satir-1][sutun-1]=1;
		b++;
	}
	cout<<endl;
	
	  for(int c=0;c<4;c++){
	  	for(int d=0;d<4;d++){
	  		cout<<gemi[c][d]<<" ";
		  }
        cout<<endl;
	  }
	  
	
	

	int kalangemi=0, skor=0,puan=100;
	int satir,sutun;
	while(kalangemi<4){
		cout<<"Koordinatları giriniz "<<endl;
		cout<<"1 ila 4 arasında bir satır numarası seçiniz: ";
		cin>>satir;
		cout<<"1 ila 4 arasında bir sütun numarası seçiniz: ";
		cin>>sutun;
	if(gemi[satir-1][sutun-1]){
		gemi[satir-1][sutun-1]=0;
		cout<<"Bir gemiyi vurdunuz . Böyle devam edin"<<endl;
		kalangemi=kalangemi+1;
		cout<<"Geriye "<<(4-kalangemi)<<" gemi kaldı"<<endl;
	}
	else 
	{cout<<"Iskalandınız !!";
		puan=puan-5;
	}
	
	skor=skor+1;

	}
	
	cout<<"KAZANDIN!!!!"<<endl;
	cout<<"Bütün gemileri "<<skor<<" hamlede altüst ettin tebrikler"<<" Skorun "<<puan;
	
	getch();
	return 0;
}
