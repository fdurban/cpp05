/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:14:55 by fernando          #+#    #+#             */
/*   Updated: 2026/01/30 16:10:31 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string name;
		bool	formSigned;
		const int grade_required_to_sign;
		const int grade_required_to_exec;
	public:
		Form();
		Form(const std::string name, bool formSigned, int grade);
		Form(const Form& src);
		Form&	operator=(const Bureaucrat &other);
		~Form();
		class GradeTooHighException(): public std::exception
		{
			public:
				const char* what() const throw();
		};

		class GradeTooLowException(): public std::exception
		{
			public:
				const char* what() const throw();
		};
		const std::string getName() const;
		int	getGrade() const ;
		int	getGradeSign();
		int	getGradeExec();
		void	setGrade(int grade);
		void	beSigned(Bureaucrat& bureaucrat)
};
	std::ostream&	operator<<(std::ostream& os, const Bureaucrat&b, const Form &f);
