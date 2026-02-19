/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:14:55 by fernando          #+#    #+#             */
/*   Updated: 2026/02/18 20:51:48 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include "./Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		bool	formSigned;
		const int grade_required_to_sign;
		const int grade_required_to_exec;
	public:
		AForm();
		AForm(const std::string name, int grade_required_to_sign, int grade_required_to_exec);
		AForm(const AForm& src);
		AForm&	operator=(const AForm &other);
		~AForm();
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
		class FormNotSignedException: public std::exception
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
		virtual void	execute(Bureaucrat const & executor) const = 0;
};
	std::ostream&	operator<<(std::ostream& os, const AForm &f);
#endif
