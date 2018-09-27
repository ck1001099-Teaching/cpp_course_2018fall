//驗證一個數是否為2、3、5的倍數

#include <iostream>
using namespace std;

int main(){

	int number;

	cin >> number;

	cout << ((number%2 == 0) && (number%3 == 0) && (number%5 == 0)) << endl;

	return 0;
}