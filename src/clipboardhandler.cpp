#include "clipboardhandler.h"

void handleClipboard(int argc, char *argv[])
{
     QGuiApplication app(argc, argv);

     QClipboard *clipboard = app.clipboard();
     QString originalText = clipboard->text();

    // Null arg
     if(argv[1] == nullptr) {
         QString QLine;
         std::string Line;

         while (std::getline(std::cin, Line))
             QLine += QString::fromStdString(Line) + "\n";

        QLine.chop(1);
        clipboard->setText(QLine);
    }

    // Some arg
    else {
        clipboard->setText(argv[1]);
    }

    app.exec();
}