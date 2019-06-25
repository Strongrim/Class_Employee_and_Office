#ifndef OFFICE_H
#define OFFICE_H
#include <iostream>
#include "printable.h"

class Office : public Printable
{
public:
    Office(std::string ofNameOfOffice,
           std::string ofAddressOfOffice,
           int ofWorkingArea,
           int ofNumberOfEmployee);

    ~Office();

    virtual void print() const override;

    void setAddressOfOffice(const std::string &addressOfOffice);
    std::string AddressOfOffice() const;

    std::string nameOfOffice() const;
    void setNameOfOffice(const std::string &nameOfOffice);

    int workingArea() const;
    void setWorkingArea(int workingArea);

    int numberOfEmployee() const;
    void setNumberOfEmployee(int numberOfEmployee);

private:
    std::string mNameOfOffice;
    std::string mAddressOfOffice;
    int mWorkingArea;
    int mNumberOfEmployee;
};

#endif // OFFICE_H
