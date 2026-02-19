#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern& src)
{
	(void)src;
}

Intern&	Intern::operator=(const Intern& src)
{
	(void)src;
	return(*this);
};

Intern::~Intern()
{}

AForm*	Intern::createPresidentialPardonForm(const std::string &target)
{
	return new PresidentialPardonForm(target);
}

AForm*	Intern::createRobotomyRequestForm(const std::string &target)
{
	return new RobotomyRequestForm(target);
}

AForm*	Intern::createShrubberyCreationForm(const std::string &target)
{
	return new ShrubberyCreationForm(target);
}

AForm*	Intern::makeForm(const std::string &formName,const std::string &formTarget)
{
	std::string	namesArray[3] =
	{
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"
	};
	
	AForm	*(Intern::*formCreators[3])(const std::string &) ={
	&Intern::createShrubberyCreationForm,
	&Intern::createRobotomyRequestForm,
	&Intern::createPresidentialPardonForm};

	for(int i = 0; i < 3; i++)
	{
		if(namesArray[i] == formName)
		{
			std::cout<<"Intern creates "<<formName<<std::endl;
			return (this->*formCreators[i])(formTarget);
		}
	}
	std::cout<<"Form does not exist"<<std::endl;
	return NULL;
}
