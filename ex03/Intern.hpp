#include "AForm.hpp"
#

class Intern
{
	private:
		AForm*	createShrubberyCreationForm(const std::string &target);
		AForm*	createRobotomyRequestForm(const std::string &target);
		AForm*	createPresidentialPardonForm(const std::string &target);
	public:
		Intern();
		Intern(const Intern& src);
		Intern&	operator=(const Intern& src);
		~Intern();
		AForm*	makeForm(const std::string& formName,const  std::string& formTarget);
};
