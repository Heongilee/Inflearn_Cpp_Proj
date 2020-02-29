#pragma once
#include <iostream>

class Singleton 
{
private :
	//1. private �����ڷ� �ܺ��� �ν��Ͻ�ȭ�� ����.
	Singleton() {};

	//2. �̱��� Ŭ����
	static Singleton* instance_;
	
	//�ν��Ͻ��� �����Ǿ����� Ȯ���ϴ� �÷��� ����
	static bool instance_Flag;

	//��� ����
	int total;

public:
	//3. ��ü ������ ������ getInstance�θ� ���� ����.
	static Singleton* getInstance();

	//�Ҹ��ڷ� �÷��� ���� false�� �ٲ�.
	virtual ~Singleton();

	//total += value
	void addValue(int value);

	//total�� ��ȯ.
	int getTotalValue();
};