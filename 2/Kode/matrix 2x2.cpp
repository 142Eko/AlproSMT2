#include <conio.h>
#include <iostream>
using namespace std;
main(){
	int a1,b1,a2,b2,i,j,det;
	cout<<"\tProgram menghitung determinan matrix 2x2\n";
	cout<<"================================================\n";
	cout<<"Masukkan nilai matrik [a1,b1],[a2,b2]\n";
	cout<<"Masukkan nilai a1 : ";
	cin>>a1;
	cout<<"Masukkan nilai a2 : ";
	cin>>a2;
	cout<<"Masukkan nilai b1 : ";
	cin>>b1;
	cout<<"Masukkan nilai b2 : ";
	cin>>b2;
	int data [2][2] = {{a1,a2},{b1,b2}};
	cout<<"Matrix anda adalah : \n";
for (i = 0; i < 2; i++){
	for (j = 0; j < 2; j++){
		cout<< data [i] [j];
		cout<<" ";
	}
	cout<<endl;
}
	cout<<"================================================\n";
	det=(a1*b2)-(a2*b1);
	cout<<"Jadi determinannya adalah "<<det;
}
