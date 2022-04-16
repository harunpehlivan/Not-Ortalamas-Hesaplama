 
#include <iostream>
using namespace std;
 
int main(int argc, char** argv) {
	setlocale(LC_ALL,"Turkish"); //Türkçe karakter
	float yazili1,yazili2,ortalama;
	cout << "1. Yazılı: ";
	cin>>yazili1;
	cout << "2. Yazılı: ";
	cin>>yazili2;
	ortalama=(yazili1+yazili2)/2;
	cout<<"Ortalamanız : "<<ortalama<<endl;
	if(ortalama>=50){
		cout<<"GEÇTİNİZ.";
	}
	else{
		cout<<"KALDINIZ";
	}
	return 0;
}
 