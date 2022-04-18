#include <iostream>
using namespace std;
class fibo{
	private:
		int i =1,n,u1,u2,un;
		long int fibonacci;
	public:
		int hitung(int n){
			un= u1+u2;
			if (i <=n){
				u1=1;
				u2=1;
				cout<<u1<<" ";
				u1 = u2;
				u2 = un;
				i++;
			}
			return(hitung(n));
		}
};
main(){
	int x;
	fibo f;
	cout<<"Sampai suku ke : ";cin>>x;
	f.hitung(x);
}
