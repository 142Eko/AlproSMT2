#include <iostream>
#include <math.h>
using namespace std;
class For{
	public:
		void input();
		void proses();
		void output();
	private:
		int a,b,i,jml;
};

void For::input(){
	cout<<"Masukkan nilai a = ";cin>>a;
	cout<<"Masukkan nilai b = ";cin>>b;	
}

void For::proses(){
	jml = 0;
	for(i = 1 ; i <= abs(b); i++){
		jml +=a;
	}
	if(b<0){
		jml = -jml;
	}
}

void For::output(){
	cout<<a<<" x "<<b<<" = "<<jml;	
}

main(){
	cout<<"Program menghitung perkalian dengan cara penjumlaahan\n";
	For p;
	p.input();
	p.proses();
	p.output();
}
