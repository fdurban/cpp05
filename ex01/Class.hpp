/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:14:55 by fernando          #+#    #+#             */
/*   Updated: 2025/12/29 17:04:57 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string name;
		bool	formSigned;
		const int grade_sign;
		const int grade_exec;
	public:
		Form();
		Form(const std::string name, bool formSigned, int grade);
		Form&	operator=(const Bureaucrat &other);
		~Form();
		class GradeTooHighException(): public std::exception
		{
			public:
				const char* what() const throw();
		};

		class GradeTooHighException(): public std::exception
		{
			public:
				const char* what() const throw();
		};
		const std::string getName() const;
		int	getGrade() const ;
		int	getGradeSign();
		int	getGradeExec();
		void	setGrade(int grade);
};
	std::ostream&	operator<<(std::ostream& os, const Bureaucrat&b, const Form &f);
