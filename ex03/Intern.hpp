


class Intern
{
	private:
		AForm*	createShrubberyRequestForm(std::string target);
		AForm*	createRobotoMyRequestForm(std::string target);
		AForm*	createPresidentialPardonForm(std::string target);
		AForm*	createShrubberyRequestForm(std::string target);
	public:
		Intern();
		Intern(const Intern& src);
		Intern&	operator=(const Intern& src);
		~Intern();
		AForm*	makeForm(std::string FormName, std::string FormTarget);
};
