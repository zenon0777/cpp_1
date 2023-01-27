#ifndef ROBOTMYREQUESTFORM_HPP
#define ROBOTMYREQUESTFORM_HPP
#include"Form.hpp"

#define lowest_sign_grade 145
#define lowest_execut_grade 137

class RobotomyRequestForm : public Form
{
private:
    int signe;
    int exe_grade;
public:
    RobotomyRequestForm(std::string name, int s_grade, int ex_grade);
    void check_Requirement(Form &F);
    ~RobotomyRequestForm();
};


#endif