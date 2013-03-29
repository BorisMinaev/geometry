#pragma	 once

#include <cmath>

double mysqrt(const double x) {
	return x < 0 ? -1 : sqrt(x);
}