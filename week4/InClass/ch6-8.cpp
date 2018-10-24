//定義一個rectangle(l, w, outline)函數，l與w長方形的長與
//寬，當outline=1則以星號畫長方形外框，當outline=0則以星號
//畫實心長方形。
//從鍵盤輸入三個整數資料l, w與outline，呼叫rectangle函數，
//畫出長方形。

#include <iostream>
using namespace std;

void rectangle(int, int, int);

int main(){
	int l, w, outline;
	cin >> l >> w >> outline;
	rectangle(l, w, outline);
	return 0;
}

void rectangle(int l, int w, int outline){
	if (outline == 0){
		for (int i = 0 ; i < l ; i++){
			for (int j = 0 ; j < w ; j++){
				cout << "*";
			}
			cout << endl;
		}
	} else if (outline == 1){
		for (int i = 0 ; i < l ; i++){
			for (int j = 0 ; j < w ; j++){
				if (i==0 || i==l-1 || j==0 || j==w-1){
					cout << "*";
				} else {
					cout << " ";
				}
			}
			cout << endl;
		}
	}

}