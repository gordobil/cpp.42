
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
	private:
		const std::string	name;
		unsigned int		grade;

	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat			&operator=(const Bureaucrat &copy);
		~Bureaucrat();

		//UTILS
		std::string			getName(void)const;
		unsigned int		getGrade(void)const;

		//CHANGE GRADES
		void				incrementGrade(unsigned int value);
		void				decrementGrade(unsigned int value);

		//EXEPTIONS
		void				gradeTooHighExeption();
		void				gradeTooLowExeption();
};

#endif
