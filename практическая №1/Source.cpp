#include<iostream>
using namespace std;




int main() {
	setlocale(LC_ALL, "ru");
	
	//Задача 2

	cout << "Задача 2\n\n";
	cout << "\t \"Lorem ipsum\" dolor sit amet, \n";
	cout << "\t consectetur adipiscing elit, \n";
	cout << "\t sed do eiusmod tempor incididunt \n";
	cout << "\t ut labore et dolore magna aliqua. \n";
	cout << "\t   /\\/\\Lorem ipsum original/\\/\\ \n";
	cout << "\n";

	//Задача 3
	cout << "Задача 3\n";
	const double Pi = 3.14;
	double R;
	double H;
	double V;
	cout << " Введите радиус цилиндра:\n";
	cin >> R;
	cout << " Введите высоту цилиндра\n";
	cin >> H;
	V = Pi *  (R * R) * H;

	cout << " Обьем цилиндра = " << V << "\n\n";

	// Задача 4
	cout << " Задача 3\n";
	const int km = 1000;
	int distance;
	int rath;
	cout << "Введите расстояние в метрах: \n";
	cin >> distance;
	cout << "Введите пройденный путь в метрах: \n";
	cin >> rath;
	int remainder_km = (distance - rath) / km;
	int  remainder_m = (distance - rath) % km;
	cout << "Вам осталось проехать " << remainder_km << "км " << remainder_m << "м. \n";


	// Задача 5
	cout << " Задача 5\n";
	double muk_kg;
	double day_gr;
	int day_end;
	cout << " Введите массу мешка в килограммах:";
	cin >> muk_kg;
	cout << " Введите расход муки в день в граммах:";
	cin >> day_gr;
	day_end = (muk_kg * 1000) / day_gr;
	cout << " Мука закончится через: " << day_end << " Дней!\n\n";

	return 0;
}
