#include <iostream>
#include <iomanip>
using namespace std;
class For{
	public:
		void proses();
		void output();
	private:
		int i,n,x;
		float jml,rata;
};

void For::proses(){
	cout<<"Masukkan banyak data = ";
	cin>>n;
	cout<<endl;
	jml = 0;
	for(i = 1 ; i <= n; i++){
		cout<<"Data ke-"<<i<<" = ";
		cin>>x;
		jml += x; 
	}
	cout<<endl;
}

void For::output(){
	cout<<"============\n";
	rata=jml/n;
	cout<<"\nRata-rata = "<<fixed<<setprecision(2)<<rata;	
}

main(){
	cout<<"Program menghitung rata-rata\n";
	cout<<"============================\n";
	For p;
	p.proses();
	p.output();
}
