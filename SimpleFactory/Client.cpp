#include <iostream>
#include "AbstractBase.h"
#include "Factory.h"

using namespace std;

int main()
{
	Operation * op = Factory::createOperation('+');
	if( !op ) return 1;
	
	op->setNumA(1);
	op->setNumB(2);

	std::cout<<op->getResult()<<std::endl;
	
	return 1;
}
