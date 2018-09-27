//寫一個程式，列出1到1000間，3、5、7的倍數。

#include <iostream>
using namespace std;

int main(){
	
	for (int i = 0 ; i < 1000 ; i++){
		int num = i+1;
		if ((num%3 == 0) && (num%5 == 0) && (num%7 == 0)){
			cout << num << endl;
		}
	}

	return 0;
}