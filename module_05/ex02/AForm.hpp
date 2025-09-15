
#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class AForm
{
	private:
		const std::string	name;
		bool				sign;
		const int			gradeSig;
		const int			gradeExe;

	public:
		AForm();
		AForm(std::string newName, int newGradeSig, int newGradeExe);
		AForm(const AForm &copy);
		AForm	&operator=(const AForm &copy);
		~AForm();
	
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
				const char	*what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char	*what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, const AForm &form);

#endif
