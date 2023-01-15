#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QGridLayout>
#include <QPushButton>
#include <string>
#include <QtWidgets>
#include <QClipboard>    

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    QClipboard *clipboard = QGuiApplication::clipboard();
    QString originalText = clipboard->text();
    clipboard->setText("test");
    return app.exec();
}
