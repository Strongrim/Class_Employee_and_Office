#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include "printable.h"

class Employee: public Printable
{
public:
    Employee(std::string EmName,
             std::string EmNumberOfPhone,
             std::string EmAddress,
             int EmSalary,
             int EmYearWorking);
    ~Employee();

    virtual void print() const override
    {
        std::cout << "Name: " << name() << std::endl;
        std::cout << "Phone: " << numberOfPhone() << std::endl;
        std::cout << "Address: " << address() << std::endl;
        std::cout << "Salary: " << salary() << std::endl;
        std::cout << "Year_Workimg: " << yearWorking() << std::endl << std::endl;
    }

    std::string name() const;
    void setName(const std::string &name);

    std::string numberOfPhone() const;
    void setNumberOfPhone(const std::string &numberOfPhone);

    std::string address() const;
    void setAddress(const std::string &address);

    int salary() const;
    void setSalary(int salary);

    int yearWorking() const;
    void setYearWorking(int yearWorking);

private:
    std::string mName;
    std::string mNumberOfPhone;
    std::string mAddress;
    int mSalary;
    int mYearWorking;

};

#endif // EMPLOYEE_H
