#include "AForm.hpp"


class ShrubberyCreationForm : public AForm
{
	private:
		std::string	target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm&);
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm&);
		void	execute(Bureaucrat const& executor) const;
		~ShrubberyCreationForm();
};
