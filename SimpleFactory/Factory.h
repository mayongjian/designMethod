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
						case '-':
							operation =  new OperationSub();
				}
				return operation;
		}
}
