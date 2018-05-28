// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
private:
	int feet;
	int inch;
	double meter;
public:
	void setvalue(int fe, int in);
	void display();
	CFeet add(CFeet & objf);
	CFeet operator+(CFeet & objf);
	void huan();
	void printf();
};
void CFeet::setvalue(int fe, int in)
{
	feet = fe + in / 12;
	inch = in % 12;
}
void CFeet::display()
{
	cout << feet << "Ӣ��" << inch << "Ӣ��" << endl;
}
CFeet CFeet::add(CFeet & objf)
{
	CFeet temp;
	temp.setvalue(feet + objf.feet, inch + objf.inch);
	return temp;
}
CFeet CFeet::operator+(CFeet & objf)
{
	CFeet temp;
	temp.setvalue(feet + objf.feet, inch + objf.inch);
	return temp;
}
void CFeet::huan()
{
	meter = 0.3048*feet + 0.0254*inch;
}
void CFeet::printf()
{
	cout << "�ҵ���" << meter << "��" << endl;
}
int main()
{
	CFeet a, b, c;
	a.setvalue(1, 1);
	b.setvalue(-2, 2);
	c = a + b;
	c.display();
	c.huan();
	c.printf();
    return 0;
}

