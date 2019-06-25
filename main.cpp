#include <iostream>
#include <vector>
#include "employee.h"
#include "printable.h"
#include "office.h"


void printList(const std::vector<Printable *> listToPrint)
{
    for (auto item: listToPrint)
    {
        item->print();
        std::cout << std::endl;
    }
}

int main()
{

    // ЗАВДАННЯ:
    // ---------
    // 1. Створіть новий клас Employee (працівник) та додайте до нього методи
    // для задання різноманітної інформації про працівника:
    //    * Ім'я
    //    * Номер телефону
    //    * Домашня адреса
    //    * Заробітна плата (число у доларах США)
    //    * З якого року працює
    // Клас має мати окремий *.h-файл з описом та окремий *.cpp файл що міститиме реалізацію.
    // 2. Для того, щоб вивести інформацію про працівника, успадкуйте його від класу Printable
    // та перевизначіть метод print(). У цьому методі виведіть усю доступну про працівника
    // інформацію у консоль.
    // 3. Створіть 2-3 об'єкта класу Employee, додайте їх до списку employeesToPrint
    // та виведіть з допомогою функції printList().
    //
    // 4. Створіть новий клас Office (офіс) який буде містити інформацію про офіси
    // нашої фірми та їх місцезнаходження. Додайте до нього методи для задання
    // різноманітної інформації:
    //    * Назва офісу
    //    * Адреса офісу
    //    * Робоча площа (у кв метрах)
    //    * Кількість працівників що працюють всередині
    // Клас має мати окремий *.h-файл з описом та окремий *.cpp файл що міститиме реалізацію.
    // 5. Створіть 2-3 об'єкта класу Office, додайте їх до списку officesToPrint
    // та виведіть з допомогою функції printList().
    // Для того, щоб вивести інформацію про офіс, успадкуйте його від класу Printable
    // та перевизначіть метод print(). У цьому методі виведіть усю доступну про офіс
    // інформацію у консоль.

    Employee Pavlo1 ("Pavlo1", "+380972593040", "L'viv", 400, 2019);
    Employee Pavlo2 ("Pavlo2", "+380972593040", "L'viv", 8000, 2015);
    Employee Pavlo3 ("Pavlo3", "+380972593040", "L'viv", 8500, 2014);

    std::vector<Printable *> employeesToPrint = {&Pavlo1, &Pavlo2, &Pavlo3};
    printList(employeesToPrint);

    std::cout << std::endl; // ------------

    Office Office1 ("Strongware", "L'viv, St 1", 150, 15);
    Office Office2 ("Strongware1", "L'viv, St 2", 200, 20);

    std::vector<Printable *> officesToPrint = {&Office1, &Office2};
    printList(officesToPrint);

    return 0;
}

