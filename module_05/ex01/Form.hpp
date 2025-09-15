#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	name;
		bool				sign;
		const int			gradeSig;
		const int			gradeExe;

	public:
		Form();
		Form(std::string newName, int newGradeSig, int newGradeExe);
		Form(const Form &copy);
		Form	&operator=(const Form &copy);
		~Form();
	
		//UTILS
		std::string			getName(void)const;
		bool				getSign(void)const;
		int					getGradeSig(void)const;
		int					getGradeExe(void)const;

		//EXECUTION
		void				beSigned(const class Bureaucrat &bureaucrat);

		//EXCEPTIONS
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, const Form &form);

#endif
