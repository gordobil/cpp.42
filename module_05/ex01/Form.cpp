
#include "Form.hpp"

Form::Form() : name("Default"), sign(false), gradeSig(0), gradeExe(0) {}

Form::Form(std::string newName, int newGradeSig, int newGradeExe) :
	name(newName), sign(false), gradeSig(newGradeSig), gradeExe(newGradeExe){

	if (newGradeSig < 1)
		throw GradeTooHighException();
	else if (newGradeSig > 150)
		throw GradeTooLowException();
	if (newGradeExe < 1)
		throw GradeTooHighException();
	else if (newGradeExe > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &copy) :
	name(copy.name), sign(copy.sign), gradeSig(copy.gradeSig), gradeExe(copy.gradeExe){}

Form	&Form::operator=(const Form &copy){
	sign = copy.getSign();
	return (*this);
}

Form::~Form(){}

// UTILS
std::string	Form::getName(void)const{
	return(name);
}

bool		Form::getSign(void)const{
	return(sign);
}

int			Form::getGradeSig(void)const{
	return(gradeSig);
}

int			Form::getGradeExe(void)const{
	return(gradeExe);
}

std::ostream	&operator<<(std::ostream &out, const Form &form){
	if (form.getGradeSig() == 0)
		out << "Uninitialized form.";
	else
		out << "Form " << form.getName() << " needs at least a grade " << form.getGradeSig()
			<< " to be signed and a grade " << form.getGradeExe() << " to be executed.";
	return (out);
}

// EXECUTION
void	Form::beSigned(const Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() > gradeSig)
		throw GradeTooLowException();
	sign = true;
}

// EXCEPTIONS
const char	*Form::GradeTooHighException::what() const throw(){
	return ("Form grade too high.");
}

const char *Form::GradeTooLowException::what() const throw(){
	return ("Form grade too low.");
}
