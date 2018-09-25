#include <iostream>
using namespace std;

int main(){
	for (int i = 0 ; i < 10 ; i++){
		cout << i << endl;
	}

	for (int j = 0 ; j < 10 ; j++){
		cout << j << endl;
		j = j + 1;
	}


	return 0;
}