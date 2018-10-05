/*
1. 請寫一個函數，用以計算整數的次方。
輸入：int a, int n
輸出：a^n
2. 請寫一個函數，找出四個整數中的最大值。
輸入：int a, int b, int c, int d
輸出：max(a,b,c,d)
3. 請寫一個函數，在螢幕上輸出10行「Hello, world!」。
輸入：無
輸出：無
*/
#include <iostream>
using namespace std;

int Power(int, int);
int Max(int, int, int, int);
void HelloWorld();

int main(){
	int r = Power(3,7);
	cout << r << endl;
	cout << Power(2, 10) << endl;
	cout << Max(1,2,3,4) << endl;
	HelloWorld();
	return 0;
}

int Power(int a, int n){
	int b = 1;
	for (int i = 0; i < n ; i++){
		b = b * a;
	}
	return b;
}

int Max(int a, int b, int c, int d){
	int max = a;
	if (a > b){
		max = a;
	} else {
		max = b;
	}
	if (max > c){
		max = max;
	} else {
		max = c;
	}
	if (max > d){
		max = max;
	} else {
		max = d;
	}
	return max;
}

void HelloWorld(){
	for (int i = 0 ; i < 10 ; i++){
		cout << "Hello World!" << endl;
	}
	return;
}





