
#include <iostream>
#include "math.h"
using namespace std;
bool isEqual(double a, double b) {
	return 0;
}


int main() {
	setlocale(LC_ALL, "Russian");
	double a, b, x1, x2, dx, y, x, min = numeric_limits<double>::infinity(), max = -numeric_limits<double>::infinity();
	cout << "Введите a, b, начало промежутка, конец промежутка, dx" << endl;
	cin >> a >> b >> x1 >> x2 >> dx;
	if (!dx) {
		cout << "Шаг не может быть нулём" << endl;
		return 0;
	}
	if (x1 > x2 && dx > 0 || x2 > x1 && dx < 0) {
		cout << "С выбранным шагом нельзя прийти из начала в конец" << endl;
		return 0;
	}
	for (x = x1; x < x2 || isEqual(x, x2); x += dx) {
		if (x >= x1 && x < a || isEqual(x, a)) {
			y = (log(x)+ sin(x));
		}
		else if (x > a && x < b) {
			y = (log(x) + cos(x));
		}
		else {
			y = tan(x);
		}
		if (y > max)max = y;
		if (y < min)min = y;
		cout << "При х = " << x << ", y = " << y << endl;
	}
	cout << "Минимальное значение - " << min << ", а максимальное - " << max << endl;
}