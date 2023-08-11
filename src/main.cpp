#include <iostream>
#include <string>

#include <QApplication>
#include <QClipboard>
#include <QSystemTrayIcon>

int main(int argc, char *argv[]){
  QApplication app(argc, argv);

  // Create a system tray icon object
  QSystemTrayIcon trayIcon;

  // Customize the icon and tooltip as needed
  QIcon icon("../res/icon.png");
  trayIcon.setIcon(icon);
  trayIcon.setToolTip("copycat");
  trayIcon.show();

  QClipboard *clipboard = QGuiApplication::clipboard();
  QString originalText = clipboard->text();

   // Without arg
  if(argv[1] == NULL){
    QString QLine;
    std::string Line;
    while (std::getline(std::cin, Line))
      QLine += QString::fromStdString(Line)+"\n";
    QLine.chop(1);
    clipboard->setText(QLine);
   }

   // With arg
  else{
     clipboard->setText(argv[1]);
  }
  return app.exec();
}