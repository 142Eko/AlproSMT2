#include <iostream>
#include <math.h>
using namespace std;
class kasus54{
	private:
		int a,b,n=2;
	public:
		int kali(int n,int x,int y){
		if(n==0){
			int i,hasil=0;
			for(i = 1 ; i <= abs(b); i++){
				hasil +=x;
				}
			if (y<0){
				return (-hasil);
			}
			else{
				return (hasil);
			}
		}
		else{
			return (kali(n-1,x,y));
		}
		}
		
		void ino4(){
			cout<<"Masukkan bilangan 1  = ";cin>>a;
			cout<<"Dikalikan dengan     = ";cin>>b;
			cout<<a<<" X "<<b<<" = "<<kali(n,a,b);
		}
};
main(){
	kasus54 o;
	o.ino4();
}
