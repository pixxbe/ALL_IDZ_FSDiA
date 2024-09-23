// ИДЗ1_ФСиД.cpp
#include "ИДЗ1.h"

int main()
{
	setlocale(LC_ALL, "RUS");
	Node* List = nullptr;
	int n, value, CountCase1;
	cout << "ИДЗ номер 1 по ФСДиА" << endl;
	cout << "Чтобы начать программу введите номер пункта из меню ниже." << endl;
	while (true)
	{
		cout << "_________________________________________________________" << endl;
		cout << "МЕНЮ:" << endl;
		cout << "1 - Создать список / Добавить элементы в начало списока.|" << endl;
		cout << "2 - Удалить список.                                     |" << endl;
		cout << "3 - Добавить элемент в конец спискаю.                   |" << endl;
		cout << "4 - Удалить все элементы списка по заданному значинению.|" << endl;
		cout << "5 - НЕ ПОНЯЛ, ПОКА ЧТО НЕРЕАЛИЗОВАННО.                  |" << endl;
		cout << "6 - Поиск позиций заданного элемента по значению.       |" << endl;
		cout << "7 - Распечатать список.                                 |" << endl;
		cout << "8 - Создать второй список и найти их пересечение.       |" << endl;
		cout << "9 - ДОП ОПЕРАЦИЯ ПРИ СДАЧЕ.                             |" << endl;
		cout << "0 - Завершить программу.                                |" << endl;
		cout << "_________________________________________________________" << endl;
		cout << "Введите выбранный номер пункта: ";
		cin >> n;
		switch (n)
		{
		case 1:
			CountCase1 = 0;
			if (CountCase1 == 0)
			{
				PushUp(List);
				CountCase1 = 1;
				cout << "Список успешно создан." << endl;
				break;
			}
			else
			{
				PushUp(List);
				cout << "Элементы успешно добавлены." << endl;
				break;
			}


		case 2:
			DeleteAllList(List);
			cout << "Список успешно удален." << endl;
			break;

		case 3:
			cout << "Введите число, которое хотите добаивть: ";
			cin >> value;
			PushBack(List, value);
			cout << endl;
			break;

		case 4:
			cout << "Введите число, которое хотите удалить (удалятся все числа с заданным значением: ";
			cin >> value;
			DeleteElem(List, value);
			cout << endl;
			break;

		case 5:
			break;

		case 6:
			cout << "Введите элемент позиции, которого хотите найти:";
			cin >> value;
			SearchElem(List, value);
			cout << endl;
			break;

		case 7:
			PrintList(List);
			break;

		case 8:
			CrossingLists(List);
			break;

		case 9:
			break;

		case 0:
			cout << "Программа успешно завершина.";
			return 0;
		}
	}
}


