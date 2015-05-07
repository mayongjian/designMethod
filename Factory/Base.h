#ifndef BASE_H_
#define BASE_H_
class Operation
{
		private:
				int left_value_;
				int right_value_;
		
		public:
				int getLeftValue() { return left_value_; }
				int getRightValue() { return right_value_; }
				void setRightValue(int leftValue) { left_value_ = leftValue; }
				void setLeftValue(int rightValue) { right_value_ = rightValue; }
		
				virtual int getResult() = 0;
				virtual ~Operation(){}
};

class AddOperation : public Operation
{
		public:
				int getResult()
				{
					return getLeftValue() + getRightValue() ;
				}

				~AddOperation(){}
};

class SubOperation : public Operation
{
		public:
				int getResult()
				{
					return getLeftValue() - getRightValue() ;
				}

				~SubOperation(){}
};

#endif
