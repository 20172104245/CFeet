// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
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
	cout << feet << "英尺" << inch << "英寸" << endl;
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
	cout << "且等于" << meter << "米" << endl;
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

