
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
	AForm("ShrubberyCreationForm", 145, 137, "Default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string newTarget) :
	AForm("ShrubberyCreationForm", 145, 137, newTarget) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) :
	AForm("ShrubberyCreationForm", 145, 137, copy.getTarget()) {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy){
	(void)copy;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

// FUNCTIONS
void	ShrubberyCreationForm::beExecuted(void)const{
	std::ofstream	outfile;

	outfile.open((getTarget() + "_shrubbery").c_str());
	outfile << "\n  .-'- -.\n (       )\n(  ,      )\n ( \'./  .'\n  '-| |-'\n    | |\n,,,,|.|,,,\n\n";
	outfile << "  .-'- -.\n (       )\n(  ,      )\n ( \'./  .'\n  '-| |-'\n    | |\n,,,,|.|,,,\n\n";
	outfile << "  .-'- -.\n (       )\n(  ,      )\n ( \'./  .'\n  '-| |-'\n    | |\n,,,,|.|,,,\n\n";
	outfile.close();
}

std::ostream	&operator<<(std::ostream &out, const ShrubberyCreationForm &copy){
	out << "Shrubbery creation form target [" << copy.getTarget() << "]";
	return (out);
}
