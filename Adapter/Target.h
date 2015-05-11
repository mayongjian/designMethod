#ifndef TARGET_H_
#define TARGET_H_

#include "Adaptee.h"

class Target 
{
		public:
				virtual void request() = 0;
};

class Adapt : public Target
{
		private:
			Adaptee * adaptee;	
		public:
				Adapt()
				{
						adaptee = new Adaptee();
				}

				void request()
				{
						if( adaptee )
						{
								adaptee->specificRequest();
						}
				}
};
#endif
