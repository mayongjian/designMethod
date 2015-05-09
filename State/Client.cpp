#include "State.h"

int main()
{
		State * state = new ConcreteStateA();
		if( !state ) return 1;

		Context * context = new Context(state);
		if( !context ) return 1;
	
		context->request();
		context->request();
		context->request();
		context->request();
		
		return 1;
}
