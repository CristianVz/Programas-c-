#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int dado();
void llenarvector(int vec[], int tamano);
void tirar(int vec[], int tamano);


int main()
{
    int vec[101]={0};
    int tamano=101;
    srand(time(NULL));


    llenarvector(vec, tamano);
    tirar(vec, tamano);

return 0;
}

int dado()
{
    int cara;
    cara=rand()%6+1;

return cara;
}

void llenarvector(int vec[], int tamano)
{
    for(int i=1;i<tamano; i++)
    {
        vec[i]=i;
        vec[2]=1;
        vec[4]=4;
        vec[9]=9;
        vec[18]=8;
        vec[25]=10;
        vec[36]=0;
        vec[47]=7;
        vec[59]=5;
        vec[80]=1;
        vec[92]=6;

        vec[11]= -5;
        vec[17]= -3;
        vec[23]= -7;
        vec[39]= -3;
        vec[42] = -4;
        vec[53]= -5;
        vec[67]= -3;
        vec[74]= -2;
        vec[83]= -4;
        vec[99]= -9;
    }
}

void tirar(int vec[], int tamano)
{
    int jugador1=0;
    int jugador2=0;

    do{
        jugador1+=dado();

        if (vec[jugador1]>0)
        {
            cout<<"El jugador 1 cayo en una escalera"<<endl;
        }
        else if (vec[jugador1]<0)
            cout<<"El jugadro 1 cayo en una Serpiente"<<endl;
           
        jugador1+= vec[jugador1];
        cout<<"El recorrido del jugador 1:"<<jugador1<<endl;

        jugador2+=dado();

        if (vec[jugador2]>0)
        {
            cout<<"El jugador 2 cayo en una escalera"<<endl;          
        }
        else if (vec[jugador2]<0)
            cout<<"El jugador 2 cayo en una serpiente"<<endl;
          
        jugador2+=vec[jugador2];
        cout<<"El recorrido del jugador 2:"<<jugador2<<endl;

    }while(jugador1<tamano && jugador2<tamano);

    if (jugador1>jugador2)
        cout<<"El jugador 1 es el ganador";
    else
        cout<<"El jugador 2 es el ganador";
}

