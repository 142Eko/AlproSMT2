#include <iostream>
#include <math.h>
using namespace std;
float pangkat(int x,int y){
	return (exp(y*log(x)));
}

main(){
	float hasil;
	int a,b;
	cout<<"Masukkan nilai a = ";cin>>a;
	cout<<"Masukkan nilai b = ";cin>>b;
	hasil = pangkat(a,b);
	cout<<a<<" pangkat "<<b<<" = "<<hasil;
	cout<<endl;cout<<a;
	cout<<endl;cout<<exp(1);
	cout<<endl;cout<<exp(2);
	cout<<endl;cout<<exp(3);
	cout<<endl;cout<<exp(4);
	cout<<endl;cout<<b;
	cout<<endl;cout<<log(a);
	cout<<endl;cout<<b*log(a);
	return 0;
}
