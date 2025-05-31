# include <iostream>
# include <conio.h>

using namespace std;

int sumInt(int,int);
double sumDouble(double,double);

int main(){
	
	int x=sumInt(7,5);
	double y=sumDouble(7.21,6.19);
	cout<<"Int: "<<x<<endl;
	cout<<"Double: "<<y<<endl;
	
	getch();
	return 0;
}

int sumInt (int x, int y){
	return x+7;
}
double sumDouble (double x, double y){
	return x+7;
}



