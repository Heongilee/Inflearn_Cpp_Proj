#include <iostream>
#include <string>

//			//Pra1.
//struct Person 
//{
//	double height;
//	float weight;
//	int age;
//	std::string name;
//
//	void print()
//	{
//		std::cout << height << " " << weight << " " << age << " " << name << std::endl;
//		return;
//	}
//};
//
//struct Family
//{
//	Person me, mom, dad, sister;
//};
//
//Person getMe()
//{
//	Person me{ 2.0, 100.0, 20, "Jack Jack" };
//
//	return me;
//} 
//
//
//int main() 
//{
//	using namespace std;
//
//	Person me;
//	/*	���ŷӴ�.
//	me.age = 24;
//	me.name = "Heongi Lee";
//	me.height = 1.79;	//meter
//	*/
//
//	/* Uniform Initialization�� �̿��� ��� */
//	me = { 1.79, 70.5, 24, "Heongi Lee" };
//
//	me.print();
//	Person mom;
//	Person dad;
//	Person sister;
//
//
//	return 0;
//}

			//Pra2.
struct Employee	//2+4+8 = 14byte
{
	short id;		// 2byte
	int age;		// 4byte
	double wage;	// 8byte
};
// ����� ����� ���������		----> 16byte
// <-short> <-int--> <--double------>

struct _my_st_a 
{
	char str[10];
	char cnt[4];
};

struct _my_st_b
{
	char str[10];
	int cnt;		//4byte�������� �޸𸮰� ���ĵȴ�.
};
/*	<----------------str �޸�---------------------><--cnt �޸�-->
	[	|	|	|	|	|	|	|	|	|	|	|	][	|	|	|	]
										   <-padding->
					Total : 14byte(X) -> 16byte
*/

struct _my_st_c
{
	char str[10];
	short cnt;
};
/*	<----------------str �޸�--------------------->cnt�޸�
	[	|	|	|	|	|	|	|	|	|	|	|	][	|	]
*/		//It's Normal!

struct _my_st_d
{
	char str[10];
	double cnt;
};
/*	<----------------------------str �޸�---------------------><----------cnt �޸�---------->
[	|	|	|	|	|	|	|	|	|	|	|	|	|	|	|	][	|	|	|	|	|	|	|	]
										<----6byte Padding ----->
								Total : 18byte(X) -> 24byte
*/
int main() 
{
	using namespace std;

				//Pra1.
	Employee emp1;

	cout << sizeof(Employee) << endl;
	
	/*			//Pra2. �� ����ü ���� sizeof�� ��� �ɱ�? �ּҴ�??
	_my_st_a obj1 = { "Heongi", "20" };
	cout << "sizeof : " << sizeof(_my_st_a) << "And Address : " <<&obj1.str<< endl;		// 14, 0 (�ּҴ� 0�̶�� ����.)
	cout << &obj1.str << " " << &obj1.cnt << endl;

	_my_st_b obj2 = {};
	cout << "sizeof : " << sizeof(_my_st_b) << "And Address : " << &obj2.str << endl;		// 16, 0 (�ּҴ� 0�̶�� ����.)
	*/

	return 0;
}