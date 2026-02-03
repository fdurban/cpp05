#include "AForm.hpp"


class ShrubberyCreationForm : public AForm
{
	private:
		std::string	target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShruberryCreationForm&);
		ShrubberyCreationForm&	operator=(const ShruberryCreationForm&);
		~ShrubberyCreationForm();
}
