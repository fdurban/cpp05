/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 16:05:43 by fernando          #+#    #+#             */
/*   Updated: 2026/02/02 17:12:36 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat b1("Fer", 150);
		Bureaucrat b2("Cris", 1);
		Bureaucrat b3("Mati", 75);

		std::cout<<b1<<std::endl;
		std::cout<<b2<<std::endl;
		std::cout<<b3<<std::endl;

		Form	form1("Form1", 149, 149);
		Form	form2("Form2", 149, 149);
		Form	form3("Form3", 149, 149);

		b1.signForm(form1);
		b2.signForm(form2);
		b3.signForm(form3);
	}
	catch (const std::exception &e)
	{
		std::cerr<<"Exception caught: "<<e.what()<<std::endl;
	}
}
