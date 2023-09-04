#include <iostream>
#include <clocale>

using namespace std;
/**
* @brief Лр/ 1 Знакомство со средой разработки 
* Исходный код на C++
* return Всегда 0
*/

int main() {
	setlocale(LC_ALL, "RU");
	// Ошибка C2144 синтаксическая  ошибка : перед "int" требуется ";"
	cout << "All is okay!здравствуйте!" << endl;
	// Предупреждение С4189 var : локальная переменная инициализирована ,но не использована
	int var = 42;
	// Предупреждение С4101 unusing : неиспользованная локальная переменная
	int unusing;
}