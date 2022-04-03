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
	while(i <= 4){
		cout<<" "<<i;
		i++;
	}
}

main(){
	While p;
	p.proses();
}
