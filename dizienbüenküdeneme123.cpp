#include<iostream>
#include<locale>
#include<conio.h>
#include<ctime>
#include<cstdlib>

using namespace std;



int main()
{
	setlocale(LC_ALL,"Turkish");
	
    int dizi[5],i,min,yenidizi[5],j,minyedek ;
    
    cout<<"Dizinizdeki en büyük eleman kaç deðerini alabilir lütfen giriniz: ";
    cin>>min;
    minyedek=min;
    
    for(i=0;i<5;i++){
    	cout<<"Dizinin "<<i+1<<". elemanýný giriniz: ";
    	cin>>dizi[i];
    	
	}
   for(j=0;j<5;j++)
   {
   
    for(i=0;i<5;i++){
    	
    	if(dizi[i]<min){
    		min=dizi[i];
		}
    	
	}
	yenidizi[j]=min;
	
    for(i=0;i<5;i++){
    	if(dizi[i]== min){
    			dizi[i]=minyedek;
    		    break;
    		    
		}
    
	}
    
    min=minyedek;
}
	cout<<"Dizi küçükten büyüðe þu þekildedir: ";
	for(j=0;j<5;j++){
		
		cout<<yenidizi[j]<<"  ";
		
	}
	cout<<endl<<"Dizi büyükten küçüðe þu þekildedir: ";
	for(j=4;j>=0;j--){
		
		cout<<yenidizi[j]<<"  ";
	}	
	getch();
	return 0;
}
