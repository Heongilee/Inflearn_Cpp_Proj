#include <iostream>
#include <string>
int main() 
{
	using namespace std;

	/*			//Pra1. Syntax
	const char my_strs[] = "Hello, World";	//�⺻ �ڷ���
	const string My_hello = "Hello, World";	//����� ���� �ڷ���
	const string My_hell{ "Hello, World!" };
	string my_ID = "123";

	cout << "Hello, World" << endl;	//string
	cout << My_hello << endl;
	*/

				//Pra2. 
	cout << "Your age ? : ";
	string age;
	cin >> age;
	//std::getline(std::cin, age);
	
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	cout << "Your name ? : ";
	string name;
	//cin >> name;	//���� �� ��� ���� ���� �߻�
	std::getline(std::cin, name);	//���� ������ �д´�

	cout << name << " " << age << endl;
	

	/*			//Pra3.
	string a("Hello, ");
	string b("World");
	string hw(a+b);		//Append : ���ڿ� ���ϱ�

	//Append ����� string���̺귯�� �ȿ� ���ǵǾ� �ֱ�
	//������ ��� �����ϴ�.

	hw += "I'm Good";

	cout << hw << endl;
	*/

	/*			//Pra4.
	string a("Hello, World");

	cout << a.length() << endl;
	//���ڿ� ���� (NULL character ������ ����.)
	*/

	return 0;
}