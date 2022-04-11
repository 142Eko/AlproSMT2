#include <iostream>
#include <math.h>
using namespace std;
class kasus53{
	private:
		float hasil;
		int a,b;
	public:
		float pangkat(int x,int y){
				return (exp(y*log(x)));
			}	
		void ino3(){
			cout<<"Masukkan nilai a = ";cin>>a;
			cout<<"Dipangkat berapa = ";cin>>b;
			hasil = pangkat(a,b);
			cout<<a<<" pangkat "<<b<<" = "<<hasil;
		}
};
