
#include "../std_lib_facilities.h"

int ga[10] {1,2,4,8,16,32,64,128,256,512};

//2. feladat
void f(int arr[], int n){
	int la[10];
	
	for(int i=0; i<n; i++){
		la[i] = arr[i];
		cout << la[i] << "\n";
	}
	cout << "\n\n";

	int* p = new int[n];

	for(int i=0; i<n; i++){
		p[i] = arr[i];
		cout << p[i] << "\n";
	}

	delete[] p;
}

int main(){
	
	f(ga, 10);
	
	cout << "\n\n";
	
	int aa[10];
	
	for(int i = 1; i<11; i++){
		int l=1;
		for(int k=0; k<i; k++){
			l=l*(k+1);
		} 
		aa[i-1]=l;
	}
	
	f(aa,10);
	
}