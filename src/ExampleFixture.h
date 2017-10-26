// ExampleFixture.h

#include "TestHarness.h"
#include "MyClass.h"


struct ExampleFixture
{
	MyClass *comp;


	ExampleFixture()
	{
		comp = new MyClass();
	}
	
	~ExampleFixture()
	{
		delete comp;
	}
	
    	
	
}

