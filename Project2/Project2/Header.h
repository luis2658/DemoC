#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>


using namespace std;

int ModuloInverso(int p, int x)
{
	int b1 = 0;

	while ((x*b1) % p != 1)
	{
		b1++;
	}
	return b1;
}

int mul_inv(int a, int b)
{
	int b0 = b, t, q;
	int x0 = 0, x1 = 1;
	if (b == 1) return 1;
	while (a > 1) {
		q = a / b;
		t = b, b = a % b, a = t;
		t = x0, x0 = x1 - q * x0, x1 = t;
	}
	if (x1 < 0) x1 += b0;
	return x1;
}

int etapa1(char valor)
{
	int q = (int)valor / 16;
	int r = (int)valor % 16;


	int iq = mul_inv(q, 17) * 16;
	int ir = mul_inv(r, 17) * 1;

	int nq = (iq >> 4);
	int nr = (ir << 4);


	int nvalor = (nq | nr);


	return nvalor;
}

char etapa2(char valor) {

	switch (valor)
	{
		//Diccionario

	case 98: case 100:case 104:case 106:case 107:case 108:case 110:
	case 111: case 112:case 114:case 116:case 120:case 122:
	case 66: case 68:case 72:case 74:case 75:case 76:case 78:
	case 79: case 80:case 82:case 84:case 88:case 90:

	case 46: case  44: case  58: case 59: case 34: case  40: case 43:
	case 45: case 160: case 161: case 162: case 163: case 164:

	case 32:

		//end
		return valor;

		break;

	default:

		//ENCRIPTAMIENTO
		return char(etapa1(valor));
		break;
	}


}


char* encriptamiento(string cadena) {

	char *res = new char[cadena.size() + 1];
	int aux;
	for (int i = 0; i < cadena.size(); i++)
	{
		aux = etapa2(cadena[i]);

		res[i] = char(aux);
	}
	res[cadena.size()] = '\0';

	return res;
}

void encriptamiento2(string cadena)
{
	for (int i = 0; i < cadena.size(); i++)
	{
		cout << char(etapa1(cadena[i])) << " " << cadena[i] << endl;
	}
	cout << endl;
}

void encriptamiento3(string cadena)
{
	for (int i = 0; i < cadena.size(); i++)
	{
		cout << etapa1(cadena[i]) << " ";;
	}
	cout << endl;
}

void guardarenarchivo()
{
	string entrada;
	string salida;
	

	ifstream input("input.txt");
	ofstream output("output.txt");
	if (input.is_open())
	{
		while (getline(input, entrada))
		{
			
			salida = encriptamiento(entrada);
						
			output << salida << '\n';
			
		}
	}

	input.close();
	output.close();
}

void guardarenarchivo2(char *palabra,int n)
{
	string entrada;
	string salida;


	ifstream input("input.txt");
	ofstream output(palabra);
	if (input.is_open())
	{
		while (getline(input, entrada))
		{

			salida = encriptamiento(entrada);

			output << salida << '\n';

		}
	}

	input.close();
	output.close();
}