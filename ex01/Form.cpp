#include "Form.hpp"

Form::Form(): name("default_form_name"), formSigned(false), grade_required_to_sign(150), grade_required_to_exec(150)
{}

Form::Form(const std::string name, int grade_required_to_sign, int grade_required_to_exec): name(name), formSigned(false), grade_required_to_sign(grade_required_to_sign), grade_required_to_exec(grade_required_to_exec)
{
	int	gradesigned = getSignedGrade();
	int	grade_exec = getExecGrade();

	if(gradesigned > 150 || grade_exec > 150)
	{
		throw	(Form::GradeTooLowException());
	}
	else if(gradesigned < 1 || grade_exec < 1 )
	{
		throw	(Form::GradeTooHighException());
	}
}

Form::Form(const Form& src): name(src.name), formSigned(src.formSigned), grade_required_to_sign(src.grade_required_to_sign), grade_required_to_exec(src.grade_required_to_exec)
{
	*this = src;
}

Form&	Form::operator=(const	Form& other)
{
	if(this == &other)
		return *this;
	return *this;
}

Form::~Form(){}

void	Form::beSigned(Bureaucrat  &Bureaucrat)
{
	if (this->getSignedGrade() >= Bureaucrat.getGrade())
	{
		if(this->formSigned == false)
		{
			this->formSigned = true;
			std::cout<<"Form signed successfully!!!"<<std::endl;
		}
		else
		{
			std::cout<<"Form couldn´t be signed because form is already signed"<<std::endl;
		}
	}
	else
	{
		std::cout<<"Sorry. Couldn't sign grade of Bureaucrat: "<<Bureaucrat.getName()<<std::endl;
		throw	Form::GradeTooLowException();
	}
}

int	Form::getSignedGrade()  const
{
	return this->grade_required_to_sign;
}

int	Form::getExecGrade() const
{
	return this->grade_required_to_exec;
}

const	char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too high");
}

const	char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

