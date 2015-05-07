#ifndef FACTORY_H_
#define FACTORY_H_

#include "Base.h"

class Factory
{
		public:
				virtual Operation * createOperation() = 0;
			
				virtual ~Factory() {}
};

class AddFactory : public Factory
{
		public:
				Operation * createOperation()
				{
						return new AddOperation(); 
				}
				
				~AddFactory(){}
};

class SubFactory : public Factory
{
		public:
				Operation * createOperation()
		{
				return new SubOperation(); 
		}
		
		~SubFactory(){} 
};

#endif
