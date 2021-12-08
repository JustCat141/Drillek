#include "../std_lib_facilities.h"

vector<int> gv(10);

void f(vector<int> pp){

	vector<int> lv(pp.size());

	copy(pp.begin(), pp.end(), lv.begin());

	for(int i=0; i<pp.size(); i++){
		cout << pp[i] << "\n";
	}
	cout<< "\n\n";
	
	vector<int> lv2 = pp;

	for(int i=0; i<lv2.size(); i++){
		cout << lv2[i] << "\n";
	}
}



int main(){
	
	for(int i=0; i<gv.size(); i++){
		int l=1;
		for(int k=0;k<i;k++){
			l = l*2;
		}
		gv[i]=l;
		cout << gv[i] << "\n";
	}
	
	cout << "\n\n";
	
	f(gv);
	
	vector<int> vv(10);
	
	for(int i = 1; i<vv.size()+1; i++){
		int l=1;
		for(int k=0; k<i; k++){
			l=l*(k+1);
		} 
		vv[i-1]=l;
	}
	
	cout << "\n\n";
	
	f(vv);
}