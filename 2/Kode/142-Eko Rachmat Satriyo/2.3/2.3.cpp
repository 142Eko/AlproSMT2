#include <iostream>
using namespace std;
int main(){
	int m,cm,i;
	cout<<"\tProgram konversi dari M ke Cm dan Inch\n\n";
	cout<<"===============================================\n";
	cout<<"Masukkan nilai m (meter) : ";
	cin>>m;
	cm=m*100;
	i=m*100/2.54;
	cout<<"\n===============================================\n";
	cout<<"Jadi dari "<<m<<" m menjadi "<<cm<<" cm\n";
	cout<<"Jadi dari "<<m<<" m menjadi "<<i<<" inch\n";
}
