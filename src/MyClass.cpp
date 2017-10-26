//MyClass.cpp
#include "MyClass.h"

MyClass::MyClass()
{
	output_str = new OurString();
}
	
MyClass::~MyClass()
{
	delete output_str;
}
	
void MyClass::sayHello()
{
	output_str->setString("Hello World");
}
	
int MyClass::addSomeStuff(int a, int b)
{
	return a + b;
}

OurString MyClass::getOutputString()
{
	return output_str;
}
		

	
