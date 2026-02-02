/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fdurban-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 19:57:11 by fernando          #+#    #+#             */
/*   Updated: 2026/02/02 14:06:07 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("default_name"), grade(150)
{
	std::cout<<"Default constructor called"<<std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name)
{
	this->setGrade(grade);
}

Bureaucrat::~Bureaucrat()
{
	std::cout<<"Bureaucrat destructor called"<<std::endl;
}

void	Bureaucrat::setGrade(int grade)
{
	if(grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade = grade;
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

const	char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const	char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const	std::string	Bureaucrat::getName() const
{
	return (this->name);
}

void	Bureaucrat::decrementGrade()
{
	this->setGrade(this->grade + 1);
}
void	Bureaucrat::incrementGrade()
{
	this->setGrade(this->grade - 1);
}

void	Bureaucrat::signForm(Form &form)
{
	form.beSigned(*this);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
	os<<b.getName()<<", bureaucrat grade "<<b.getGrade()<<".";
	return (os);
}

