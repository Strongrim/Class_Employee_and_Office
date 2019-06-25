TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    employee.cpp \
    office.cpp

HEADERS += \
    employee.h \
    office.h \
    printable.h
