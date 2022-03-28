#include <iostream>
using namespace std;
int main(){
	int bilangan;
	cout<<"Menentukan bilangan ganjil genap\n";
	cout<<"================================\n\n";
	cout<<"Masukkan bilangan : ";
	cin>>bilangan;
	
	if (bilangan %2==0){
		cout<<"Bilangan "<<bilangan<<" adalah genap.\n\n";
	}
	else{
		cout<<"Bilangan "<<bilangan<<" adalah ganjil.\n\n";
	}
	cout<<"================================\n\n";
}

