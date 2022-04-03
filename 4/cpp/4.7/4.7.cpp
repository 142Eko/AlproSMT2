#include <iostream>
using namespace std;
class For{
	public:
		void input();
		void proses();
	private:
		int pangkat,i,x,y;
};

void For::input(){
	cout<<"Masukkan x = ";cin>>x;
	cout<<"Masukkan y = ";cin>>y;	
}

void For::proses(){
	pangkat = 1;
	for(i = 1 ; i <= y; i++){
		pangkat *= x;		
	}
	cout<<x<<" pangkat "<<y<<" = "<<pangkat<<endl;
}

main(){
	cout<<"Menghitung hasil X Pangkat Y\n";
	cout<<"============================\n";
	For p;
	p.input();
	p.proses();
}
