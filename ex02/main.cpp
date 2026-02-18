/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 16:05:43 by fernando          #+#    #+#             */
/*   Updated: 2026/02/18 13:59:32 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try
	{
		Bureaucrat	bob("Bob", 138);
		ShrubberyCreationForm	shrubbery("home");
		std::cout<<bob<<std::endl;
		bob.signForm(shrubbery);
		bob.executeForm(shrubbery);
	}
	catch (const std::exception &e)
	{
		std::cerr<<"Exception caught: "<<e.what()<<std::endl;
	}

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
}
