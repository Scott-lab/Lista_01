#include<iostream>
#include<stdio.h>
#include<math.h>>
using namespace std;
class Line {
	private:
	float x,y,a,b;
	float norma;
	float ec;
	float pend;
	float my;
	public: 
	Line (float,float,float,float);
	void norm();
	void pen();
	void ecua();
};
Line::Line(float _x, float _y, float _a, float _b){
	x=_x;
	y=_y;
	a=_a;
	b=_b;
	norma=sqrt(_x*_x+_y*_y+_a*_a+_b*_b);
	pend=_b-_y/_a-_x;
	my=_y*pend;
	
}
void Line::pen(){
	cout<<"se ha creado una recta con la siguiente pendiente "<<pend<<endl;
}
void Line::norm(){
	cout <<"la distancia de la recta es: "<<norma<<endl;
}
void Line::ecua(){
	cout<<"La ecuacion de la recta es:"<<pend<<"y-"<<my<<"=x-"<<x<<endl;
}
int main (){
	Line recta=Line (1,2,3,4);
	recta.pen();
	recta.norm();
	recta.ecua();

}