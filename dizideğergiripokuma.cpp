#include<iostream>
#include<string>
#include<locale>

using namespace std;

int main(){

   setlocale(LC_ALL,"Turkish");
   double myValue, myNumbers [5]={0,0,0,0,0}; 
   int index, choice; 
do {
	cout<<"Bir seçim yap (çýkýþ:-1)\n" ;
    cout<<"\t 1. diziye yaz\n"; 
    cout<<"\t 2. diziden oku\n"; 
    cin>>choice; 
    if (choice==-1) break; 
    if (choice!=1 && choice!=2) { 
    cout<<"are you kidding us!\n"; 
    continue; 
}

   cout<<"Dizi indeksini girin:"; 
   cin>>index; 
   if (index<0 || index>4) { 
   cout<<"dizin 0-4 aralýðýnda olmalýdýr\n"; 
   continue; }
   switch (choice) {
   	case 1: cout<<"Deðeri girin:"; 
    cin>>myValue; 
    myNumbers [index]=myValue; 
    cout<<"yazma iþlemi baþarýlý\n\n"; 
    break; 
    case 2: cout<<"myNumbers ["<<index<<"]="<<myNumbers [index]<<"\n"; 
    break;
   	 	
   } 
 
}while (choice!=-1); 
return 0;
}

