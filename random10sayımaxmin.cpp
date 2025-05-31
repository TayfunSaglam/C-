#include<iostream>
#include<locale>
#include<conio.h>
#include<ctime>
#include<cstdlib>

void minimum(int dizi[]);
void maksimum(int dizi[]);

using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int i,dizi[10],enb,enk;
	
	srand(time(0));
	for(i=0;i<10;i++){
		dizi[i]=rand()%100+1;
		cout<<dizi[i]<<endl;
	}
	   
   minimum(dizi);
   maksimum(dizi);	
	
	getch();
	return 0;
}



void minimum(int dizi[]){
	int i=0,min=100;
	for(i=0;i<10;i++){
		if(dizi[i]<min){
			min=dizi[i];
		}
	}
	
	cout<<"En küçük sayý: "<<min<<endl;
}


void maksimum(int dizi[]){
	int i=0,maks=0;
	for(i=0;i<10;i++){
		if(dizi[i]>maks){
			maks=dizi[i];
		}
	}
	
	cout<<"En büyük sayý: "<<maks;
}
