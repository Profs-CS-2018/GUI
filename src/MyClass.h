//MyClass.h

class MyClass
{
public:
	MyClass();
	
	~MyClass();
	
	void sayHello();
	
	int addSomeStuff(int a, int b);
	
	OurString getOutputString();

	
		
private:
    OurString *output_str;
	
}