#ifndef FACTORY_H_
#define FACTORY_H_

#include "Product.h"

class AbstractFactory
{
		public:
			virtual AbstractOperAdd	* createOperAdd() = 0;
			virtual AbstractOperSub	* createOperSub() = 0;
			
			virtual ~AbstractFactory() {}
};

class FactoryA : public AbstractFactory
{
		public:
			
			AbstractOperAdd	* createOperAdd()
			{
					return new OperAddA(); 
			}
	
			AbstractOperSub	* createOperSub()
			{
					return new OperSubA(); 
			}
			
			virtual ~FactoryA() {}
};

class FactoryB : public AbstractFactory
{
		public:
			
			AbstractOperAdd	* createOperAdd()
			{
					return new OperAddB(); 
			}
	
			AbstractOperSub	* createOperSub()
			{
					return new OperSubB(); 
			}
			
			virtual ~FactoryB() {}
};

#endif
