#ifndef	STATE_H_
#define STATE_H_

#include <iostream>

class Context;

class State
{
		public:
				virtual void handle(Context * context) = 0;
};

class ConcreteStateA : public State
{
		public:
				void handle(Context * context);
};

class ConcreteStateB : public State
{
		public:
				void handle(Context * context);
};

class Context
{
		private:
				State * state_;
		
		public:
				Context(State * state): state_(state)
				{ }
				
				State * getState() { return state_; }
				State * setState( State * state )	{ state_ = state; }

				void request()
				{
						state_->handle(this);
				}
};


#endif
