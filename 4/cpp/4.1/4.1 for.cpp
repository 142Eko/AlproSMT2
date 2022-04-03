#include <iostream>
using namespace std;
class For{
	public:
		void proses();
	private:
		int i;
};

void For::proses(){
	for(i = 1 ; i <= 4; i++){
		cout<<" "<<i;
	}
}

main(){
	For p;
	p.proses();
}
