
#include "AForm.hpp"

AForm::AForm() :
	name("Default"), sign(false), gradeSig(0), gradeExe(0), target("Default") {}

AForm::AForm(std::string newName, int newGradeSig, int newGradeExe, std::string newTarget) :
	name(newName), sign(false), gradeSig(newGradeSig), gradeExe(newGradeExe), target(newTarget){

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
	name(copy.name), sign(copy.sign), gradeSig(copy.gradeSig), gradeExe(copy.gradeExe), target(copy.target){}

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

std::string	AForm::getTarget(void)const{
	return(target);
}

std::ostream	&operator<<(std::ostream &out, const AForm &form){
	if (form.getGradeSig() == 0)
		out << "Uninitialized form.";
	else
		out << "Form " << form.getName() << " with target " << form.getTarget()
			<< " needs at least a grade " << form.getGradeSig()
			<< " to be signed and a grade " << form.getGradeExe() << " to be executed.";
	return (out);
}

// EXECUTION
void	AForm::beSigned(const Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() > gradeSig)
		throw GradeTooLowException();
	sign = true;
}

void	AForm::execute(Bureaucrat const &executor)const{
	if (sign == false)
		throw FormNotSignedException();
	if (executor.getGrade() > gradeExe)
		throw GradeTooLowException();
	beExecuted();
}

// EXCEPTIONS
const char	*AForm::GradeTooHighException::what() const throw(){
	return ("Form grade too high.");
}

const char *AForm::GradeTooLowException::what() const throw(){
	return ("Form grade too low.");
}

const char *AForm::FormNotSignedException::what() const throw(){
	return ("Form not signed.");
}
