/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:14:55 by fernando          #+#    #+#             */
/*   Updated: 2026/02/19 15:14:15 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include "./Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool	formSigned;
		const int grade_required_to_sign;
		const int grade_required_to_exec;
	public:
		Form();
		Form(const std::string name, int grade_required_to_sign, int grade_required_to_exec);
		Form(const Form& src);
		Form&	operator=(const Form &other);
		~Form();
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
		const std::string getName() const;
		int	getGrade() const ;
		int	getSignedGrade() const;
		int	getExecGrade() const;
		void	setGrade(int grade);
		void	beSigned(Bureaucrat& bureaucrat);
		bool	getIfSigned() const;
};
	std::ostream&	operator<<(std::ostream& os, const Form &f);
#endif
