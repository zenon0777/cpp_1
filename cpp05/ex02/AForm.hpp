#ifndef FORM_HPP
#define FORM_HPP
#include"Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string F_name;
    bool  is_signed;
    int   sign_grade;
    int   exec_grade;

    Form();
    Form& operator=(const Form& src);
public:
    class GradeTooHighException : public std::exception
    {
        public:
            const char* what() throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char* what() throw();
    };
    class FormNotSignedExecption : public std::exception
    {
        public:
            const char* what() throw();
    };
    Form(std::string name, int s_grade, int ex_grade);
    Form(Form& src);
    int  get_sign_grade(void) const;
    int  get_exec_grade(void) const;
    bool get_sign_status(void) const;
    const std::string get_name(void) const;
    const std::string get_status();
    void beSigned(Bureaucrat B);
    virtual void execute(Bureaucrat const & executor) const = 0;
    virtual ~Form();
};

std::ostream& operator<<(std::ostream &o, Form F);

#endif