#include "Fecha.h"
#include<iostream>
#include<conio.h>
#include <stdio.h>

using namespace std;

Fecha :: Fecha(){

}

void Fecha::man(){
char *fmen[]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Setiembre","Octubre","Noviembre","Diciembre","ERROR"};

cout<<"Ingrese el ano : ";
cin>>ano;
if(ano%400==0)
{
meses[1]=29;
tot=365;
}
else if(ano%4==0 && ano%100!=0)
{

}

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


for (int a=0; a<=ip-1; a++){
sum+=meses[a];}


fal=tot*(ano-2020)+sum;


cout<<"De la fecha : "<<dia<<" de "<<fmen[ip]<<" del "<<ano<<"\n";
cout<<"Los dias transcurridos desde el 1 de Enero de 2020 son : "<<fal<<endl;

getch();
}
