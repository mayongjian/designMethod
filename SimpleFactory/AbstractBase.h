#ifndef  ABSTRACT_BASE_H_
#define ABSTRACT_BASE_H_
class  Operation
{
		private:
				int numberA_;
				int numberB_;

		public:
		  Operation()
			{

			}
			
			int getNumA() { return numberA_; }
			int getNumB() { return numberB_; }
			int setNumA(int numberA)	{ numberA_ = numberA; }
			int setNumB(int numberB)	{ numberB_ = numberB; }	

			virtual int getResult()=0;
};

class OperationAdd : public Operation
{
	public:
			OperationAdd() {}

			int getResult()
			{
					return  getNumA() +  getNumB();
			}
};


class OperationSub : public Operation
{
	public:
			OperationSub() {}

			int getResult()
			{
					return getNumA() - getNumB();
			}
};
#endif
