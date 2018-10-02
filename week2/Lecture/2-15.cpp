#include <iostream>
using namespace std;

int main(){
	
	int total = 0;

	for (int i = 0 ; i <= 10 ; i++){
		if (i%2 == 0){
			continue;
		}
		total = total + i;
	}

	cout << total;
	
	return 0;
}