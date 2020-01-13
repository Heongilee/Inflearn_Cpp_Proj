#include <iostream>

using namespace std;
/*
9 11990908
7 11990912 +4
5 11990916 +4
3 11990920 +4
1 11990924 +4
*/
int main() 
{
	//				//Pra1.
	//short val = 7;  short *ptr = &val;

	//cout << uintptr_t(ptr) << endl;
	//cout << uintptr_t(ptr + 1) << endl;
	//cout << uintptr_t(ptr + 2) << endl;
	//cout << uintptr_t(ptr - 1) << endl;
	//return 0;

	//				//Pra2.
	//int arr[] = {9, 7, 5, 3, 1};
	//int *ptr = arr;
	//for (int i = 0;i < 5;i++)
	//	cout << *(arr + i) << " "<< (uintptr_t)&arr[i] <<endl;

					//Pra3.
	char name[] = "Jack jack";
	char *ptr = name;

	//while ~break, NULL은 제외하고 Jack jack을 출력하기

	int i = 0;
	while (1)
	{
		if (*(ptr + i) == NULL) break;
		else 
		{
			cout << *(ptr + i);
			i++;
		}
	}

}