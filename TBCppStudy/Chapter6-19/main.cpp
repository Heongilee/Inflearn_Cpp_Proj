#include <iostream>

using namespace std;

int main() 
{
	/*				// 1.
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
	*/

	/*				// 2. ���� ������ alloc & dealloc (new int*[], delete[])
	const int row = 3, col = 5;
	const int arr[row][col] = { 
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15}
	};
	int **matrix = new int*[row];	//2�� ������(Matrix) ��ü ���� �� �ν��Ͻ�ȭ

	for (int r = 0; r < row; r++) {
		matrix[r] = new int[col];	//�� ������ ��ü �ν��Ͻ�ȭ
	}

	for (int r = 0; r < row; r++) {
		for (int c = 0; c < col; c++) {
			matrix[r][c] = arr[r][c];
			cout << matrix[r][c] << " ";
		}
		cout << endl;
	}
	 
	//dealloc
	for (int r = 0; r < row; r++)
		delete[] matrix[r];

	delete[] matrix;
	*/

					//3. ������ �����ͷ� ���� �������� �� ó�� ����ϴ� ���.
	const int row = 3, col = 5;
	const int arr[row][col] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15}
	};
	int *matrix = new int[row * col];

	for (int r = 0; r < row; r++) {
		for (int c = 0; c < col; c++) {
			matrix[c + col * r] = arr[r][c];
			//r��° row��(Col) �ι�°(c) ��.
		}
	}

	cout << "[2] : ";
	for (int r = 0; r < row; r++) {
		for (int c = 0; c < col; c++) {
			cout << matrix[r * col + c] << " ";

		}
		cout << endl;
	}

	// ������ �迭�� 1���� �迭ó�� ���� �; ������ ���� �ε���(Indexing)�� �Ѵ�.
	// �ϵ���� ������ �ޱ� ���� �� ���� �� ���� �� ������ �ε����� ����ϱ⵵ ��.

	delete[] matrix;		//Vector ������� ���α׷����� �������� ������ �� �ִ�.
	
	return 0;
}