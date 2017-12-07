#include <iostream>
#include <fstream>
using namespace std;
void menu();
int cuestionario(int x);
int base(char mat[][71]);
int moda(int  pre,char mat[][71],int r, int c,int cont1,int cont2,int cont3,int cont4,int cont5,int cont6,int cont7,int cont8,char &letra);

int main()
{
	ofstream arch;
	int moda1=0;
	char letra;
	char mat[171][71];
	int x,pre;
	int r,c;
	int cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,cont6=0,cont7=0,cont8=0;
	int opc;
	do
	{
		menu();
		cin>>opc;

		switch(opc)
		{
			case 1:
			    cout<<"Ingrese el umero de pregunta: ";
				cin>>x;
				cout<<cuestionario(x);
				break;

			case 2:
				{
				arch.open("c:\\datos\\PI.txt",ios::app);
				cout<<"Seleccione la pregunta para obtener la moda: ";
				cin>>pre;
				moda1=moda(pre,mat,r,c,cont1,cont2,cont3,cont4,cont5,cont6,cont7,cont8,letra);
				cout<<"la moda de la pregunta "<<pre<<" es: "<<moda1<<" de la letra: "<<letra<<endl;
				arch<<"la moda de la pregunta "<<pre<<" es: "<<moda1<<" de la letra: "<<letra<<endl;
				arch.close();
				}
			break;

		}
	}while(opc !=0);
return 0;
}

void menu()
{

        cout<<"1.- Preguntas"<<endl;
		cout<<"2.- Moda de preguntas"<<endl;
		cout<<"0.- Salir "<<endl;
		cout<<"Coloca un el numero de la opcion: "<<endl;

}

int cuestionario(int numero)
{
		switch(numero)
		{
			case 1:
				cout<<"Cuantas fuentes de poder Conosen: ";
			break;
			case 2:
				cout<<"1-->Mucho"<<endl<<"2-->Poco"<<endl<<"3-->nada"<<endl;
				cout<<"Que tan familiarizado esta con el uso de la fuente de poder: ";

			break;
			case 3:
				cout<<"1--> +-5v"<<endl<<"2--> +-12V"<<endl<<"3--> Variable 1.2-12v"<<endl;
				cout<<"Que gama de voltaje utiliza de manera mas frecuente: ";
			break;
			case 4:
				cout<<"1--> 0.3-.9amp"<<endl<<"2--> 1amp"<<endl<<"3--> 2amp"<<endl<<"4--> 3amp"<<endl;
				cout<<"Que gama de amperaje utiliza de manera mas frecuente: ";
			break;
			case 5:
				cout<<"1--> Regulable"<<endl<<"2--> Estatica"<<endl<<"3--> Ambas"<<endl;
				cout<<"Si fuera a adquirir una funete de poder, que tipo de fuente le interesa: ";
			break;
			case 6:
				cout<<"1--> No ha utilizado"<<endl<<"2--> Steren"<<endl<<"3--> Tektronics"<<endl;
				cout<<"De las anteriores marcas de fuentes de poder, cual ha utilizado: ";
			break;
			case 7:
				cout<<"del 1 al 7, indique si esta de acuredo(7) o en desacuerdo(1) con lo siguiente: "<<endl;
				cout<<"La marca que utilizo es funcional para sus necesidades: "<<endl;

				cout<<"La marca que utilizo ofrece un buen precio: "<<endl;

				cout<<"La marca que utilizo ofrece un buen: amperaje y voltaje: "<<endl;

			break;
			case 8:
				cout<<"Estaria dispuesto a probar una nueva marca de fuente de poder: "<<endl;
				cout<<"1--> si"<<endl<<"2--> no"<<endl;

			break;
			case 9:
				printf("1--> cada 2 a%cos", 164);
				printf("\n 2--> cada 5 a%cos", 164);
				printf("\n 3--> cada 10 a%cos", 164);
				cout<<"\n Con que frecuencia compraria una fuente de poder: ";

			break;
			case 10:
				cout<<"1-->$ 100 a 300"<<endl<<"2-->$ 301 a 6000"<<endl<<"3-->$ 601 a 900"<<endl<<"4-->$ mas de 900"<<endl;
				cout<<"Cuanto estaria dispuesto a pagar por una fuente de poder: ";
			break;
			case 11:
				cout<<"1--> Casa"<<endl<<"2--> Hospital"<<endl<<"3--> Laboratorio"<<endl<<"4-->Oficina"<<endl<<"5-->Taller"<<endl;
				cout<<"En dnde concidera que se usa mas una fuente de poder: ";
			break;
		}
	return numero;
}
int moda(int pre, char mat[][71],int r, int c,int cont1,int cont2,int cont3,int cont4,int cont5,int cont6,int cont7,int cont8,char &letra)
{
	fstream archi("c:\\datos\\pi1.txt",ios::in);
	for(r=0;r<171;r++)
	{
		for(c=0;c<70;c++)
		{
			archi>>mat[r][c];

		}
	}

	switch(pre)
	{
		case 1:
			for(r=0;r<171;r++)
			{
				if(mat[r][0]=='a')
				{
					cont1++;
				}

				if(mat[r][1]=='b')
				{
					cont2++;
				}

				if(mat[r][2]=='c')
				{
					cont3++;
				}

				if(mat[r][3]=='d')
				{
					cont4++;
				}

				if(mat[r][4]=='e')
				{
					cont5++;
				}

				if(mat[r][5]=='f')
				{
					cont6++;
				}

				if(mat[r][6]=='g')
				{
					cont7++;
				}

				if(mat[r][7]=='h')
				{
					cont8++;
				}
			}
			if(cont1>cont2 & cont1>cont3 & cont1>cont4 & cont1>cont5 & cont1>cont6 & cont1>cont7 & cont1>cont8)
			{
				letra='a';
				return cont1;
			}
			else
			if(cont2>cont3 & cont2>cont4 & cont2>cont5 & cont2>cont6 & cont2>cont7 & cont2>cont8 & cont2>cont1)
			{
				letra='b';
				return cont2;
			}
			else
			if(cont3>cont4 & cont3>cont5 & cont3>cont6 & cont3>cont7 & cont3>cont8 & cont3>cont1 & cont3>cont2)
			{
				letra='c';
				return cont3;
			}
			else
			if(cont4>cont5 & cont4>cont6 & cont4>cont7 & cont4>cont8 & cont4>cont1 & cont4>cont2 & cont4>cont3)
			{
				letra='d';
				return cont4;
			}
			else
			if(cont5>cont6 & cont5>cont7 & cont5>cont8 & cont5>cont1 & cont5>cont2 & cont5>cont3 & cont5>cont4)
			{
				letra='e';
				return cont5;
			}
			else
			if(cont6>cont7 & cont6>cont8 & cont6>cont1 & cont6>cont2 & cont6>cont3 & cont6>cont4 & cont6>cont5)
			{
				letra='f';
				return cont6;
			}
			else
			if(cont7>cont8 & cont7>cont1 & cont7>cont2 & cont7>cont3 & cont7>cont4 & cont7>cont5 & cont7>cont6)
			{
				letra='g';
				return cont7;
			}
			else
			if(cont8>cont1 & cont8>cont2 & cont8>cont3 & cont8>cont4 & cont8>cont5 & cont8>cont6 & cont8>cont7)
			{
				letra='h';
				return cont8;
			}

		break;
		case 2:
			for(r=0;r<171;r++)
			{
				if(mat[r][8]=='a')
				{
					cont1++;
				}
				if(mat[r][8]=='b')
				{
					cont2++;
				}
				if(mat[r][8]=='c')
				{
					cont3++;
				}
			}

			if(cont1>cont2 & cont1>cont3)
			{
				letra='a';
				return cont1;
			}
			else
			if(cont2>cont3 &  cont2>cont1)
			{
				letra='b';
				return cont2;
			}
			else
			if(cont3>cont1 & cont3>cont2)
			{
				letra='c';
				return cont3;
			}
		break;
		case 3:
			for(r=0;r<171;r++)
			{
				if(mat[r][9]=='a')
				{
					cont1++;
				}
				if(mat[r][10]=='b')
				{
					cont2++;
				}
				if(mat[r][11]=='c')
				{
					cont3++;
				}
			}

			if(cont1>cont2 & cont1>cont3)
			{
				letra='a';
				return cont1;
			}
			else
			if(cont2>cont3 &  cont2>cont1)
			{
				letra='b';
				return cont2;
			}
			else
			if(cont3>cont1 & cont3>cont2)
			{
				letra='c';
				return cont3;
			}
		break;
		case 4:
			for(r=0;r<171;r++)
			{
				if(mat[r][12]=='a')
				{
					cont1++;
				}

				if(mat[r][13]=='b')
				{
					cont2++;
				}

				if(mat[r][14]=='c')
				{
					cont3++;
				}

				if(mat[r][15]=='d')
				{
					cont4++;
				}
			}
			if(cont1>cont2 & cont1>cont3 & cont1>cont4)
			{
				letra='a';
				return cont1;
			}
			else
			if(cont2>cont3 & cont2>cont4 & cont2>cont1)
			{
				letra='b';
				return cont2;
			}
			else
			if(cont3>cont4 &  cont3>cont1 & cont3>cont2)
			{
				letra='c';
				return cont3;
			}
			else
			if(cont4>cont1 & cont4>cont2 & cont4>cont3)
			{
				letra='d';
				return cont4;
			}
		break;
		case 5:
			for(r=0;r<171;r++)
			{
				if(mat[r][16]=='a')
				{
					cont1++;
				}

				if(mat[r][16]=='b')
				{
					cont2++;
				}

				if(mat[r][16]=='c')
				{
					cont3++;
				}
			}
			if(cont1>cont2 & cont1>cont3)
			{
				letra='a';
				return cont1;
			}
			else
			if(cont2>cont3 &  cont2>cont1)
			{
				letra='b';
				return cont2;
			}
			else
			if(cont3>cont1 & cont3>cont2)
			{
				letra='c';
				return cont3;
			}
		break;
		case 6:
			for(r=0;r<171;r++)
			{
				if(mat[r][17]=='a')
				{
					cont1++;
				}

				if(mat[r][18]=='b')
				{
					cont2++;
				}

				if(mat[r][19]=='c')
				{
					cont3++;
				}

				if(mat[r][20]=='d')
				{
					cont4++;
				}

				if(mat[r][21]=='e')
				{
					cont5++;
				}

				if(mat[r][22]=='f')
				{
					cont6++;
				}
			}
			if(cont1>cont2 & cont1>cont3 & cont1>cont4 & cont1>cont5 & cont1>cont6)
			{
				letra='a';
				return cont1;
			}
			else
			if(cont2>cont3 & cont2>cont4 & cont2>cont5 & cont2>cont6 & cont2>cont1)
			{
				letra='b';
				return cont2;
			}
			else
			if(cont3>cont4 & cont3>cont5 & cont3>cont6 & cont3>cont1 & cont3>cont2)
			{
				letra='c';
				return cont3;
			}
			else
			if(cont4>cont5 & cont4>cont6 & cont4>cont1 & cont4>cont2 & cont4>cont3)
			{
				letra='d';
				return cont4;
			}
			else
			if(cont5>cont6 & cont5>cont1 & cont5>cont2 & cont5>cont3 & cont5>cont4)
			{
				letra='e';
				return cont5;
			}
			else
			if(cont6>cont1 & cont6>cont2 & cont6>cont3 & cont6>cont4 & cont6>cont5)
			{
				letra='f';
				return cont6;
			}

		break;
		case 7:

		break;
		case 8:
			for(r=0;r<171;r++)
			{
				if(mat[r][32]=='a')
				{
					cont1++;
				}

				if(mat[r][32]=='b')
				{
					cont2++;
				}

				if(mat[r][32]=='c')
				{
					cont3++;
				}
			}
			if(cont1>cont2 & cont1>cont3)
			{
				letra='a';
				return cont1;
			}
			else
			if(cont2>cont3 &  cont2>cont1)
			{
				letra='b';
				return cont2;
			}
			else
			if(cont3>cont1 & cont3>cont2)
			{
				letra='c';
				return cont3;
			}
		break;
		case 9:
			for(r=0;r<171;r++)
			{
				if(mat[r][33]=='a')
				{
					cont1++;
				}

				if(mat[r][33]=='b')
				{
					cont2++;
				}

				if(mat[r][33]=='c')
				{
					cont3++;
				}
			}
			if(cont1>cont2 & cont1>cont3)
			{
				letra='a';
				return cont1;
			}
			else
			if(cont2>cont3 &  cont2>cont1)
			{
				letra='b';
				return cont2;
			}
			else
			if(cont3>cont1 & cont3>cont2)
			{
				letra='c';
				return cont3;
			}
		break;

		case 10:
			for(r=0;r<171;r++)
			{
				if(mat[r][34]=='a')
				{
					cont1++;
				}

				if(mat[r][34]=='b')
				{
					cont2++;
				}

				if(mat[r][34]=='c')
				{
					cont3++;
				}

				if(mat[r][34]=='d')
				{
					cont4++;
				}
			}
			if(cont1>cont2 & cont1>cont3 & cont1>cont4)
			{
				letra='a';
				return cont1;
			}
			else
			if(cont2>cont3 & cont2>cont4 & cont2>cont1)
			{
				letra='b';
				return cont2;
			}
			else
			if(cont3>cont4 &  cont3>cont1 & cont3>cont2)
			{
				letra='c';
				return cont3;
			}
			else
			if(cont4>cont1 & cont4>cont2 & cont4>cont3)
			{
				letra='d';
				return cont4;
			}
		break;

		case 11:
			for(r=0;r<171;r++)
			{
				if(mat[r][35]=='a')
				{
					cont1++;
				}

				if(mat[r][36]=='b')
				{
					cont2++;
				}

				if(mat[r][37]=='c')
				{
					cont3++;
				}

				if(mat[r][38]=='d')
				{
					cont4++;
				}

				if(mat[r][39]=='e')
				{
					cont5++;
				}

				if(mat[r][40]=='f')
				{
					cont6++;
				}

				if(mat[r][41]=='g')
				{
					cont7++;
				}

				if(mat[r][42]=='h')
				{
					cont8++;
				}
			}
			if(cont1>cont2 & cont1>cont3 & cont1>cont4 & cont1>cont5 & cont1>cont6 & cont1>cont7 & cont1>cont8)
			{
				letra='a';
				return cont1;
			}
			else
			if(cont2>cont3 & cont2>cont4 & cont2>cont5 & cont2>cont6 & cont2>cont7 & cont2>cont8 & cont2>cont1)
			{
				letra='b';
				return cont2;
			}
			else
			if(cont3>cont4 & cont3>cont5 & cont3>cont6 & cont3>cont7 & cont3>cont8 & cont3>cont1 & cont3>cont2)
			{
				letra='c';
				return cont3;
			}
			else
			if(cont4>cont5 & cont4>cont6 & cont4>cont7 & cont4>cont8 & cont4>cont1 & cont4>cont2 & cont4>cont3)
			{
				letra='d';
				return cont4;
			}
			else
			if(cont5>cont6 & cont5>cont7 & cont5>cont8 & cont5>cont1 & cont5>cont2 & cont5>cont3 & cont5>cont4)
			{
				letra='e';
				return cont5;
			}
			else
			if(cont6>cont7 & cont6>cont8 & cont6>cont1 & cont6>cont2 & cont6>cont3 & cont6>cont4 & cont6>cont5)
			{
				letra='f';
				return cont6;
			}
			else
			if(cont7>cont8 & cont7>cont1 & cont7>cont2 & cont7>cont3 & cont7>cont4 & cont7>cont5 & cont7>cont6)
			{
				letra='g';
				return cont7;
			}
			else
			if(cont8>cont1 & cont8>cont2 & cont8>cont3 & cont8>cont4 & cont8>cont5 & cont8>cont6 & cont8>cont7)
			{
				letra='h';
				return cont8;
			}
		break;
	}
	archi.close();
}
