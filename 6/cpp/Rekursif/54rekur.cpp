#include <iostream>
#include <math.h>
using namespace std;
class kasus54{
	private:
		int a,b,i = 1,hasil = 0;
	public:
		int kali(int i ,int x,int y){
			
			if( i <=abs (b))
			{
				hasil+=a;
				kali((i+1),a,b);
				if (y<0){
				return (-hasil);
			}
				else{
				return (hasil);
			}
			}
			else{
				return 0;
			}
			
		}
		void ino4(){
			cout<<"Masukkan bilangan a  = ";cin>>a;
			cout<<"Dikalikan dengan     = ";cin>>b;
			cout<<a<<" X "<<b<<" 		     = "<<kali(i,a,b);
		}
};
main(){
	kasus54 o;
	o.ino4();
}
