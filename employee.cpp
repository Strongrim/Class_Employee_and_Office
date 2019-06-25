#include "employee.h"

Employee::Employee(std::string EmName, std::string EmNumberOfPhone, std::string EmAddress, int EmSalary, int EmYearWorking)
{
    mName = EmName;
    mNumberOfPhone = EmNumberOfPhone;
    mAddress = EmAddress;
    mSalary = EmSalary;
    mYearWorking = EmYearWorking;
}

Employee::~Employee()
{

}

std::string Employee::name() const
{
    return mName;
}

void Employee::setName(const std::string &name)
{
    mName = name;
}

std::string Employee::numberOfPhone() const
{
    return mNumberOfPhone;
}

void Employee::setNumberOfPhone(const std::string &numberOfPhone)
{
    mNumberOfPhone = numberOfPhone;
}

std::string Employee::address() const
{
    return mAddress;
}

void Employee::setAddress(const std::string &address)
{
    mAddress = address;
}

int Employee::salary() const
{
    return mSalary;
}

void Employee::setSalary(int salary)
{
    mSalary = salary;
}

int Employee::yearWorking() const
{
    return mYearWorking;
}

void Employee::setYearWorking(int yearWorking)
{
    mYearWorking = yearWorking;
}
