#include<iostream>
#include<locale>
#include<conio.h>
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish");
	float x=3,y=4,son;
	
	
	son=exp(x) ;      // e^3
	son=pow(x,y);     // 3^4
	son=sqrt(y);     // karekök(4)
	son=cbrt(x);     // küpkök(3)
    son=hypot(x,y);  // hipotenüs 3^2+4^2=son^2   son=5
    son=abs(x=-5);   // mutlak deðer |-5|=5
    
    // üst tarafa yuvarlar
    cout<<ceil(2.1)<<endl;   // 3
    cout<<ceil(3.7)<<endl;   // 4
    cout<<ceil(-2.1)<<endl;  // -2
    cout<<ceil(-3.7)<<endl;  // -3

    // alt tarafa yuvarlar
    cout<<floor(2.1)<<endl;   // 2
    cout<<floor(3.7)<<endl;   // 3
    cout<<floor(-2.1)<<endl;  // -3
    cout<<floor(-3.7)<<endl;  // -4
    
    // bildiðimiz yuvarlama iþlemi
    cout<<round(2.1)<<endl;   // 2
    cout<<round(3.7)<<endl;   // 4
    cout<<round(-2.1)<<endl;  // -2
    cout<<round(-3.7)<<endl;  // -4
    
	
	cout<<son;
	getch();
	return 0;
}
