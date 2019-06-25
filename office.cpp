#include "office.h"


Office::Office(std::string ofNameOfOffice, std::string ofAddressOfOffice, int ofWorkingArea, int ofNumberOfEmployee)
{
    mNameOfOffice = ofNameOfOffice;
    mAddressOfOffice = ofAddressOfOffice;
    mWorkingArea = ofWorkingArea;
    mNumberOfEmployee = ofNumberOfEmployee;
}

Office::~Office()
{
}

void Office::print() const
{
    std::cout << "Name: " << nameOfOffice() << std::endl;
    std::cout << "Address: " << AddressOfOffice() << std::endl;
    std::cout << "Area: " << workingArea() << std::endl;
    std::cout << "Number_Of_Employee: " << numberOfEmployee() << std::endl;
    std::cout << std::endl;
}

std::string Office::nameOfOffice() const
{
    return mNameOfOffice;
}

void Office::setNameOfOffice(const std::string &nameOfOffice)
{
    mNameOfOffice = nameOfOffice;
}

int Office::workingArea() const
{
    return mWorkingArea;
}

void Office::setWorkingArea(int workingArea)
{
    mWorkingArea = workingArea;
}

int Office::numberOfEmployee() const
{
    return mNumberOfEmployee;
}

void Office::setNumberOfEmployee(int numberOfEmployee)
{
    mNumberOfEmployee = numberOfEmployee;
}

void Office::setAddressOfOffice(const std::string &addressOfOffice)
{
    mAddressOfOffice = addressOfOffice;
}
std::string Office::AddressOfOffice() const
{
    return mAddressOfOffice;
}
