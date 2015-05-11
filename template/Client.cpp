#include "ConcreteClass.h"

int main()
{
		Templete * studentA = new ConcreteClassA();
		if( !studentA )	return 1;

		studentA-> FirstQuest();	
		studentA-> SecondQuest();

		Templete * studentB = new ConcreteClassB();
		if( !studentB )	return 1;

		studentB-> FirstQuest();	
		studentB-> SecondQuest();
		
		return 1;

}
