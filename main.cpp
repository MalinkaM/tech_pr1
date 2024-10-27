#include <iostream>
#include "keeper.h"
#include "books.h"
#include "novel.h"
#include "poet.h"
#include "fantastic.h"
#include "vybor.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	Keeper <Novel> novel;
	Keeper <Poet> poet;
	Keeper <Fantastic> fantastic;
	int button;
	bool flag = true;
	while (flag) {
		system("cls");
		cout << "Меню: " << endl << endl;
		cout << "1 - Писатель романтист" << endl;
		cout << "2 - Поэт" << endl;
		cout << "3 - Писатель фантаст" << endl;
		cout << "0 - Завершение работы программы" << endl << endl;
		cout << "Выберите пункт: ";
		cin >> button;
		if (cin.fail()) {
			button = -1;
			cin.clear();
			cin.ignore(10000, '\n');
		}
		switch (button) {
		case 1:
			vybor_deystviya(novel, "novel.txt");
			break;
		case 2:
			vybor_deystviya(poet, "poet.txt");
			break;
		case 3:
			vybor_deystviya(fantastic, "fantastic.txt");
			break;
		case 0:
			flag = false;
			cout << "\nЗавершение работы" << endl;
			break;
		default:
			cout << endl << "Введите другое число!" << endl
				<< endl;
			system("pause");
			break;
		}
	}
	return 0;
}
