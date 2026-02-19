#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>


RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyCreationForm", 72, 45), target("default_target")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyCreationForm", 72, 45), target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) : AForm(src), target(src.target)
{
	*this = src;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
	if(this == &src)
		return *this;
	this->target = src.target;
	return *this;
}


RobotomyRequestForm::~RobotomyRequestForm()
{}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if(executor.getGrade() >= this->getExecGrade())
	{
		throw	Bureaucrat::GradeTooLowException();
	}
	else if(!(this->getIfSigned()))
	{
		throw	AForm::FormNotSignedException();
	}
	else
	{
		std::cout<<"**drilling noisesbrrrrrrrr**"<<std::endl;
		std::srand(std::time(0));

		if(std::rand() % 2 == 0)
		{
			std::cout<<this->target<<"has been robotomized successfully"<<std::endl;
		}
		else
		{
			std::cout<<"Robotomy failed on "<<this->target<<std::endl;
		}
	}
}
