#include <iostream>
#include <iostream>
using namespace std;
int quarter(double x, double y) {
	if (x > 0 && y > 0) return 1;
	if (x > 0 && y < 0) return 2;
	if (x < 0 && y < 0) return 3;
	if (x==0) return 4;
}
int main(){
	/*Proc23. Описать функцию Quarter(x, y) целого типа, определяющую номер
координатной четверти, в которой находится точка с ненулевыми вещественными координатами (x, y). С помощью этой функции найти номера
координатных четвертей для трех точек с данными ненулевыми координатами.*/
	double x, y;
	cin >> x >> y;
	for (int i = 1; i <= 3; i++) {
	}
	cout << quarter(x, y) << endl;


}