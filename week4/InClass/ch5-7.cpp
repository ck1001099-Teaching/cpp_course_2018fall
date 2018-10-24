#include <iostream>
using namespace std;

int main(){
	double T = 37.0;
	while (T < 39.1){
		double tmp = T * 9.0 / 5.0 + 32.0;
		cout << "攝氏：" << T << "度，華氏：" << tmp << "度" << endl;
		T = T + 0.1;
	}
	return 0;
}