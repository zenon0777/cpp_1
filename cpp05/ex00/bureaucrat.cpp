/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 08:17:35 by adaifi            #+#    #+#             */
/*   Updated: 2023/01/26 09:46:07 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int garde) : B_name(name), B_grade(garde)
{
    std::cout << "Constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name) : B_name(name), B_grade(this->getGrade())
{}

void Bureaucrat::set_grade(int grade){
    B_grade = grade;
}

const std::string Bureaucrat::getName() const{
    return B_name;
}

int Bureaucrat::getGrade() const{
    return B_grade;
}

void Bureaucrat::increment_garde(){
    if (this->getGrade() > 1)
        set_grade(this->B_grade - 1);
}

void Bureaucrat::decrement_grade(){
    if (this->getGrade() < 150 )
        set_grade(this->B_grade + 1);
}

Bureaucrat::Bureaucrat(Bureaucrat& src) : B_grade(src.getGrade()), B_name(src.getName())
{
    std::cout << "Copy Constructor called" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() throw(){
    return "Grade Too High Exception\n";
}

const char* Bureaucrat::GradeTooLowException::what() throw(){
    return "Grade Too Low Exception.\n";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src)
{
    if (this != &src)
        this->B_grade = src.getGrade();
    return *this;
}

std::ostream& operator<<(std::ostream &o, Bureaucrat B)
{
    o << B.getName() << " bureaucrat grade " << B.getGrade() << std::endl;
    return o;
}

int main()
{
    Bureaucrat B("Daifi", 149);
    B.decrement_grade();
    B.decrement_grade();
    B.decrement_grade();
    try
    {
        if (B.getGrade() >= 150)
            throw(Bureaucrat::GradeTooLowException());
    }
    catch (Bureaucrat::GradeTooLowException& exp)
    {
        std::cout << exp.what() << std::endl;
    }
    std::cout << B;
    return 0;
}
