#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "string"
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		 const	std::string name;
		 int	grade;
	public:
		 Bureaucrat();
		 Bureaucrat(const std::string name, int grade);
		 Bureaucrat(const Bureaucrat &other);
		 Bureaucrat&	operator=(const Bureaucrat &other);
		 ~Bureaucrat();
		 class GradeTooHighException: public std::exception
		 {
			 public:
				 const char* what() const throw();
		 };
		 class GradeTooLowException: public std::exception
		 {
			 public:
				 const char* what() const throw();
		 };
		 const std::string	getName() const;
		 int	getGrade() const;
		 void	setGrade(int grade);
		 void	incrementGrade();
		 void	decrementGrade();
		void	signForm(Form &);
};
	std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);
#endif
