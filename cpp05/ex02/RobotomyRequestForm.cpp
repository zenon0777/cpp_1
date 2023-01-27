#include"RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string name, int s_grade, int ex_grade) : Form(name, s_grade, ex_grade)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::check_Requirement(Form &F)
{
    if (F.get_sign_status() == false)
        throw FormNotSignedExecption();
    if (F.get_exec_grade() > lowest_execut_grade)
        GradeTooLowException();
    else
        std::cout << F.get_name() << " is excecutable " << std::endl;
}