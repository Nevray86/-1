#include<iostream>
using namespace std;




int main() {
	setlocale(LC_ALL, "ru");
	
	//������ 2

	cout << "������ 2\n\n";
	cout << "\t \"Lorem ipsum\" dolor sit amet, \n";
	cout << "\t consectetur adipiscing elit, \n";
	cout << "\t sed do eiusmod tempor incididunt \n";
	cout << "\t ut labore et dolore magna aliqua. \n";
	cout << "\t   /\\/\\Lorem ipsum original/\\/\\ \n";
	cout << "\n";

	//������ 3
	cout << "������ 3\n";
	const double Pi = 3.14;
	double R;
	double H;
	double V;
	cout << " ������� ������ ��������:\n";
	cin >> R;
	cout << " ������� ������ ��������\n";
	cin >> H;
	V = Pi *  (R * R) * H;

	cout << " ����� �������� = " << V << "\n\n";

	// ������ 4
	cout << " ������ 3\n";
	const int km = 1000;
	int distance;
	int rath;
	cout << "������� ���������� � ������: \n";
	cin >> distance;
	cout << "������� ���������� ���� � ������: \n";
	cin >> rath;
	int remainder_km = (distance - rath) / km;
	int  remainder_m = (distance - rath) % km;
	cout << "��� �������� �������� " << remainder_km << "�� " << remainder_m << "�. \n";


	// ������ 5
	cout << " ������ 5\n";
	double muk_kg;
	double day_gr;
	int day_end;
	cout << " ������� ����� ����� � �����������:";
	cin >> muk_kg;
	cout << " ������� ������ ���� � ���� � �������:";
	cin >> day_gr;
	day_end = (muk_kg * 1000) / day_gr;
	cout << " ���� ���������� �����: " << day_end << " ����!\n\n";

	return 0;
}
