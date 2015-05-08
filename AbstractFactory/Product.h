#ifndef PRODUCT_H_
#define PRODUCT_H_

#include <iostream>

class AbstractOperAdd
{
		private:
				int left_value_;
				int right_value_;
		public:
				void setValue(int leftValue,int rightValue)
				{
						left_value_ = leftValue;
						right_value_ = rightValue;
				}
				
				int getLeftValue() { return left_value_ ;}
				int getRightValue() { return right_value_ ;}

				virtual int getResult() = 0;
				virtual ~AbstractOperAdd() {}
};

class AbstractOperSub
{
		private:
				int left_value_;
				int right_value_;
		public:
				void setValue(int leftValue,int rightValue)
				{
						left_value_ = leftValue;
						right_value_ = rightValue;
				}
				int getLeftValue() { return left_value_ ;}
				int getRightValue() { return right_value_ ;}


				virtual int getResult() = 0;
				virtual ~AbstractOperSub() {}
};

class OperAddA : public AbstractOperAdd
{
		public:
			int getResult()
			{
					return getLeftValue() + getRightValue();				
			}		
};

class OperAddB : public AbstractOperAdd
{
		public:
			int getResult()
			{
					return	getLeftValue() + getRightValue();				
			}	
};

class OperSubA : public AbstractOperSub
{
		public:
			int getResult()
			{
					return	getLeftValue() - getRightValue();				
			}	
};

class OperSubB : public AbstractOperSub
{
		public:
			int getResult()
			{
					return  getLeftValue() - getRightValue();				
			}	
};

#endif
