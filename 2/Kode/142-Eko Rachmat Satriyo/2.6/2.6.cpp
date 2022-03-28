#include <iostream>
using namespace std;
int main(){
	int m,n,r,q;
	cout<<"\t\tProgram 2.6\n\n";
	cout<<"===================================\n";
	cout<<"Mohon masukkan dengan aturan [n<m])\n";
	cout<<"Masukkan M\t    : ";
	cin>>m;
	cout<<"Masukkan N\t    : ";
	cin>>n;
	if(m>n){
		q=m/n;
		r=m%n;
	}
	else{
		"Mohon diingat bahwa m>n";
	}
	cout<<"===================================\n";
	cout<<"Jadi nilai q adalah : "<<q<<"\n";
	cout<<"Jadi nilai r adalah : "<<r<<"\n";
}
