#include <iostream>
using namespace std;

int main(){
	int sum = 0;
	for (int i = 0 ; i < 100 ; i++){
		sum = sum + (i+1);
		// i == 0,  sum = sum + 1
		// i == 1,  sum = sum + 2
		// i == 2,  sum = sum + 3
		// ...
		// i == 99, sum = sum + 100
	}
	
	
	cout << sum << endl;
	return 0;
}