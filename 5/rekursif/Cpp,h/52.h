#include <iostream>
#include <math.h>
using namespace std;
class rekur52{
	private:
		int a,b;
	public:
		int banding(int n,int x,int y){
			if(n==0){
				if(x>y){
				cout<<"Yang terbesar adalah = "<<x<<endl;
				}
				else{
				cout<<"Yang terbesar adalah = "<<y<<endl;
				}
				return n;
			}
			else{
			return (banding(n-1,x,y));
			}
			
		}
			
		void ino2(){
			cout<<"Masukkan bilangan 1  = ";cin>>a;
			cout<<"Masukkan bilangan 2  = ";cin>>b;
			banding(2,a,b);
		}
};
