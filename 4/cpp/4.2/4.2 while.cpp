#include <iostream>
using namespace std;
class While{
	public:
		void proses();
	private:
		int i;
};

void While::proses(){
	i=1;
	while(i <= 10){
		if(i % 2 == 1)
		cout<<i<<endl;
		i++;
	}
}

main(){
	While p;
	p.proses();
}
