/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 16:05:43 by fernando          #+#    #+#             */
/*   Updated: 2026/02/19 14:38:12 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern intern;

	AForm	*form1;
	AForm	*form2;
	AForm	*form3;

	form1 = intern.makeForm("ShrubberyCreationForm", "target");
	if (form1)
	{
		std::cout<<"Form created: "<<form1->getName()<<std::endl;
		delete form1;
	}


	form2 = intern.makeForm("RobotomyRequestForm", "target");
	if (form2)
	{
		std::cout<<"Form created: "<<form2->getName()<<std::endl;
		delete form2;
	}


	form3 = intern.makeForm("PresidentialPardonForm", "target");
	if (form3)
	{
		std::cout<<"Form created: "<<form3->getName()<<std::endl;
		delete form3;
	}

	ivalidForm = intern.makeForm("vacation request", "target");
	if (ivalidForm)
	{
		std::cout<<"Form created: "<<form3->getName()<<std::endl;
		delete form3;
	}
}
