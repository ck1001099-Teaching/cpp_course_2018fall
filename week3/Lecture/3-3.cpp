#include <iostream>
using namespace std;

int f(int);

int main(){
	int x = 10, y;
	y = f(x);
	cout << "x = " << x << ", y = " << y << endl;
	return 0;
}

int f(int x){
	x = x + 2;
	return x * x;
}