#include<iostream>
#include<stdio.h>
#include<math.h>>
using namespace std;
class Point {
	private:
	float x,y,z;
	float norma;
	public:
    Point (float, float, float );
	void norm();
	void negate();
};
Point::Point(float _x, float _y, float _z){
	x=_x*-1;
	y=_y*-1;
	z=_z*-1;
	norma=sqrt(_x*_x+_y*_z+_z*_z);
}
void Point::negate(){
	cout<<"las coordenadas son: "<<x <<y <<z<<endl;
}
void Point::norm(){
	cout<<"la norma es: "<<norma<<endl;
}
	int main (){
		Point vector=Point(2,3,4);
		vector.negate();
		vector.norm();
	}
