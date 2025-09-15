
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string newName, int newGrade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat			&operator=(const Bureaucrat &copy);
		~Bureaucrat();

		//UTILS
		std::string			getName(void)const;
		int					getGrade(void)const;

		//EXECUTION
		void				incrementGrade(int value);
		void				decrementGrade(int value);
		void				signForm(class AForm &form);

		//EXCEPTIONS
		class GradeTooLowException: public std::exception
		{
			public:
				const char	*what() const throw();
		};

		class GradeTooHighException: public std::exception
		{
			public:
				const char	*what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif
