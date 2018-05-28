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
public:
	void setvalue(int fe, int in);
	void display();
	CFeet add(CFeet & objf);
	CFeet operator+(CFeet & objf);
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
int main()
{
	CFeet a, b, c;
	a.setvalue(10, 11);
	b.setvalue(6, 9);
	c = a + b;
	c.display();
    return 0;
}

