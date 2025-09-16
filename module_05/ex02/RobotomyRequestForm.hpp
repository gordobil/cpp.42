
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string newTarget);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &copy);
		~RobotomyRequestForm();

		//FUNCTIONS
		void					beExecuted(void)const;
};

std::ostream	&operator<<(std::ostream &out, const RobotomyRequestForm &copy);

#endif
