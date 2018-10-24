//寫一C++程式，由鍵盤輸入國文、英文、數學三科的成績，然
//後計算並顯示總分、平均、與等級，其中平均與等級對應如下
//表。

#include <iostream>
using namespace std;

int main(){
	int chinese, english, math;
	cin >> chinese >> english >> math;

	int sum = chinese + english + math;
	double aver = sum / 3.0;
	if (aver >= 90.0){
		cout << "A" << endl;
	} else if (aver < 90.0 && aver >= 80.0){
		cout << "B" << endl;
	} else if (aver < 80.0 && aver >= 70.0){
		cout << "C" << endl;
	} else if (aver < 70.0 && aver >= 60.0){
		cout << "D" << endl;
	} else (aver < 60.0){
		cout << "F" << endl;
	}
	return 0;
}