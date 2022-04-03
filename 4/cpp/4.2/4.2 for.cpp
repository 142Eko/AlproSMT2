#include <iostream>
using namespace std;
class For{
	public:
		void proses();
	private:
		int i;
};

void For::proses(){
	for(i = 0 ; i <= 10; i++){	
	if(i %2 == 1)
		cout<<i<<endl;
	}
}

main(){
	For p;
	p.proses();
}
