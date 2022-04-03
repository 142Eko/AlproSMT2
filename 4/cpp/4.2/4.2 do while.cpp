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
		if(i % 2 == 1)
		cout<<i<<endl;
		i++;
	}
	while(i <= 10);
}

main(){
	dowhile p;
	p.proses();
}
