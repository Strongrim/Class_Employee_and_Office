#ifndef PRINTABLE_H
#define PRINTABLE_H

/*
 * Клас Printable є абстрактним класом, що містить чисто віртуальний метод print(),
 * який слугує для виводу інформації про об'єкт у консоль. У нашій програмі ми викоритовуємо
 * цей клас для виводу у консоль інформації про об'єкт.
 * Тому будь-який клас що успадковує від Printable та перевизначає його метод print()
 * може виводити інформацію про себе у нашій програмі.
 */
class Printable {
public:
    virtual void print() const = 0;
};

#endif // PRINTABLE_H

