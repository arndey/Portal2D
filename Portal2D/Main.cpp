#include "Menu.h"
#include "Gameplay.h"
#include "Instruments.h"
#include "Map.h"

using namespace std;

int main()
{
	/*game::StackOfTypes* next = nullptr;

	char numberOne = '1';
	char numberTwo = '2';

	game::push(numberOne, next);
	game::push(numberTwo, next);

	cout << game::pop(next) << endl;
	cout << game::pop(next) << endl;*/

	menu::functionCaller(menu::menu());

	//game::Map** map = game::createMap("Lvl_1.txt");

	//game::drawFrame(map);

	//game::performAnAction(map);
	
	system("pause");

	return 0;
}

/*
��������! (��� �� ����� ��������� ������� - ���� ��� � ���� ������)

1)	�����, �������������� ����, ������ ���� ����������� �������� � ��������� ��������, ������� � ��������.
Line, SavingsAccount

2)	����� ���������� ������ ���� �������� � ��������� ��������, ������� � �������.
line, savingsAccount

3)	����������� ��������� (������� �������� ������������) ������ ���� �������� � ������� �������� � ������ �������������� � �������� �����������.
MAX_ITERATIONS, COLOR_RED, PI

4)	�������� ������� � ������� ������ ���� ���������, ���� ����������� � ��������� �������� � ���������� � �������.
getName(), computeTotalWidth()

5)	�������� ����������� ��� ������� ���������� � ������ ��������.
model::analyzer, io::iomanager, common::math::geometry            !!!!!!!!!!!(��� ��������� ������ ������ ��� ���� ��������� ������� ���������� � ������������ ��� (namespace) � ������)

6)	������� �������� ����� ����� � �������� ����� ��������� ������.
template<class T>

7)	������������ � ���������� � ������ ������ ������������ � ������ ��������.
exportHtmlSource(); // ������: exportHTMLSource();

8)	������������� (� ����� ������ - �����������) ���������� ������� ������ �� �� ���, ��� � � �� ����.
void setTopic(Topic* topic)      // ������: void setTopic(Topic* value)
// ������: void setTopic(Topic* aTopic)
// ������: void setTopic(Topic* t)
9)	��� ����� ������� ���������� ��-���������.
fileName;   // �� �������������: imyaFayla

10)	����������, ������� ������� ������� ���������, ������� �������� �������� �������, ������� ��������� ������� ��������� � ���������.

11)	����� �������� �� ����������� ����, ������� �������� �������� �������� �������� � ������ �������.  (�������� ��������� �� �����������)
line.getLength();   // �� �������������: line.getLineLength();

12)	����� find ����� ���� ������������ � ��������, �������������� �����-���� �����.
findMinElement();

13)	������� n ������� ������������ ��� ������������� ����� ��������.
nPoints, nLines

14) ������� No ������� ������������ ��� ����������� ������ ��������.
tableNo, employeeNo

15)	������� �������� ���������� � ������.
computeAverage();   // ������: compAvg();

16)	������� �������� ��������������� ���������� ����������.
Line* line; // �� �������������: Line* pLine;
// �� �������������: Line* linePtr;

17)  ������ ������ ������� (����������) ���������� �����, ���������� ���������.
bool isError; // ������: isNoError
bool isFound; // ������: isNotFound

18)	��������� � ������������� ����� ����� (����� �� �����) ������� � ����� ��� ����.
enum Color {
COLOR_RED,
COLOR_GREEN,
COLOR_BLUE
};
*/
