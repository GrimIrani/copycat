QT += svg
QT += widgets
QT += gui
TEMPLATE = app
TARGET = copycat
INCLUDEPATH += .

LIBS += -lappindicator
SOURCES += main.cpp traymenu.cpp clipboardhandler.cpp