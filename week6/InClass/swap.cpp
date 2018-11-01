#include <iostream>
using namespace std;

void swap(void*, void*, int);

int main(){
	int a = 3, b = 6;
	double c = 3.14, d = 6.28;
	float e = 1.23, f = 8.97;
	char g = 'a', h = 'z';

	swap(&a, &b, sizeof(a));
	cout << a << " " << b << endl;
	swap(&c, &d, sizeof(c));
	cout << c << " " << d << endl;
	swap(&e, &f, sizeof(e));
	cout << e << " " << f << endl;
	swap(&g, &h, sizeof(g));
	cout << g << " " << h << endl;

	return 0;
}

void swap(void* ptr1, void* ptr2, int len){
	char* p1 = (char*)ptr1;
	char* p2 = (char*)ptr2;

	char tmp;
	for (int i = 0 ; i < len ; i++){
		tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;

		p1 = p1 + 1;
		p2 = p2 + 1;
	}
}