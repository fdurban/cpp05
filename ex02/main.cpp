/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 16:05:43 by fernando          #+#    #+#             */
/*   Updated: 2026/02/18 23:49:25 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat	bob("Bob", 22);
		ShrubberyCreationForm	shrubbery("home");
		std::cout<<bob<<std::endl;
		bob.signForm(shrubbery);
		bob.executeForm(shrubbery);
	}
	catch (const std::exception &e)
	{
		std::cerr<<"Exception caught: "<<e.what()<<std::endl;
	}
	std::cout<<"----------------------------------------------"<<std::endl;
	try
	{
		Bureaucrat	anna("Anna", 21);
		RobotomyRequestForm	robotomy("home");
		std::cout<<anna<<std::endl;
		anna.signForm(robotomy);
		anna.executeForm(robotomy);
	}
	catch (const std::exception &e)
	{
		std::cerr<<"Exception caught: "<<e.what()<<std::endl;
	}

	std::cout<<"----------------------------------------------"<<std::endl;
	try
  	{
		Bureaucrat president("President", 1);
		PresidentialPardonForm pardon("Arthur");
		std::cout << president << std::endl;
		std::cout << pardon << std::endl;
		president.signForm(pardon);
		president.executeForm(pardon);
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout<<"-----------------Execution without signing-----------------------------"<<std::endl;
	try
        {
                Bureaucrat      bob("Bob", 22);
                ShrubberyCreationForm   shrubbery("home");
                std::cout<<bob<<std::endl;
                bob.executeForm(shrubbery);
        }
        catch (const std::exception &e)
        {
                std::cerr<<"Exception caught: "<<e.what()<<std::endl;
        }

	std::cout<<"--------------Execution with insuficient grade--------------------------------"<<std::endl;
        try
	{
		Bureaucrat lowGrade("lowGrade", 100);
		Bureaucrat highGrade("highGrade", 5);
		PresidentialPardonForm pardon("James");
		highGrade.signForm(pardon);
		lowGrade.executeForm(pardon);

	}
        catch (const std::exception &e)
        {
                std::cerr<<"Exception caught: "<<e.what()<<std::endl;
        }
	std::cout<<"----------------------------------------------"<<std::endl;
        try
	{
		Bureaucrat veryLow("lowGrade", 150);
		PresidentialPardonForm pardon("James");
		veryLow.signForm(pardon);
	}
        catch (const std::exception &e)
        {
                std::cerr<<"Exception caught: "<<e.what()<<std::endl;
        }
}
