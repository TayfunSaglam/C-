#include<iostream>
#include<locale>
#include<conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish");
	const float PI=3.14;
	float mynumber=9.823;
	mynumber=static_cast<int>(mynumber);
	
	cout<<mynumber<<endl;

	cout<<"�ar�� pazar kar��t�";
	
	
	getch();
	return 0;
}
