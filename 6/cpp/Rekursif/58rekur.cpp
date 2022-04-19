#include <iostream>
#include <conio.h>
using namespace std;
class k58{

	private:
		int x,y;
	public:
		int gcd(int c,int d){
			if (d == 0){
				cout<<"GCD = "<<c<<endl;
			}
			else{
				if( c < d){
					gcd(d,c);
				}
				else{
					gcd(c-d,d);
				}
			}
		}

};

main(){
	int x,y;
	k58 g;
	cout<<"Masukkan nilai pertama= ";cin>>x;
	cout<<"Masukkan nilai kedua= ";cin>>y;
	g.gcd(x,y);
}
