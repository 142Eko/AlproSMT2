#include <iostream>
#include <math.h>
using namespace std;
class kasus52{
	private:
		int a,b,hasil;
	public:
		int banding(int x,int y){
			return (x>y?x:y);
		}
			
		void ino2(){
			cout<<"Masukkan bilangan 1  = ";cin>>a;
			cout<<"Masukkan bilangan 2  = ";cin>>b;
			hasil= banding(a,b);
			cout<<"Yang terbesar adalah = "<<hasil;
		}
};
main(){
	kasus52 e;
	e.ino2();
	return 0;
}
