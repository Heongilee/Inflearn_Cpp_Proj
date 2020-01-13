#include <iostream>
#include <cstring>

using namespace std;

int main() 
{
	char src[] = "Copy this!";
	char dest[50];

	strcpy_s(dest, 11, src);

	if (!strcmp(src, dest))
	{
		cout << "¶È°°À½" << endl;
	}

	
	return 0;
}