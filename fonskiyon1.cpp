# include <iostream>
# include <conio.h>
# include <locale>

using namespace std;

float ust(float, float);

int main(){
   	setlocale(LC_ALL,"Turkish");
   	float x,y,i,son=1,enson;
   	cout<<"�st de�erini tam say� giriniz l�tfen te�ekk�rler"<<endl;
	cout<<"Taban de�eri giriniz: ";cin>>x;
	cout<<"Al�ncak �st de�erini giriniz: ";cin>>y;
	
	
	if(x==0 && y==0){
	cout<<"0^0  tan�ms�zl�k belirtir ge�erli de�erler giriniz";return 0 ;
}
    enson= ust(x,y);
	cout<<x<<"^"<<y<<" = "<<enson;
		getch();
	return 0;}

	
	
float ust(float x,float y){
    float son=1;
	if(x!=0 && y==0){
    son=1;	
	}
	if(x==0 && y!=0){
    son=0;
	}
    else if(y>0){
		for(int i=0;i<y;i++)
		son=son*x;}
    else if (y<0) {
		for(int i=0;i<(-y);i++)
		son=son*(1/x);	
	}
  return son;
}

	
	

