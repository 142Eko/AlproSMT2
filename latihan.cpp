#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
class Bensin{
	public :
	void pilih();
	void b1();
	void b2();
	void proses();
	private :
	double harga;
	int op;
	float i,ltr;
};

void Bensin::b1(){
	cout<<"Masukkan banyaknya Liter = ";
	cin>>ltr;
	harga=10000 ;
	harga=harga*ltr;	
}

void Bensin::b2(){
	cout<<"Masukkan banyaknya Liter = ";
	cin>>ltr;
	harga=5000;
	harga=harga*ltr;
}

void Bensin::pilih(){
	cout<<"\tProgram Menghitung Bensin\n\n";
	cout<<"========================================\n\n";
	cout<<"Pilih 1.Pertamax (10000/L)\n";
	cout<<"      2.Pertalite (5000/L)\n";
	cout<<"=====================\n\n";
	cout<<"Masukkan pilihan(1|2) = ";cin>>op;
	switch (op){
		case 1 :
			b1();
			break;
		case 2:
			b2();
			break;
	}
	cin.get();
}

void Bensin::proses(){
	ltr=ltr*10;
	i=1;
	while(i<=ltr){
		i++;
	}
	cout<<"=============================\n\n";
	cout<<"Total yang harus dibayar = Rp."<<harga;
}

main(){
	Bensin p;
	p.pilih();
	p.proses();
}
