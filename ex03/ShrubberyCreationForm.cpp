#include "ShrubberyCreationForm.hpp"
#include  <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), target("default_target")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137), target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src)
{
	*this = src;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
	if(this == &src)
		return *this;
	this->target = src.target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}


void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if(executor.getGrade() >= this->getSignedGrade())
	{
		throw	Bureaucrat::GradeTooLowException();
	}
	else if(!(this->getIfSigned()))
	{
		throw	AForm::FormNotSignedException();
	}
	else
	{
		std::cout<<"ENTRA"<<std::endl;
		std::ofstream outfile((this->target+"_shrubbery").c_str());
		if(!outfile.is_open())
		{
			std::cerr<<"Could not create file"<<std::endl;
			return ;
		}
		else
		{
			std::cout<<"File successfully created"<<std::endl;
		}
		outfile<<
		 outfile<<"                                            .__ ._       \\_.          "<<std::endl;
outfile<<"                                    _, _.  '  \\/   \\.-  /            "<<std::endl;
outfile<<"                                       \\/     .-_`   // |/     \\,      "<<std::endl;
outfile<<"                      .-""""-.          \\.   '   \\`. ||  \\.-'  /       "<<std::endl;
outfile<<"                     F        Y        .-.`-(   _/\\ V/ \\//,-' >-'   ._,"<<std::endl;
outfile<<"                    F          Y   .__/   `. \\.   ' J   ) ./  / __._/  "<<std::endl;
outfile<<"                   J         \\, I    '   _/ \\  \\  | |  / /  .'-'.-' `._,"<<std::endl;
outfile<<"            (       L   \\_.--.| \\_.      ' .___ `º\\: | / .--'.-'     \\ "<<std::endl;
outfile<<"          \\ '\\    .  L   /    \\/        ._/`-.`  \\ .'.' .'---./__   ' "<<std::endl;
outfile<<"     \\__  '\\ ) \\._/   `-.__. ` \\_. '   .---.  \\     /  /  ,   `  `    "<<std::endl;
outfile<<"   --'  \\  ): // \\,            `-.`__.'     `- \\  /   / _/-.---.__.- . "<<std::endl;
outfile<<"      _.-`.'/ /'\\_, ._     >--.-""'____.--""`_     '   /.'..' \\   \\   _/`"<<std::endl;
outfile<<"  _ .---._\\ \\'/ '__./__.-..  / .-|(    x_.-'___  |   :' /    _..---_' \\"<<std::endl;
outfile<<"  .:' /`\\ `. `..'.--'\\      /.' /`-`._  `-,'   ` '   I '_.--'__--..___.--._.-"<<std::endl;
outfile<<"      `  `. `\\/'/  _.   _.-'      _.____./ .-.--""-. .-    ' _..-.---'   \\"<<std::endl;
outfile<<"   -._ .--.\\ / /-./     /   .---'-//.___. .-'       \\__ .--.  `    `.     '`-"<<std::endl;
outfile<<"  ,--'/.-. ^.   .-.--.  ` _/    _//     ./   _..   .'  `.    \\ \\    |_."<<std::endl;
outfile<<"     /' | >.   ' | \\._.-       '    _..'  `.' . `.       )    | |\\  `          "<<std::endl;
outfile<<"   ./ \\ \\'  ) c| /  \\     \\_..  .--'    ,\\ \\_/`  :    )  (`-. `.|`\\            "<<std::endl;
outfile<<"    \\'  / ,-.  | ` ./`  ._/ `\\'.--.,-((  `.`.__ |   _/   \\    |)  `--._/`     "<<std::endl;
outfile<<" ______'\\   |  < __________  //'  //  _)   )/-._`.  (,-')  )  / \\_.    /\\. _____"<<std::endl;
outfile<<" a:f        |  |        .__./    //  '\\  |//    `.\\ '\\ (  (  <`   ._  '"<<std::endl;
outfile<<"            >  |      _.  /   ..-\\ _    _/ \\_.  \\ `\\    \\_ `---.-'__   "<<std::endl;
outfile<<"         . /  `-   _.'        /   `   _/|       J  /`     `-,,-----.`-."<<std::endl;
outfile<<"             '  .:'          '`      '          < `   f  I //        `�\\_,"<<std::endl;
outfile<<"               '                         \\.     J        I/\\_.        ./"<<std::endl;
outfile<<"          __/                            `:     I  .:    K  `          `"<<std::endl;
outfile<<"          \\/ )                            `,   J         L             "<<std::endl;
outfile<<"           )_(_                             .  F  .-'    J             "<<std::endl;
outfile<<"          /    `.                           .  I  (.   . I _.-.._      "<<std::endl;
outfile<<"    '    <'    \\ )                     _.---.J/      :'   L -'         "<<std::endl;
outfile<<"  .:.     \\. _.->/                        _.-'_.)     ` `-.`---.,_.    "<<std::endl;
outfile<<" :<        (    \\                    .--""   .F' J) `.`L.__`-.___      "<<std::endl;
outfile<<" .:        |-'\\_.|                          Y ..Z     ))   `--'  `-    "<<std::endl;
outfile<<" .         ) | > :                            . '    :'                "<<std::endl;
outfile<<"           / ) L_J                            .x,."<<std::endl;
outfile<<"           L_J .,                             .:<.,  "<<std::endl;
outfile<<"         .'`   `                               :J.,` "<<std::endl;
outfile<<"                                            . ;.+K,:."<<std::endl;
outfile<<"                                                .,L+.,"<<std::endl;
	outfile.close();
	}
}
