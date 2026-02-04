#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>


PresidentialPardonForm::PresidentialPardonForm(): AForm("RobotomyCreationForm", 25, 5), target("default_target")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("RobotomyCreationForm", 72, 45), target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src)
{
	*this = src;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& src)
{
	if(this == &src)
		return *this;
	this->target = src.target;
	return *this;
}


PresidentialPardonForm::~PresidentialPardonForm()
{}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	if(executor.getGrade() >= this->getSignedGrade())
	{
		throw	Bureaucrat::GradeTooLowException();
	}
	else if(!(this->getIfSigned()))
	{
		throw	AForm::FormNotSignedException();
	}
	else
	{
		std::cout<<this->target<<"has been pardoned by Zaphod BeebleBrox"<<std::endl;
	}
}
