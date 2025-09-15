
#include "AForm.hpp"

AForm::AForm() : name("Default"), sign(false), gradeSig(0), gradeExe(0) {}

AForm::AForm(std::string newName, int newGradeSig, int newGradeExe) :
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

AForm::AForm(const AForm &copy) :
	name(copy.name), sign(copy.sign), gradeSig(copy.gradeSig), gradeExe(copy.gradeExe){}

AForm	&AForm::operator=(const AForm &copy){
	sign = copy.getSign();
	return (*this);
}

AForm::~AForm(){}

// UTILS
std::string	AForm::getName(void)const{
	return(name);
}

bool		AForm::getSign(void)const{
	return(sign);
}

int			AForm::getGradeSig(void)const{
	return(gradeSig);
}

int			AForm::getGradeExe(void)const{
	return(gradeExe);
}

std::ostream	&operator<<(std::ostream &out, const AForm &form){
	if (form.getGradeSig() == 0)
		out << "Uninitialized form.";
	else
		out << "Form " << form.getName() << " needs at least a grade " << form.getGradeSig()
			<< " to be signed and a grade " << form.getGradeExe() << " to be executed.";
	return (out);
}

// EXECUTION
void	AForm::beSigned(const Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() > gradeSig)
		throw GradeTooLowException();
	sign = true;
}

// EXCEPTIONS
const char	*AForm::GradeTooHighException::what() const throw(){
	return ("Form grade too high.");
}

const char *AForm::GradeTooLowException::what() const throw(){
	return ("Form grade too low.");
}
