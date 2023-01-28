#include <iostream>
using namespace std;
class Tiempo
{
  private:
	int hh;
	int mm;
	int ss;

  public:
	Tiempo(int, int, int);
	Tiempo(int, int);
	Tiempo(int);
	void mostrar();
};
Tiempo ::Tiempo(int _hh, int _mm, int _ss)
{
	ss = _ss%60;
	mm = (_mm+_ss/60)%60;
	hh= _hh+(_mm+_ss/60)/60;
}
Tiempo ::Tiempo(int _mm, int _ss)
{
	ss = _ss%60;
	mm = (_mm+_ss/60)%60;
	hh= (_mm+_ss/60)/60;
}
Tiempo ::Tiempo(int _ss){
	ss = int (_ss%60);
	mm= int ((_ss/60)%60);
	hh = int ((_ss/60)/60);
}
void Tiempo ::mostrar()
{
	cout << hh << ":" << mm << ":" << ss << endl;
}
int main()
{
	Tiempo P1(6, 346, 345);
	Tiempo P2(245, 367);
	Tiempo P3(232425);
    printf("hello world");
	P1.mostrar();
	P2.mostrar();
	P3.mostrar();
	return 0;
}
