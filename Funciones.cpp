#include <iostream> //direcciones preprocesador

#define N = 10;	//declaración variable global
int funcion1(int); //prototipo función 1
int funcion2(int); //prototipo función 2
int A[] = {1, 2, 3, 4};

using namespace std;

int main()
{
	int a = 2, b = 3; //declaración valor local
	funcion1(a);	  // llamado a la función 1
	funcion2(b);	  // llamado a la función 2
	return 0;
}

int funcion1(int x)
{
	int c; //valor local función 1
	c = x + x;
	return c;
}

int funcion2(int y)
{
	int d; //valor local función 2
	d = y * y;
	return d;
}