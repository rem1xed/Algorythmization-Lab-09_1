#include "functions.h"
#include "nsVar.h"
#include <cmath>

	double funcTay::S(const double x, const double eps, int& n, double s)
	{
		n = 0;
		nsVar::a = (x - 1.0) / x;
		s = nsVar::a;
		do {
			n++;
			nsVar::a = A(x, n, nsVar::a);
			s += nsVar::a;
		} while (abs(nsVar::a) >= eps);
		return s;
	}
	double funcTay::A(const double x, const int n, double a)
	{
		nsVar::R = (((n * 1.0) * (x - 1)) / (x * ((n * 1.0) + 1)));
		a *= nsVar::R;
		return a;
	}
