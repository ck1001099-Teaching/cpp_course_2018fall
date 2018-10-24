//撰寫一個程式，具有一個自訂函數swap()，可將傳入之兩個
//變數的值交換。
#include <iostream>
using namespace std;

void swap(int*, int*);

int main(){
	int a = 10;
	int b = 100;
	cout << a << " " << b << endl;
	swap(&a, &b);
	cout << a << " " << b << endl;
	return 0;
}

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
	return;
}
/
/*
// Not work!!
void swap(int *a, int *b){
	int* tmp = a;
	a = b;
	b = tmp;
	return;
}
*/