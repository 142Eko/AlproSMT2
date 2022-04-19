#include <iostream>
using namespace std;
class fibo{
	private:
		int hsl,n;
		long int fibonacci;
	public:
		int hitung(int n){
			if (( n == 1) || (n == 2)){
				return 1;
			}
			else{
				return (hitung(n-1)+hitung(n-2));
				}
				
			}
};
main(){
	int x;
	fibo f;
	cout<<"Sampai suku ke : ";cin>>x;
	f.hitung(x);
		for(int i = 1; i <= x; i++ ){
		cout<<f.hitung(i)<<" ";
	}
}
