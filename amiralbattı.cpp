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
	
	cout<<"Gemileri yerle�tiriniz"<<endl<<"1 ile 4 aras�nda de�erler giriniz!!"<<endl;
	for(int a=4;a>0;a--){
		int satir,sutun;
		cout<<b<<" .geminin sat�r�n� giriniz: ";cin>>satir;
		
		cout<<b<<" .geminin s�tununu giriniz: ";cin>>sutun;
		
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
		cout<<"Koordinatlar� giriniz "<<endl;
		cout<<"1 ila 4 aras�nda bir sat�r numaras� se�iniz: ";
		cin>>satir;
		cout<<"1 ila 4 aras�nda bir s�tun numaras� se�iniz: ";
		cin>>sutun;
	if(gemi[satir-1][sutun-1]){
		gemi[satir-1][sutun-1]=0;
		cout<<"Bir gemiyi vurdunuz . B�yle devam edin"<<endl;
		kalangemi=kalangemi+1;
		cout<<"Geriye "<<(4-kalangemi)<<" gemi kald�"<<endl;
	}
	else 
	{cout<<"Iskaland�n�z !!";
		puan=puan-5;
	}
	
	skor=skor+1;

	}
	
	cout<<"KAZANDIN!!!!"<<endl;
	cout<<"B�t�n gemileri "<<skor<<" hamlede alt�st ettin tebrikler"<<" Skorun "<<puan;
	
	getch();
	return 0;
}
