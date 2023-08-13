#include <iostream>
#include <string>

#include <QApplication>

#include "traymenu.h"
#include "clipboardhandler.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    createTrayMenu(); // Call the function to create the tray Menu

    handleClipboard(argc, argv);  // Call the function to handle clipboard

    return app.exec();
}