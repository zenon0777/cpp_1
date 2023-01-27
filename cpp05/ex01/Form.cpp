#include"Form.hpp"

Form::Form(std::string name, int s_grade, int ex_grade) : F_name(name), is_signed(false), sign_grade(s_grade), exec_grade(ex_grade)
{}

Form::~Form()
{}

Form::Form(Form& src) : F_name(src.get_name()), is_signed(src.get_sign_status()), sign_grade(src.get_sign_grade()), exec_grade(src.get_exec_grade())
{
    std::cout << "Form Copy Constructor called" << std::endl;
}

const char* Form::GradeTooHighException::what() throw(){
    return "Grade Too High Exception\n";
}

const char* Form::GradeTooLowException::what() throw(){
    return "Grade Too Low Exception.\n";
}

Form& Form::operator=(const Form& src)
{
    if (this != &src)
        this->exec_grade = src.get_exec_grade();
        this->sign_grade = src.get_sign_grade();
        this->is_signed = src.get_sign_status();
    return *this;
}

void Form::beSigned(Bureaucrat B){
    if (B.getGrade() <= this->sign_grade)
        is_signed = true;
    else
        Form::GradeTooLowException();
}

std::ostream& operator<<(std::ostream &o, Form F)
{
    o << F.get_name() << " Form grade required to sign it is : " << F.get_sign_grade()
    << ", the grade required to execute it is : " << F.get_exec_grade() << "\nF is : " << F.get_status() << std::endl;
    return o;
}

const std::string Form::get_status(){
    if (this->get_sign_status() == true)
        return ("Is Signed");
    return ("Is Not Signed");
}

int Form::get_sign_grade(void) const{return sign_grade;}

const std::string Form::get_name(void) const{return F_name;}

int Form::get_exec_grade(void) const{return exec_grade;}

bool Form::get_sign_status(void) const{return is_signed;}