#include <iostream>
#include <iomanip>
#include <cmath>
#include "nsVar.h"
#include "functions.h"
using namespace std;

//	xp = 1 
// xk = 8
// dx = 1
// eps = 0.001

int main()
{
	cout << "xp = "; cin >> nsVar::xp;
	cout << "xk = "; cin >> nsVar::xk;
	cout << "dx = "; cin >> nsVar::dx;
	cout << "eps = "; cin >> nsVar::eps;

	cout << fixed;
	cout << "-----------------------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "ln(x)" << " |"
		<< setw(10) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-----------------------------------------" << endl;
	nsVar::x = nsVar::xp;
	while (nsVar::x <= nsVar::xk)
	{
		nsVar::s = funcTay::S(nsVar::x, nsVar::eps, nsVar::n, nsVar::s);
		cout << "|" << setw(7) << setprecision(2) << nsVar::x << " |"
			<< setw(10) << setprecision(5) << log(nsVar::x) << " |"
			<< setw(10) << setprecision(5) << nsVar::s << " |"
			<< setw(5) << nsVar::n << " |"
			<< endl;
		nsVar::x += nsVar::dx;
	}
	cout << "-----------------------------------------" << endl;
	return 0;
}