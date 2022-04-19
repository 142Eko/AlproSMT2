#include <iostream>
#include <math.h>
using namespace std;
class rekur53{
	private:
		float hasil;
		int a,b,n=2;
	public:
		float pangkat(int n,int x,int y){
			if(n==0){
				hasil=(exp(y*log(x)));
				return n;
			}
			else{
				return pangkat(n-1,x,y);
			}
			}	
		void ino3(){
			cout<<"Masukkan nilai a = ";cin>>a;
			cout<<"Dipangkat berapa = ";cin>>b;
			pangkat(2,a,b);
			cout<<a<<" pangkat "<<b<<" = "<<hasil;
		}
};
main(){
	rekur53 k;
	k.ino3();
}
