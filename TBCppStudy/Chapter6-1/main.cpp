#include <iostream>
using namespace std;

struct Rectangle
{
	int width;
	int height;
};

int main() 
{

	/*					// Pra1.
	int student;	//1 var
	int students[5];	//5 int

	student = 100;
	students[0] = 90;
	students[1] = 80;
	students[2] = 70;
	students[3] = 60;
	students[4] = 0;
	//students[5] = 30;	//ERROR!! ���� 5���� �������� ������ ���� 6������ ���� �� ��.

	cout << students[0] << endl;
	cout << students[1] << endl;
	cout << students[2] << endl;
	cout << students[3] << endl;
	cout << students[4] << endl;
	*/

	/*					//Pra2. 
	Rectangle rect_arr[10];

	cout << sizeof(rect_arr) << endl;
	*/

						//Pra3. ���̵�� ����
	enum Stu_list		//Array�� ������ �־��ֱ� ���ϴ�.
	{
		JackJack,
		Lane, 
		Michael,
		Heongi,
		Stu_Num,
	};
	int my_arr[Stu_Num];

	my_arr[JackJack] = 90;
		//...

	return 0;
}