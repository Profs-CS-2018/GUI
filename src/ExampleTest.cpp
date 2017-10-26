//ExampleTest.cpp

#include "TestHarness.h"
#include "ExampleFixture.h"

// TestGrouping can used for multiple TESTs, but TestName MUST be unique
/** EXAMPLE TEST
TEST( TestGrouping, TestName )
{
	
	ExampleFixture f;

    //Test Logic


}
*/

TEST( MyClassTests, sayHello_Test )
{
	
	ExampleFixture f;
    f.comp->sayHello();

	
}

TEST( MyClassTests, getOutputString_Test )
{
	
	ExampleFixture f;
    OurString output = f.comp->getOutputString();

}

TEST( MyClassTests, addSomeStuff_Test )
{
	
	ExampleFixture f;

    int test_a = 0;
	int test_b = 0;
	int test_sum = f.comp->addSomeStuff(test_a, test_b);
	
    CHECK_EQUAL(0, test_sum);
 
}