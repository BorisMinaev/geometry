#include <iostream>
#include <cstdio>
#include <limits>

int main(int argc, char** argv) {
	double eps = std::numeric_limits<double>::epsilon();
	double x = 1;
	double y = 2;
	while (x != y) {
		printf("%.20f\n", y);
		y = (x + y) / 2.;	
	}
	printf("%.20f\n", eps);
	printf("%.20f\n", x + eps * 2 / 3);
	printf("%.20f\n", 1.0 / (1LL << 53));
	std::cout << "Hello, world!" << std::endl;
	return 0;
}