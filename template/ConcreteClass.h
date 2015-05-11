#ifndef CONCRETE_CLASS_H
#define CONCRETE_CLASS_H

#include "AbstractTemp.h"

class ConcreteClassA : public Templete
{
		public:
				int answer()
				{
						return 1;
				}

				int answer2()
				{
						return 2;
				}	
};

class ConcreteClassB : public Templete
{
		public:
				int answer()
				{
						return 2;
				}

				int answer2()
				{
						return 1;
				}	
};

#endif
