#ifndef ABSTRACT_TEMP_H_
#define ABSTRACT_TEMP_H_
#include <iostream>
/**
 *  模板类 *
 */

class Templete
{
		public:
			
				void FirstQuest()
				{
						std::cout<< "firstQuest:"<<answer()<<std::endl;
				}

				void SecondQuest()
				{
						std::cout<< "secondQuest:"<<answer2()<<std::endl;
						answer2();
				}

				virtual int answer() = 0;
				virtual int answer2() = 0;
};

#endif
