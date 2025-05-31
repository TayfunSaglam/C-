#include<iostream>
#include<locale>
#include<conio.h>
#include<ctime>
#include<cstdlib>

using namespace std;

void maksimum(int dizi[10]){
	int  i=0,j=1,maks=0;
	for(i=0;i<10;i++){
		
		if(dizi[i]>maks)
		maks=dizi[i];   
	}
	
	cout<<"En büyük eleman: "<<maks<<endl;	
}

void minimum(int dizi[10]){
	int  i=0,j=1,min=100;
	for(i=0;i<10;i++){
		
		if(dizi[i]<min)
		min=dizi[i];   
	}
	
	cout<<"En küçük eleman: "<<min;	
}


int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int i,dizi[10];
	
	srand(time(0));
	for(i=0;i<10;i++){
		
		dizi[i]=rand()%100+1;
		
	}
	
	for(i=0;i<10;i++){
		cout<<dizi[i]<<"\t";
	}
	
	cout<<endl;
	maksimum(dizi);
	minimum(dizi);
	
	
	
	
	getch();
	return 0;
}
