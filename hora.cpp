#include<stdio.h>
#include<iostream>
#include<conio.h>
#include "hora.h"
using namespace std;

hora::hora()
{
    ip=0;
    mes=0;
    maxi=0;
    dia=0;
    sum=0;
    fal=0;
    hora_=0;
    homax=24;
}
void hora::operaciones(){
    char *fmen[]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Setiembre","Octubre","Noviembre","Diciembre","ERROR"};
do{
cout<<"Ingrese el mes : ";
cin>>mes;

switch(mes)
{
case 1:
ip=0;
break;
case 2:
ip=1;
break;
case 3:
ip=2;
break;
case 4:
ip=3;
break;
case 5:
ip=4;
break;
case 6:
ip=5;
break;
case 7:
ip=6;
break;
case 8:
ip=7;
break;
case 9:
ip=8;
break;
case 10:
ip=9;
break;
case 11:
ip=10;
break;
case 12:
ip=11;
break;
default:
ip=12;
cout<<"ERROR tal numero de mes no existe";
break;
}

maxi=meses[ip];

}while(ip==12);

do{
cout<<"Ingrese el dia : ";
cin>>dia;
if(dia>maxi)

{
cout<<"ERROR Numero de dia no existente";
}
}
while(dia>maxi);
do{
    cout<<"Ingrese las horas transcurridas el dia de hoy :"<<endl;
cin>>hora_;
if(hora_>homax){
    cout<<"ERROR DE HORA, NO EXISTE";
}

}
while(hora_>homax);

for (int a=0; a<=ip-1; a++){
sum+=meses[a];}


fal=(sum+(dia-1))*24+hora_;


cout<<"De la fecha : "<<dia<<" de "<<fmen[ip]<<" del 2020 \n";
cout<<"Los dias transcurridos desde el 1 de Enero del 2020 son : "<<fal<<"\n";


getch();
}




