#include "AbstractBase.h"

class OperationAdd : Operation
{
	public:
			OperationAdd() {}

			int getResult()
			{
					return numberA_ + numberB_;
			}
};


class OperationSub : Operation
{
	public:
			OperationSub() {}

			int getResult()
			{
					return numberA_ - numberB_;
			}
};
