#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

class Point{
private:
	int x;
	int y;
	int z;
	float n;
public:
	Point(int, int, int);
	void negate();
	void norm();
	void print();
};

Point::Point(int _x, int _y, int _z){
	x= _x;
	y= _y;
	z= _z;}
	
void Point :: negate(){
	x= x*-1;
	y= y*-1;
	z= z*-1;}

void Point :: norm(){
	n=sqrt((x*x)+(y*y)+(z*z));}

void Point :: print(){
	cout<<x*-1<<y*-1<<z*-1<<endl;
	cout<<"negado es "<<x<<y<<z<<endl;
	cout<<"la norma es "<<n<<endl;}

int main(){
	Point p1(8,9,3);
	p1.negate();
	p1.norm();
	p1.print();
	system ("pause");
	return 0;
}
