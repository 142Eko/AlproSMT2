#include <iostream>
using namespace std;
class stts{
	public:
		void input();
		
			void huruf();
			void bil();
			void belasan();
			void puluhan();
			void ratusan();
			void ribuan();
			
	private:
		int bilangan,satuan,puluh,ratus;
};

	void stts::input(){
	cout<<"Masukkan bilangan max 4 digit = "; cin>>bilangan;
}

	void stts::huruf(){
	if(bilangan<=11)bil();
	else if(bilangan > 11 && bilangan <= 19)belasan();
	else if(bilangan > 19 && bilangan <= 99)puluhan();
	else if(bilangan > 100 && bilangan <=999)ratusan();
	else if(bilangan > 999 && bilangan <=9999)ribuan();
	
}
	void stts::bil(){
		switch(bilangan){
		case 1 :cout<<"satu";break;
		case 2 :cout<<"dua";break;
		case 3 :cout<<"tiga";break;
		case 4 :cout<<"empat";break;
		case 5 :cout<<"lima";break;
		case 6 :cout<<"enam";break;
		case 7 :cout<<"tujuh";break;
		case 8 :cout<<"delapan";break;
		case 9 :cout<<"sembilan";break;
		case 10 :cout<<"sepuluh";break;
		case 11 :cout<<"sebelas";break;	
		}
	}
	
	void stts::belasan(){
		if(bilangan > 11 && bilangan <= 19){
		bilangan%=10;
		bil();
		cout<<" belas";
	}		
	}

	void stts::puluhan(){
		if(bilangan > 19 && bilangan <= 99){
		satuan=bilangan%10;
		bilangan=bilangan/10;
		huruf();
		cout<<" puluh ";
		bilangan=satuan;
		huruf();
		}
	}
	
	void stts::ratusan(){
		if(bilangan > 100 && bilangan <=999){
			satuan=bilangan%10;
			puluh=bilangan%100;
			bilangan=bilangan/100;
			huruf();
			cout<<" ratus ";
			bilangan=puluh;
			huruf();
		}
	}
	
	void stts::ribuan(){
		if(bilangan > 999 && bilangan <=9999){	
			satuan=bilangan%10;
			puluh=bilangan%100;
			ratus=bilangan%1000;
			bilangan=bilangan/1000;
			huruf();
			cout<<" ribu ";
			bilangan=ratus;
			huruf();
			
		}
	}
	
	main(){
	cout<<"Program konversi angka\n";
	cout<<"======================\n";	
	stts p;
	p.input();
	p.huruf();
	}
