#include<stdio.h>
#include<iostream>
using namespace std;
class Zoologico{
	private:
	int edad, salud, peso, nacimiento;
	public: 
	Zoologico (int, int, int, int);
	void info();
	void alimentar();
	void revision();
};
Zoologico::Zoologico(int _edad, int _salud, int _peso, int _nacimiento){
	edad=_edad;
	salud=_salud;
	peso=_peso;
	nacimiento=_nacimiento;
}
void Zoologico::info(){
	cout<<"Nombre: Simba"<<endl;
	cout<<"Tipo: Leon"<<endl;
	cout<<"Edad: "<<edad<<"anios"<<endl;
	cout<<"Salud: "<<salud<<endl;
	cout<<"Peso: "<<peso<<"Kg"<<endl;
	cout<<"Nacimiento: "<<nacimiento<<"/"<<"01"<<"/"<<"2020"<<endl;
}
void Zoologico::revision(){
	cout<<"se esta revisando"<<endl;
	cout<<"-"<<endl;
	cout<<"-"<<endl;
	cout<<"-"<<endl;
	cout<<"-"<<endl;
	cout<<"la revision ha finalizado, la salud es: 1"<<endl;
}
void Zoologico::alimentar(){
	cout<<"Simba esta comiendo"<<endl;
	cout<<"-"<<endl;
	cout<<"-"<<endl;
	cout<<"-"<<endl;
	cout<<"Simba ha termiando de comer"<<endl;
}
int main (){
	Zoologico animal1=Zoologico(4,1,20,3);
	animal1.info();
	animal1.revision();
	cout<<"        "<<endl;
	animal1.alimentar();
}