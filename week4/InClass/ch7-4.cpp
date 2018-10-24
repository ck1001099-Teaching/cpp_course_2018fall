//以亂數擲10000次骰子，並分別列出出現1、2、3、4、5、6點的
//次數。
#include <iostream>
#include <cstdlib> // rand(), srand()
#include <time.h>
using namespace std;

int main(){

	srand(time(NULL));

	int arr[6];
	for (int i = 0 ; i < 6 ; i++){
		arr[i] = 0;
	}

	for (int i = 0 ; i < 15000 ; i++){
		int number = rand() % 6 + 1; // 1~6
		arr[number-1] = arr[number-1] + 1;
	}
	
	for (int i = 0 ; i < 6 ; i++){
		cout << "擲到" << i+1 << "的次數：" << arr[i] << endl;
	}

	return 0;
}