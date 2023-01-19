#include <iostream>
#include <string>

#include <QApplication>
#include <QClipboard>

int main(int argc, char *argv[]){
  QApplication app(argc, argv);
  QClipboard *clipboard = QGuiApplication::clipboard();
  QString originalText = clipboard->text();

  //Without arg
  if(argv[1] == NULL){
    clipboard->setText("test");
  }

  //With arg
  else{
    clipboard->setText(argv[1]);
  }
  return app.exec();
}
