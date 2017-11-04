#include <iostream>

using namespace std;

int menu();
void instrucciones(int tablero[][20], int rt, int op);
void mostrar(int tablero[][20], int rt);

int main()
{
    int op;
    int rt=20;
    int tablero[20][20]={{0}};

    op=menu();
    instrucciones(tablero, rt, op);

return 0;
}
int menu()
{
    int op;
    cout<<"1.-Pluma hacia arriba\n";
    cout<<"2.-Pluma hacia abajo\n";
    cout<<"3.-Girar a la derecha\n";
    cout<<"4.-Girar a la izquierda\n";
    cout<<"5.-Avanzar\n";
    cout<<"6.-Impimir tablero\n";
    cout<<"7.-Finalizar";

return op;
}

void instrucciones(int tablero[][20], int rt, int op)
{
    int espacios=0, pluma=0, girarderecha=0, girarIzquierda=4, coordenadaY=0, coordenadaX=0;

    do {
        cout<<endl<<"Ingrese una opcion: ";
        cin>>op;
        switch(op)
        {
        case 1:
            pluma=0;
            cout<<"pluma hacia arriba\n";
        break;
       case 2:
            pluma=1;
            cout<<"pluma hacia abajo\n";
        break;

        case 3:
            girarderecha++;
            if(girarderecha==4)
            {
                girarderecha=0;
            }
            cout<<"Giraste a la derecha"<<endl;
        break;

        case 4:
            if(girarIzquierda==0)
            {
                girarIzquierda=4;
            }
            girarIzquierda--;
             cout<<"Giraste a la izquierda"<<endl;
        break;

        case 5:
            cout<<"Ingrese el numero de espacios";
            cin>>espacios;
            if(girarderecha==0)
            {
                for (int r=coordenadaY; r<=coordenadaY; r++)
                {
                    for (int c=coordenadaX, p=espacios; p>0; c++, p--)
                    {
                        tablero[r][c]=pluma;
                        coordenadaX=c;
                    }
                }
            }
            else if (girarderecha==1)
            {
                for (int p=espacios, r=coordenadaY+1; p>0; p--,r++)
                {
                    for (int c=coordenadaX; c<=coordenadaX; c++)
                    {
                        tablero[r][c]=pluma;
                    }

                    coordenadaY=r;
                }
            }

            else if (girarderecha==2)
            {
                for (int r=coordenadaY; r<=coordenadaY; r++)
                {
                    for (int p=espacios, c=espacios-1; c>=0; c--,p--) {
                        tablero[r][c]=pluma;
                        coordenadaX=p;
                    }
                }
            }
            else if (girarderecha==3)
            {
                for (int p=coordenadaY, r=espacios; r>0; r--, p--)
                {
                    for (int c=coordenadaX; c<=coordenadaX; c++)
                    {
                        tablero[p][c]=pluma;
                    }
                    coordenadaY=p;
                }
            }


            else if(girarIzquierda>coordenadaX)
                girarIzquierda=rt-1;
            for (int r=coordenadaY; r<coordenadaY+1; r++)
            {
                for (int c=coordenadaX; c>(coordenadaX-girarIzquierda); c--)
                {
                    tablero[r][c]=pluma;
                    coordenadaX=c;
                }
            }
        break;
        case 6:
            mostrar(tablero, rt);
        break;

        }
    } while (op!=7);
}

void mostrar(int tablero[][20], int rt)
{
    for (int r=0; r<rt; r++)
    {
        for (int c=0; c<rt; c++)
        {
            cout<<" "<<tablero[r][c];
        }
    cout<<endl;
    }
}
