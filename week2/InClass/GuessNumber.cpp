//寫一個程式，設計一個終極密碼的遊戲。
//輸入通關密碼，數字必須在1~100之間。
//輸入數字後按下Enter鍵。
//若猜錯，就顯示縮小後的數字範圍，並依提示再次猜謎。
//若猜對，則顯示評語。

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){
	/* initialize random seed: */
  	srand (time(NULL));

	int ans = rand() % 100 + 1;

	int upperBound = 100, lowerBound = 1;

	cout << "請猜" << lowerBound << "到" <<
			upperBound << "之間的數字！" << endl;
	int guess;
	while(cin >> guess){
		if (guess == ans){
			cout << "Congrat!" << endl;
			break;
		} else if (guess > upperBound || 
			guess < lowerBound){
			cout << "請猜" << lowerBound << "到" <<
			upperBound << "之間的數字！" << endl;
		} else {
			if (guess > ans){
				cout << "再小一點！" << endl;
				upperBound = guess - 1;
			} else if (guess < ans){
				cout << "再大一點！" << endl;
				lowerBound = guess + 1;
			}
			cout << "請猜" << lowerBound << "到" <<
			upperBound << "之間的數字！" << endl;
		}
	}

}


