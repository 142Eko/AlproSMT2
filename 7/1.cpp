#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
class post5{
	private:
		int i =1 ,n;
		float j,hsl =0;
	public:
		float hitung(int i,int n,float j)
		{
			if(i > n)
			{
				return j;
			}
			else
			{
				if(i%2 == 0)
				j-=i/pow(i+1,3);
				
				else
				j+=i/pow(i+1,2);
				return hitung(i + 1,n,j);
			}
		}
		void inop(){
			cout<<"Masukkan suku ke = ";cin>>n;
			cout<<"Hasil adalah 	 = "<<hitung(i,n,hsl);
		}
};
main(){
	post5 p;
	p.inop();
}

