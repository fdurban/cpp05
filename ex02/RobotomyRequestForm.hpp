#include "Bureaucrat.hpp"
#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	private:
		std::string target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm&);
		RobotomyRequestForm&	operator=(const RobotomyRequestForm&);
		void	execute(Bureaucrat const& executor) const;
		~RobotomyRequestForm();
};
