#include "Form.hpp"

Form::Form()
{}

Form::Form(const std::string name, bool formSigned, int grade): name(name), formSigned(false), grade_required_to_sign(150), grade_required_to_exec(150)
{
	int	gradesigned = getGradeSigned();
	int	grade_exec = getGradeExec();

	if(gradeSigned > 150 || grade_exec > 150)
	{
		throw	(Form::GradeTooHighException());
	}
	else if(gradeSigned < 1 || grade_exec < 1 )
	{
		throw (Form::GradeTooLowException());
	}
}

Form::Form(const Form& src): name(src.name), formSigned(src.formSigned), grade_required_to_sign(src.grade_required_to_sign), grade_required_to_exec(src.grade_required_to_exec)
{
	*this = src;
}

Form&	Form::operator=(const	Form% other)
{
	if(this == &src)
		return *this;
	return *this;
}
