#include "State.h"

void ConcreteStateA ::  handle(Context * context)
{
		if( !context ) return;
		
		context->setState( new ConcreteStateB());						
		std::cout << "A->B"<<std::endl;
}	

void ConcreteStateB :: handle(Context * context)
{
		if( !context ) return;
		
		context->setState( new ConcreteStateA());						
		std::cout << "B->A"<<std::endl;
};


