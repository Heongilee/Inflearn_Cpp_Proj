#include <iostream>

using namespace std;

int main() 
{
	int *ptr = nullptr;
	int **ptrptr = nullptr;
	
	int val = 5;

	ptr = &val;
	ptrptr = &ptr;

	cout << *ptr << " " << (uintptr_t)ptr << " " << (uintptr_t)&ptr << " " << (uintptr_t)ptrptr << " " << (uintptr_t)&ptrptr << " "<< **ptrptr << endl;

	int ***ppptr;
	int ****pppptr;
	int *****ppppptr;

	int ************************************pppppppppppppppppppppppppppppppppppptr;
	//...




	return 0;
}