#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), target("default_target")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137), target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src)
{
	*this = src;
}

ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
	if(this == &src)
		return *this;
	this->target = src.target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}


void	ShrubberyCreationForm::execute(Bureaucrat const& executor)
{
	if(executor.getGrade() >= this->getSignedGrade())
	{
		throw	Bureaucrat::GradeTooLowException();
	}
	else if(this->getIfSigned())
	{
		throw	AForm::FormNotSignedException();
	}
	else
	{
		std::ofstream outfile(this->target+"_shrubbery")
		outfile<<
		                                            .__ ._       \_.          
std::cout<<                                     _, _.  '  \/   \.-  /            
                                      \/     .-_`   // |/     \,      
                     .-""""-.          \.   '   \`. ||  \.-'  /       
                    F        Y        .-.`-(   _/\ V/ \\//,-' >-'   ._,
                   F          Y   .__/   `. \.   ' J   ) ./  / __._/  
                  J         \, I    '   _/ \  \  | |  / /  .'-'.-' `._,
           (       L   \_.--.| \_.      ' .___ `\: | / .--'.-'"     \ 
         \ '\    .  L   /    \\/        ._/`-.`  \ .'.' .'---./__   ' 
    \__  '\ ) \._/   `-.__. ` \\_. '   .---.  \     /  /  ,   `  `    
  --'  \\  ): // \,            `-.`__.'     `- \  /   / _/-.---.__.- . 
     _.-`.'/ /'\_, ._     >--.-""'____.--"`_     '   /.'..' \   \   _/`
 _ .---._\ \'/ '__./__.-..  / .-|(    x_.-'___  |   :' /    _..---_' \
 .:' /`\ `. `..'.--'\      /.' /`-`._  `-,'   ` '   I '_.--'__--..___.--._.-
     `  `. `\/'/  _.   _.-'      _.____./ .-.--""-. .-"    ' _..-.---'   \
  -._ .--.\ / /-./     /   .---'-//.___. .-'       \__ .--.  `    `.     '`-
 ,--'/.-. ^.   .-.--.  ` _/    _//     ./   _..   .'  `.    \ \    |_.
    /' | >.   ' | \._.-       '    _..'  `.' . `.       )    | |\  `          
  ./ \ \'  ) c| /  \     \_..  .--'    ,\ \_/`  :    )  (`-. `.|`\\            
   \'  / ,-.  | ` ./`  ._/ `\\'.--.,-((  `.`.__ |   _/   \    |)  `--._/`     
______'\   |  < __________  //'  //  _)   )/-._`.  (,-')  )  / \_.    /\. _____
a:f        |  |        .__./    //  '\  |//    `.\ '\ (  (  <`   ._  '
           >  |      _.  /   ..-\ _    _/ \_.  \ `\    \_ `---.-'__   
        . /  `-   _.'        /   `   _/|       J  /`     `-,,-----.`-.
            '  .:'          '`      '          < `   f  I //        `�\_,
              '                         \.     J        I/\_.        ./
         __/                            `:     I  .:    K  `          `
         \/ )                            `,   J         L             
          )_(_                             .  F  .-'    J             
         /    `.                           .  I  (.   . I _.-.._      
   '    <'    \ )                     _.---.J/      :'   L -'         
 .:.     \. _.->/                        _.-'_.)     ` `-.`---.,_.    
:<        (    \                    .--""   .F' J) `.`L.__`-.___      
.:        |-'\_.|                          Y ..Z     ))   `--'  `-    
.         ) | > :                            . '    :'                
          / ) L_J                            .x,.
          L_J .,                             .:<.,  
        .'`   `                               :J.,` 
                                           . ;.+K,:.
                                               .,L+.,
	}
}
