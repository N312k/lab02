#include <iostream>

using namespace std;

int
main()
{
<<<<<< < HEAD
	string name; // Переменная для хранения имени
	cin >> name; // Запрос ввода
	cout << "hello, world" << name << "!" << endl; // Вывод приветствия
}
=======
	string name;
	cin >> name;
	cout << "hello, world" << name << "!" << endl;
}
>>>>>>> ddce129 (Apply clang-format with Mozilla code style)
