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

	/*				// 2. 이중 포인터 alloc & dealloc (new int*[], delete[])
	const int row = 3, col = 5;
	const int arr[row][col] = { 
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15}
	};
	int **matrix = new int*[row];	//2중 포인터(Matrix) 객체 선언 및 인스턴스화

	for (int r = 0; r < row; r++) {
		matrix[r] = new int[col];	//행 단위의 객체 인스턴스화
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

					//3. 일차원 포인터로 이중 포인터인 것 처럼 사용하는 방법.
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
			//r번째 row의(Col) 두번째(c) 값.
		}
	}

	cout << "[2] : ";
	for (int r = 0; r < row; r++) {
		for (int c = 0; c < col; c++) {
			cout << matrix[r * col + c] << " ";

		}
		cout << endl;
	}

	// 이차원 배열을 1차원 배열처럼 쓰고 싶어서 다음과 같이 인덱싱(Indexing)을 한다.
	// 하드웨어 가속을 받기 위해 이 같은 것 외의 더 복잡한 인덱싱을 사용하기도 함.

	delete[] matrix;		//Vector 사용으로 프로그래머의 불편함을 보완할 수 있다.
	
	return 0;
}