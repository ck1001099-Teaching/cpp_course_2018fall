//豪慷慨百貨公司週年慶，公司決定在公司消費超過2000元的顧客就打7折
//，來增加買氣，請幫該公司寫出一個收銀台程式，輸入顧客購買總金額後
//計算顧客實際需付的錢。

#include <iostream>
using namespace std;

int main(){

	int money;

	cin >> money;

	if (money > 2000){
		cout << money * 0.7 << endl;
	} else {
		cout << money << endl;
	}

	return 0;
}




