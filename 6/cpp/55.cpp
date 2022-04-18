#include <iostream>
using namespace std;
class fak{
	private:
		int n;
	public:
		int hit(int n){
			if(n==0){
				return 1;
			}
		else{
			return (n*hit(n-1));
		}
		}
};
main(){
	fak p;
	int x;
	cout<<"Bilangan yang ingin difaktorial = ";cin>>x;
	p.hit(x);
	cout<<p.hit(x);
}
