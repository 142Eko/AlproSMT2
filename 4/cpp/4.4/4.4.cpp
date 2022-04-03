#include <iostream>
#include <iomanip>
using namespace std;
class While{
	public:
		void proses();
		void output();
	private:
		int i,x;
		float jml,rata;
};

void While::proses(){
	i = 1;
	jml = 0;
	cout<<"Data ke-1: ";cin>>x;
	while(x > 0){
		jml += x;
		cout<<"Data ke-"<<i+1<<": ";cin>>x;
		i++;
	}
}

void While::output(){
	rata = jml/(i-1);
	cout<<"Rata-rata = "<<fixed<<setprecision(2)<<rata;	
}

main(){
	cout<<"Program Rata-rata (untuk berhenti,masukkan 0)\n";
	cout<<"===================================================\n\n";
	While p;
	p.proses();
	p.output();
}
