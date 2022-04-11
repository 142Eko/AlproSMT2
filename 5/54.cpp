#include <iostream>
#include <math.h>
using namespace std;
class kasus54{
	private:
		int a,b;
	public:
		int kali(int m,int n){
			int i,hasil=0;
			for(i = 1 ; i <= abs(b); i++){
				hasil +=m;
				}
			if (n<0){
				return (-hasil);
			}
			else{
				return (hasil);
			}
		}
		void ino4(){
			cout<<"Masukkan bilangan 1  = ";cin>>a;
			cout<<"Dikalikan dengan 2   = ";cin>>b;
			cout<<a<<" X "<<b<<" = "<<kali(a,b);
		}
};

main(){
	kasus54 o;
	o.ino4();
	return 0;
}
