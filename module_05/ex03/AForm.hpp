
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
		std::string			target;

	public:
		AForm();
		AForm(std::string newName, int newGradeSig, int newGradeExe, std::string newTarget);
		AForm(const AForm &copy);
		AForm	&operator=(const AForm &copy);
		virtual ~AForm() = 0;
	
		//UTILS
		std::string			getName(void)const;
		bool				getSign(void)const;
		int					getGradeSig(void)const;
		int					getGradeExe(void)const;
		std::string			getTarget(void)const;

		//EXECUTION
		void				beSigned(const class Bureaucrat &bureaucrat);
		void				execute(Bureaucrat const &executor)const;
		virtual void		beExecuted(void)const = 0;

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

		class FormNotSignedException : public std::exception
		{
			public:
				const char	*what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, const AForm &form);

#endif
