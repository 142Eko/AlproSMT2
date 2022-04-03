#include <iostream>
using namespace std;
class dowhile{
	public:
		void proses();
	private:
		int i;
};

void dowhile::proses(){
	i=1;
	do{
		cout<<" "<<i;i++;
	}
	while(i <= 4);
}

main(){
	dowhile p;
	p.proses();
}
