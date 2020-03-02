#ifndef FECHA_H
#define FECHA_H
#include<iostream>
#include<conio.h>
#include <stdio.h>

class Fecha
{
    public:
        void man();
        Fecha();
    protected:

    private:
    int ano,ip,mes=0,maxi=0,dia=0,sum=0,tot=365,fal;
    int meses[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
};

#endif // FECHA_H
