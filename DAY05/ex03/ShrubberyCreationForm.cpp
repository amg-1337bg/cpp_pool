#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const	std::string target) : Form("Shrubbery", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &Sf) : Form(Sf.getName(), Sf.getGradeSigned(), Sf.getGradeExecute())
{
	this->setSign(getSigned());
	target = Sf.target;
}

ShrubberyCreationForm ShrubberyCreationForm::operator=(const ShrubberyCreationForm &sf)
{
	target = sf.target;
	this->setSign(sf.getSigned());
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{

	if (!getSigned())
		throw (ShrubberyCreationForm::NotSigned());
	if (executor.getGrade() <= getGradeExecute())
	{
		std::string filename;
		filename = target + "_shrubbery";
		std::ofstream fi(filename);
		if (fi.fail())
		{
			std::cout << "Error While Opening the File" << std::endl;
			return ;
		}
		fi << "                                              .		" << std::endl;
		fi << "                                   .         ;		" << std::endl;
		fi << "      .              .              ;%     ;;		" << std::endl;
		fi << "        ,           ,                :;%  %;			" << std::endl;
		fi << "         :         ;                   :;%;'     .,	" << std::endl;
		fi << ",.        %;     %;            ;        %;'    ,;	" << std::endl;
		fi << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'		" << std::endl;
		fi << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'		" << std::endl;
		fi << "    ;%;      %;        ;%;        % ;%;  ,%;'		" << std::endl;
		fi << "     `%;.     ;%;     %;'         `;%%;.%;'			" << std::endl;
		fi << "      `:;%.    ;%%. %@;        %; ;@%;%'				" << std::endl;
		fi << "         `:%;.  :;bd%;          %;@%;'				" << std::endl;
		fi << "           `@%:.  :;%.         ;@@%;'				" << std::endl;
		fi << "             `@%.  `;@%.      ;@@%;					" << std::endl;
		fi << "               `@%%. `@%%    ;@@%;					" << std::endl;
		fi << "                 ;@%. :@%%  %@@%;					" << std::endl;
		fi << "                   %@bd%%%bd%%:;						" << std::endl;
		fi << "                     #@%%%%%:;;						" << std::endl;
		fi << "                     %@@%%%::;						" << std::endl;
		fi << "                     %@@@%(o);  . '					" << std::endl;
		fi << "                     %@@@o%;:(.,'					" << std::endl;
		fi << "                 `.. %@@@o%::;						" << std::endl;
		fi << "                    `)@@@o%::;						" << std::endl;
		fi << "                     %@@(o)::;						" << std::endl;
		fi << "                    .%@@@@%::;						" << std::endl;
		fi << "                    ;%@@@@%::;.						" << std::endl;
		fi << "                   ;%@@@@%%:;;;.						" << std::endl;
		fi << "               ...;%@@@@@%%:;;;;,.. 					" << std::endl;	

		fi << std::endl;

		fi << "                                              .		" << std::endl;
		fi << "                                   .         ;		" << std::endl;
		fi << "      .              .              ;%     ;;		" << std::endl;
		fi << "        ,           ,                :;%  %;			" << std::endl;
		fi << "         :         ;                   :;%;'     .,	" << std::endl;
		fi << ",.        %;     %;            ;        %;'    ,;	" << std::endl;
		fi << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'		" << std::endl;
		fi << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'		" << std::endl;
		fi << "    ;%;      %;        ;%;        % ;%;  ,%;'		" << std::endl;
		fi << "     `%;.     ;%;     %;'         `;%%;.%;'			" << std::endl;
		fi << "      `:;%.    ;%%. %@;        %; ;@%;%'				" << std::endl;
		fi << "         `:%;.  :;bd%;          %;@%;'				" << std::endl;
		fi << "           `@%:.  :;%.         ;@@%;'				" << std::endl;
		fi << "             `@%.  `;@%.      ;@@%;					" << std::endl;
		fi << "               `@%%. `@%%    ;@@%;					" << std::endl;
		fi << "                 ;@%. :@%%  %@@%;					" << std::endl;
		fi << "                   %@bd%%%bd%%:;						" << std::endl;
		fi << "                     #@%%%%%:;;						" << std::endl;
		fi << "                     %@@%%%::;						" << std::endl;
		fi << "                     %@@@%(o);  . '					" << std::endl;
		fi << "                     %@@@o%;:(.,'					" << std::endl;
		fi << "                 `.. %@@@o%::;						" << std::endl;
		fi << "                    `)@@@o%::;						" << std::endl;
		fi << "                     %@@(o)::;						" << std::endl;
		fi << "                    .%@@@@%::;						" << std::endl;
		fi << "                    ;%@@@@%::;.						" << std::endl;
		fi << "                   ;%@@@@%%:;;;.						" << std::endl;
		fi << "               ...;%@@@@@%%:;;;;,.. 					" << std::endl;	

		fi << std::endl;

		fi << "                                              .		" << std::endl;
		fi << "                                   .         ;		" << std::endl;
		fi << "      .              .              ;%     ;;		" << std::endl;
		fi << "        ,           ,                :;%  %;			" << std::endl;
		fi << "         :         ;                   :;%;'     .,	" << std::endl;
		fi << ",.        %;     %;            ;        %;'    ,;	" << std::endl;
		fi << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'		" << std::endl;
		fi << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'		" << std::endl;
		fi << "    ;%;      %;        ;%;        % ;%;  ,%;'		" << std::endl;
		fi << "     `%;.     ;%;     %;'         `;%%;.%;'			" << std::endl;
		fi << "      `:;%.    ;%%. %@;        %; ;@%;%'				" << std::endl;
		fi << "         `:%;.  :;bd%;          %;@%;'				" << std::endl;
		fi << "           `@%:.  :;%.         ;@@%;'				" << std::endl;
		fi << "             `@%.  `;@%.      ;@@%;					" << std::endl;
		fi << "               `@%%. `@%%    ;@@%;					" << std::endl;
		fi << "                 ;@%. :@%%  %@@%;					" << std::endl;
		fi << "                   %@bd%%%bd%%:;						" << std::endl;
		fi << "                     #@%%%%%:;;						" << std::endl;
		fi << "                     %@@%%%::;						" << std::endl;
		fi << "                     %@@@%(o);  . '					" << std::endl;
		fi << "                     %@@@o%;:(.,'					" << std::endl;
		fi << "                 `.. %@@@o%::;						" << std::endl;
		fi << "                    `)@@@o%::;						" << std::endl;
		fi << "                     %@@(o)::;						" << std::endl;
		fi << "                    .%@@@@%::;						" << std::endl;
		fi << "                    ;%@@@@%::;.						" << std::endl;
		fi << "                   ;%@@@@%%:;;;.						" << std::endl;
		fi << "               ...;%@@@@@%%:;;;;,.. 					" << std::endl;	
		
	}
	else
		throw (ShrubberyCreationForm::GradeTooLowException());
		// std::cout << executor.getName() << " has not the required Grade to execute" << std::endl;
}
