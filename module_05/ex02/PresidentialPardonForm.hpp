
#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string newTarget);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &copy);
		~PresidentialPardonForm();

		//FUNCTIONS
		void					beExecuted(void)const;
};

std::ostream	&operator<<(std::ostream &out, const PresidentialPardonForm &copy);

#endif
