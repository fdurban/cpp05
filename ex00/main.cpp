/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 16:05:43 by fernando          #+#    #+#             */
/*   Updated: 2026/02/18 13:26:50 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{

		Bureaucrat b1("Fer", 2);
		b1.decrementGrade();
		std::cout<<b1<<std::endl;
		std::cout<<"This function should not execute. First exception"<<std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException& error)
	{
		std::cerr<<"Caught exception: "<<error.what()<<std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& error)
	{
		std::cerr<<"Caught exception: "<<error.what()<<std::endl;
	}
	try
	{

		Bureaucrat b2("Cris", 2);
		b2.incrementGrade();
		std::cout<<b2<<std::endl;
		std::cout<<"This function should not execute. First exception"<<std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException& error)
	{
		std::cerr<<"Caught exception: "<<error.what()<<std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& error)
	{
		std::cerr<<"Caught exception: "<<error.what()<<std::endl;
	}
}
