#include <bits/stdc++.h>
using namespace std;

int main() {
	//ax2 + bx + c = 0,calculate the root of this equation
	double a, b, c;
	cin >> a >> b >> c;
	if (a == 0) {
		//this code is aimed at solve equation of (a != 0),so you can also output "Invalid input"
		if (b != 0) {
			cout << "this equation has only one root,it is " << (-c) / b;
		}
		if (b == 0 && c != 0) {
			cout << "this equation has no root";
		}
		if (b == 0 && c == 0) {
			cout << "this equation is always correct";
		}
		return 0;
	}
	double delta = pow(b, 2) - 4 * a * c;
	if (delta < 0) {
		cout << "this equation has no root";
	} else if (delta == 0) {
		cout << "this equation has only one root,it is " << (-b) / (2 * a);
	} else if (delta > 0) {
		delta = sqrt(delta);
		cout << "this equation has two roots,one is " << (-b + delta) / (2 * a);
		cout << " the other one is " << (-b - delta) / (2 * a);
	}
	return 0;
}
