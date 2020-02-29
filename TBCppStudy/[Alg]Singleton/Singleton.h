#pragma once
#include <iostream>

class Singleton 
{
private :
	//1. private 생성자로 외부의 인스턴스화를 막음.
	Singleton() {};

	//2. 싱글톤 클래스
	static Singleton* instance_;
	
	//인스턴스가 생성되었는지 확인하는 플래그 변수
	static bool instance_Flag;

	//멤버 변수
	int total;

public:
	//3. 객체 생성은 오로지 getInstance로만 접근 가능.
	static Singleton* getInstance();

	//소멸자로 플래그 변수 false로 바꿈.
	virtual ~Singleton();

	//total += value
	void addValue(int value);

	//total값 반환.
	int getTotalValue();
};