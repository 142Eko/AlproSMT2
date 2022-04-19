#include <iostream>
#include <math.h>
using namespace std;
class rekur52{
	private:
		int a[1],b,max;
	public:
		int input(int n){
			for(int i = 0; i < n; i++){
				cout<<"Angka ke-"<<i+1<<" = ";cin>>a[i];
			}
		}
		int pros52(array a,int n){
			if(int n!=0){
				if(a[n]<pros52(a,n-1)){
					return(pros(a,n-1));
				}
				else{
					return a[0];
				}
			}
		}
};

