#include "Base.h"
#include "Factory.h"
#include <iostream>

using namespace std;

#define SAFE_DELETE(x) { if(x) delete (x) ; (x) = NULL;}

int main()
{
	Factory * addFactory = new AddFactory();
	if( !addFactory ) return 1;

	Operation * addOper = addFactory->createOperation();	
	if( !addOper )	return 1;

	addOper->setRightValue(3);
	addOper->setLeftValue(4);

	std::cout<<addOper->getResult()<<std::endl;
	
	SAFE_DELETE(addFactory);
	SAFE_DELETE(addOper);	
	return 1;
}
