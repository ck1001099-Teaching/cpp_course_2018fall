#include <iostream>
using namespace std;

/* implement */
class Rectangle{
public:
	int getLength();
	void setLength(int);
	int getWidth();
	void setWidth(int);
	int perimeter();
	int area();
private:
	int length;
	int width;
}

int main(){
	Rectangle rect;
	int l, w;
	cin >> l >> w;
	rect.setLength(l);
	rect.setWidth(w);
	cout << "Perimeter: " << rect.perimeter() << endl;
	cout << "Area: " << rect.area() << endl;
	return 0;
}

int Rectangle::getLength(){
	return length;
}
void Rectangle::setLength(int l){
	length = l;
}
int Rectangle::getWidth(){
	return width;
}
void Rectangle::setWidth(int w){
	width = w;
}
int Rectangle::perimeter(){
	return 2 * (length + width);
}
int Rectangle::area(){
	return length * width;
}