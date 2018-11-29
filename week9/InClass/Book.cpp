#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
定義一個書籍資料(book)類別，其資料成員與成員函數如下：
定義private資料成員title，用來儲存「書名」。
定義private資料成員auther，用來儲存「作者」。
定義private資料成員number，用來儲存「書號」。
定義private資料成員price，用來儲存「價格」。
定義public成員函數setBook，以鍵盤輸入書籍資料。
定義public成員函數showBook，顯示書籍資料。
在main函數中，宣告一個book陣列，用以儲存許多本書的書籍資料。
*/

class book{
public:
	void setBook();
	void showBook();
private:
	string title;
	string auther;
	string number;
	string price;
};

class booklist{
public:
	int GetNumberOfBooks(){ return books.size(); }
	void AddBook(book _book){ books.push_back(_book); }
	void RemoveBook(int index){ books.erase(books.begin() + index); }
	void SetBookAtIndex(int index){ books[index].setBook(); }
	void ShowBookAtIndex(int index){ books[index].showBook(); }
	void ShowAll(){
		for (int i = 0 ; i < books.size(); i++){
			books[i].showBook();
		}
	}
	void ResetAllBooks(){
		for (int i = 0 ;i < books.size(); i++){
			books[i].setBook();
		}
	}
private:
	vector<book> books;
};



int main(){
	booklist list;
	for (int i = 0 ; i < 3 ; i++){
		book b;
		b.setBook();
		list.AddBook(b);
	}
	list.ShowBookAtIndex(1);
	return 0;
}

void book::setBook(){
	cout << "請輸入書名：";
	getline(cin, this->title);
	cout << "請輸入作者：";
	getline(cin, (*this).auther);
	cout << "請輸入書號：";
	getline(cin, number);
	cout << "請輸入價格：";
	getline(cin, price);
}

void book::showBook(){
	cout << "書名：" << title << endl;
	cout << "作者：" << auther << endl;
	cout << "書號：" << number << endl;
	cout << "價格：" << price << endl;
}







