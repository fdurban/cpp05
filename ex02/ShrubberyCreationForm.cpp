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
		std::ofstream outfile(this->target+"_shrubbery");
		if(!outfile.isopen())
		{
			std::cerr<<"Could not create file"<<std::endl;
			return ;
		}
		outfile<<
		 outfile<<"                                            .__ ._       \_.          ";
outfile<<"                                    _, _.  '  \/   \.-  /            ";
outfile<<"                                       \/     .-_`   // |/     \,      ";
outfile<<"                      .-""""-.          \.   '   \`. ||  \.-'  /       ";
outfile<<"                     F        Y        .-.`-(   _/\ V/ \\//,-' >-'   ._,";
outfile<<"                    F          Y   .__/   `. \.   ' J   ) ./  / __._/  ";
outfile<<"                   J         \, I    '   _/ \  \  | |  / /  .'-'.-' `._,";
outfile<<"            (       L   \_.--.| \_.      ' .___ `\: | / .--'.-'"     \ ";
outfile<<"          \ '\    .  L   /    \\/        ._/`-.`  \ .'.' .'---./__   ' ";
outfile<<"     \__  '\ ) \._/   `-.__. ` \\_. '   .---.  \     /  /  ,   `  `    ";
outfile<<"   --'  \\  ): // \,            `-.`__.'     `- \  /   / _/-.---.__.- . ";
outfile<<"      _.-`.'/ /'\_, ._     >--.-""'____.--"`_     '   /.'..' \   \   _/`";
outfile<<"  _ .---._\ \'/ '__./__.-..  / .-|(    x_.-'___  |   :' /    _..---_' \";
outfile<<"  .:' /`\ `. `..'.--'\      /.' /`-`._  `-,'   ` '   I '_.--'__--..___.--._.-";
outfile<<"      `  `. `\/'/  _.   _.-'      _.____./ .-.--""-. .-"    ' _..-.---'   \";
outfile<<"   -._ .--.\ / /-./     /   .---'-//.___. .-'       \__ .--.  `    `.     '`-";
outfile<<"  ,--'/.-. ^.   .-.--.  ` _/    _//     ./   _..   .'  `.    \ \    |_.";
outfile<<"     /' | >.   ' | \._.-       '    _..'  `.' . `.       )    | |\  `          ";
outfile<<"   ./ \ \'  ) c| /  \     \_..  .--'    ,\ \_/`  :    )  (`-. `.|`\\            ";
outfile<<"    \'  / ,-.  | ` ./`  ._/ `\\'.--.,-((  `.`.__ |   _/   \    |)  `--._/`     ";
outfile<<" ______'\   |  < __________  //'  //  _)   )/-._`.  (,-')  )  / \_.    /\. _____";
outfile<<" a:f        |  |        .__./    //  '\  |//    `.\ '\ (  (  <`   ._  '";
outfile<<"            >  |      _.  /   ..-\ _    _/ \_.  \ `\    \_ `---.-'__   ";
outfile<<"         . /  `-   _.'        /   `   _/|       J  /`     `-,,-----.`-.";
outfile<<"             '  .:'          '`      '          < `   f  I //        `�\_,";
outfile<<"               '                         \.     J        I/\_.        ./";
outfile<<"          __/                            `:     I  .:    K  `          `";
outfile<<"          \/ )                            `,   J         L             ";
outfile<<"           )_(_                             .  F  .-'    J             ";
outfile<<"          /    `.                           .  I  (.   . I _.-.._      ";
outfile<<"    '    <'    \ )                     _.---.J/      :'   L -'         ";
outfile<<"  .:.     \. _.->/                        _.-'_.)     ` `-.`---.,_.    ";
outfile<<" :<        (    \                    .--""   .F' J) `.`L.__`-.___      ";
outfile<<" .:        |-'\_.|                          Y ..Z     ))   `--'  `-    ";
outfile<<" .         ) | > :                            . '    :'                ";
outfile<<"           / ) L_J                            .x,.";
outfile<<"           L_J .,                             .:<.,  ";
outfile<<"         .'`   `                               :J.,` ";
outfile<<"                                            . ;.+K,:.";
outfile<<"                                                .,L+.,";
	outfile.close();
	}
}
