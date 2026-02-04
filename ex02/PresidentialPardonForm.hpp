#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	private:
		std::string target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm&);
		PresidentialPardonForm&	operator=(const PresidentialPardonForm&);
		void	execute(Bureaucrat const& executor) const;
		~PresidentialPardonForm();
};
