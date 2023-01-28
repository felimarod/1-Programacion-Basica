#include <iostream>
using namespace std;
class Rectangulo
{
  private:
	int base;
	int altura;

  public:
	Rectangulo(int, int);
	void datos();
	void perimetro();
	void area();
};

Rectangulo ::Rectangulo(int _base, int _altura)
{
	base = _base;
	altura = _altura;
}

void Rectangulo ::datos()
{
	//cout << "Base: "<< base <<"cm\nAltura: "<< altura << "cm"<< endl;
}

void Rectangulo ::perimetro()
{
	cout << "El perimetro del rectangulo es " << 2 * (base + altura) << "cm" << endl;
}

void Rectangulo ::area()
{
	cout << "El area del rectangulo es " << base * altura << "cm²" << endl;
}
int main()
{
	Rectangulo P1(5, 4);
	Rectangulo P2(3, 2);
	Rectangulo P3(6, 8);

	P1.datos();
	P1.perimetro();

	cout << endl;

	P2.datos();
	P2.area();

	cout << endl;

	P3.datos();
	P3.perimetro();
	P3.area();

	return 0;
}