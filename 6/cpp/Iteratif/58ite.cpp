#include <iostream>
#include <conio.h>
using namespace std;
class ite58{

	private:
		int r,x,y;
	public:
		int gcd(int c,int d){
			while (d>0){
				r=c%d;
				c=d;
				d=r;
			}
			return(c);
		}

};

main(){
	int x,y;
	ite58 g;
	cout<<"Masukkan nilai pertama= ";cin>>x;
	cout<<"Masukkan nilai kedua= ";cin>>y;
	cout<<"GCD = "<<g.gcd(x,y);
}
