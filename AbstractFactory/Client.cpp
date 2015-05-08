#include "Factory.h"
#include "Product.h"
#include <iostream>

int main()
{
		AbstractFactory * factory = new FactoryA();
		if( !factory ) return 1;
		
		AbstractOperAdd * operAdd = factory->createOperAdd();
	 	if( !operAdd ) return 1;

		AbstractOperSub * operSub = factory->createOperSub();
	 	if( !operSub ) return 1;

		operAdd->setValue(0,2);
		operSub->setValue(3,3);

		std::cout<<operAdd->getResult()<<std::endl;
		std::cout<<operSub->getResult()<<std::endl;
		
		return 1;
}
