#include <iostream>

using namespace std;

bool XOR(bool x , bool y ){
	return (x == y) ? 0 : 1;  
}


void swap(bool *a , bool *b){
	for (int i=0 ; i< 8 ; i++) {
		a[i] = XOR(a[i], b[i]);
		b[i] = XOR(b[i], a[i]);
		a[i] = XOR(a[i], b[i]);
	}
}

int main(){

	bool x[] = {0,0,0,0,0,1,0,1}, y[] = {0,0,0,0,0,1,1,1};

	swap(x,y);
		
	cout << "x value = 5 \n";
	for (auto i : x) {
		cout << i;
	}

	cout << "\ny value = 7 \n";
	for (auto i : y) {
		cout << i;
	}




	return 0;
}


