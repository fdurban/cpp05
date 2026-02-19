/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 16:05:43 by fernando          #+#    #+#             */
/*   Updated: 2026/02/19 16:43:05 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout<<"----------"<<std::endl;
	try
	{
		Form form1("Form1", 50, 25);
		std::cout<<form1<<std::endl;
		Form form2("Form2", 1, 1);
		std::cout<<form2<<std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr<<"Exception caught: "<<e.what()<<std::endl;
	}
	std::cout<<"----------"<<std::endl;
	try
	{
		Form form3("Form3", 0, 25);
		std::cout<<form3<<std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr<<"Exception caught: "<<e.what()<<std::endl;
	}
	std::cout<<"----------"<<std::endl;
	try
	{
		Form form4("Form4", 151, 25);
		std::cout<<form4<<std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr<<"Exception caught: "<<e.what()<<std::endl;
	}
	std::cout<<"----------"<<std::endl;
	try
	{
		Bureaucrat	fer("Fer", 30);
		Form		form5("Form5", 50, 25);
		std::cout<<fer<<std::endl;
		std::cout<<form5<<std::endl;
		fer.signForm(form5);
		std::cout<<form5<<std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr<<"Exception caught: "<<e.what()<<std::endl;
	}
	std::cout<<"----------"<<std::endl;
	try
	{
		Bureaucrat	jaime("Jaime", 51);
		Form		form6("Form6", 50, 25);
		std::cout<<jaime<<std::endl;
		std::cout<<form6<<std::endl;
		jaime.signForm(form6);
		std::cout<<form6<<std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr<<"Exception caught: "<<e.what()<<std::endl;
	}
	std::cout<<"----------"<<std::endl;
	try
	{
		Bureaucrat	fer("Fer", 1);
		Form		form5("Form5", 5, 25);
		std::cout<<fer<<std::endl;
		std::cout<<form5<<std::endl;
		fer.signForm(form5);
		std::cout<<form5<<std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr<<"Exception caught: "<<e.what()<<std::endl;
	}
}
