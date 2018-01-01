TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    queue.cpp \
    bank.cpp \
    atmqueues.cpp

HEADERS += \
    queue.h \
    atmqueues.h

