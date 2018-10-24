#include <iostream>
using namespace std;

int main(){
	int a, b; // 定義：a>=b
	cin >> a >> b;
	if (a < b){
		int tmp = a;
		a = b;
		b = tmp;
	}
	while (true){
		a = a % b;
		if (a == 0){
			cout << "最大公因數：" << b << endl;
			break;
		} else {
			int tmp = a;
			a = b;
			b = tmp;
		}
	}

	return 0;
}