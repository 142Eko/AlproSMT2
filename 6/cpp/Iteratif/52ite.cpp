#include <iostream>
using namespace std;
class kasus52{
	private:
		int a,b,max,hasil;
	public:
		int banding(int x,int y){
			if(x>y){
				max=x;
			}
			else{
				max=y;
			}
			return (max);
		}
			
		void ino2(){
			cout<<"Masukkan bilangan 1  = ";cin>>a;
			cout<<"Masukkan bilangan 2  = ";cin>>b;
			hasil= banding(a,b);
			cout<<"Yang terbesar adalah = "<<max;
		}
};
main(){
	kasus52 e;
	e.ino2();
}
