#include <iostream>
using namespace std;

int main(){
	double a, b, c;
	cin >> a >> b >> c;
	double delta = b * b - 4.0 * a * c;
	if (delta > 0){
		cout << "兩實根" << endl;
	} else if (delta == 0){
		cout << "一個實根（重根）" << endl;
	} else if (delta < 0){
		cout << "兩虛根" << endl;
	}
	return 0;
}