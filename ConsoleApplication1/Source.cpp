#include <iostream>
#include <clocale>

using namespace std;
/**
* @brief ��/ 1 ���������� �� ������ ���������� 
* �������� ��� �� C++
* return ������ 0
*/

int main() {
	setlocale(LC_ALL, "RU");
	// ������ C2144 ��������������  ������ : ����� "int" ��������� ";"
	cout << "All is okay!������������!" << endl;
	// �������������� �4189 var : ��������� ���������� ���������������� ,�� �� ������������
	int var = 42;
	// �������������� �4101 unusing : ���������������� ��������� ����������
	int unusing;
}