#include "AbstractBase.h"
#include <iostream>

using namespace std;

class Factory
{
	public:
		static Operation * createOperation(char oper)
		{
				Operation * operation = NULL;
				
				switch (oper)
				{
						case '+':
							operation = new OperationAdd(); 
							break;
						case '-':
							operation =  new OperationSub();
							break;
				}
				return operation;
		}
};

