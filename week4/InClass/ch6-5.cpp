//寫一C++程式，計算球面積與體積。
//定義一個sArea(pi, r)函數，接收pi與r參數，傳回球面積給呼叫敘述。
//定義一個sVolumn(pi, r)函數，接收pi與r參數，傳回球體積給呼
//叫敘述。
//在main函數中，呼叫sArea()函數與sVolumn函數，假設球半徑為
//5, 6, 7, 8, 9, 10。

#include <iostream>
using namespace std;

double sArea(double, double);
double sVolumn(double, double);

int main(){
	double pi = 3.14;
	cout << "r = 5: " << sArea(pi, 5) << " " << sVolumn(pi, 5) << endl;
	cout << "r = 6: " << sArea(pi, 6) << " " << sVolumn(pi, 6) << endl;
	cout << "r = 7: " << sArea(pi, 7) << " " << sVolumn(pi, 7) << endl;
	cout << "r = 8: " << sArea(pi, 8) << " " << sVolumn(pi, 8) << endl;
	cout << "r = 9: " << sArea(pi, 9) << " " << sVolumn(pi, 9) << endl;
	cout << "r = 10: " << sArea(pi, 10) << " " << sVolumn(pi, 10) << endl;

	for (double r = 5 ; r <= 10 ; r++){
		cout << "r = " << r << ": " << sArea(pi, r) 
		<< " " << sVolumn(pi, r) << endl;
	}
}

double sArea(double pi, double r){
	double area = 4.0 * pi * r * r;
	return area;
}

double sVolumn(double pi, double r){
	return (4.0/3.0) * pi * r * r * r;
}