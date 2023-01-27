#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include<iostream>
#include<exception>
#include "Form.hpp"
#define highest_grade 1
#define low_grade 150

class Form;

class Bureaucrat
{
private:
    const std::string B_name;
    int B_grade;
public:
    void set_grade(int grade);
    Bureaucrat(std::string name);
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat& src);
    Bureaucrat& operator=(const Bureaucrat& src);
    void signForm(Form& F);
    ~Bureaucrat();
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
    const std::string getName() const;
    int getGrade() const;
    void increment_garde();
    void decrement_grade();
};

std::ostream& operator<<(std::ostream &o, Bureaucrat B);
#endif