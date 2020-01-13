#include <iostream>

using namespace std;
				//앞		뒤
void swap(int* A, int i, int j)
{
	int temp;
	temp = A[j];
	A[j] = A[i];
	A[i] = temp;

	return;
}

int main() 
{
	const int leng = 1;
	int arr[leng] = { 3, 7, 5, 2, 3, 1, 8 };
	int min;

	for (int i = 0;i < leng - 1;i++)
	{
		min = i;
		for (int j = i+1;j < leng - 1;j++)
		{
			min = (arr[j] < arr[min]) ? j : min;
		}

		if (i != min) swap(arr, i, min);

		for (int i = 0;i < leng - 1;i++)
			cout << arr[i] << " ";
		cout << endl;
	}

	return 0;
}



















//void swap(int *arr, int i, int j)
//{
//	using namespace std;
//	int temp;
//
//	temp = arr[i];
//	arr[i] = arr[j];
//	arr[j] = temp;
//	
//	return;
//}
//
//int main()
//{
//	using namespace std;
//
//						//선택 정렬 구현
//	const int length = 5;
//	int min_idx;
//	int My_arr[length] = { 6, 3, 4, 19, 0};
//
//	for (int i = 0;i < length-1;i++)
//	{
//		min_idx = i;
//		for (int j = i+1;j < length;j++)
//		{
//			min_idx = (My_arr[j] < My_arr[min_idx]) ? j : min_idx;
//		}
//
//		//swap!
//		//std::swap(My_arr[i], My_arr[min_idx]);
//		if(i != min_idx) swap(My_arr, i, min_idx);
//	}
//
//	for (int i = 0;i < length;i++)
//		cout << My_arr[i] << " "; cout << endl;
//
//	return 0;
//}