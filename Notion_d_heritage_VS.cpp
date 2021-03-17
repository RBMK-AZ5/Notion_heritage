#include <iostream>
using namespace std;
class point
{
private:
	int x;
	int y;
public:
	void ini(int=0, int=0);
	void affiche();
};
class cfpoint :public point
{
private:
	int color;
public:
	void inicouleur(int,int,int);
	void affichecouleur();
};
void point::ini(int abs, int ord)
{
	x = abs;
	y = ord;
}
void point::affiche()
{
	cout << "Valeur de x est de y : " << x << "  " << y << endl;
}
void cfpoint::inicouleur(int abs, int ord , int c)
{
	ini(abs, ord);
	color = c;
}
void cfpoint::affichecouleur()
{
	affiche();
	cout << "Valeur de color : " << color << endl;
}
int main()
{
	cfpoint p;
	p.inicouleur(8, 9, 6);
	p.affichecouleur();
	point m;
	m.ini(0, 6);
	m.affiche();
}