#include <iostream>
#include <bitset>

int main() 
{
	using namespace std;

	//		//8비트 크기의 아이템 리스트들의 검사
	//unsigned char items_flag = 0;

	//const unsigned char opt0 = 1 << 0;
	//const unsigned char opt1 = 1 << 1;
	//const unsigned char opt2 = 1 << 2;
	//const unsigned char opt3 = 1 << 3;

	////초기상태
	//cout << bitset<8>(items_flag) << endl;

	////Item0 Obtain
	//items_flag |= opt0;
	//cout << "item0 Obtain : "<<bitset<8>(items_flag) << endl;

	////Item 1, 2 Obtain
	//items_flag |= (opt1 | opt2);
	//cout << "item1, 2 Obtain : " << bitset<8>(items_flag) << endl;

	////Has item3 ?
	//if (items_flag&opt3) cout << "Has Item3" << endl;
	//else cout << "Not have Item3" << endl;

	////Have item1, item2?
	//if ((items_flag & opt1) && (items_flag & opt2))
	//	cout << "item1, item2" << endl;

	//cout << "초기 상태 : "<<bitset<8>(items_flag) << endl;
	////3번을 가지고 있지 않으면서  0번을 가지고 있을때
	//if (!(items_flag & opt3) && (items_flag & opt0))
	//	items_flag ^= (opt3 | opt0);

	//cout << bitset<8>(items_flag) << endl;

		//Bit Mask
	//수가 한번에 들어왔을때 임의의 비트만큼 쪼개고 싶었다.

	const unsigned int R_mask = 0xFF0000;
	const unsigned int G_mask = 0x00FF00;
	const unsigned int B_mask = 0x0000FF;

	unsigned int px_color = 0xDA'A5'20;
	cout << bitset<4>(px_color>>28) <<" "<< bitset<4>(px_color>>24)<<" "
		<< bitset<4>(px_color>>20) << " " << bitset<4>(px_color>>16) << " "
		<< bitset<4>(px_color>>12) << " " << bitset<4>(px_color>>8) << " "
		<< bitset<4>(px_color>>4) << " " << bitset<4>(px_color)
		<< endl<<endl;

		//Mask를 이용해서 컬러 값 추출

	//Blue 값을 B_mask를 이용해서 추출
	unsigned char blue = px_color & B_mask;
	cout << "Blue : " << bitset<8>(blue)<<" "<< int(blue) << endl;

	//Green 값을 G_mask를 이용해서 추출
	unsigned char green = (px_color & G_mask) >> 8;
	cout << "Green : " << bitset<8>(green) << " " << int(green) << endl;

	//Red 값을 R_mask를 이용해서 추출
	unsigned char red = (px_color & R_mask) >> 16;
	cout << "Red : " << bitset<8>(red) << " " << int(red) << endl;

	return 0;
}