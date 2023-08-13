#include "traymenu.h"

void createTrayMenu()
{
   QSystemTrayIcon trayIcon;

    // Add Icon tray on toolbar
    QIcon icon("../res/icon.png");
    trayIcon.setIcon(icon);
    trayIcon.setToolTip("copycat");

    // Add some option for test
    QMenu* trayMenu = new QMenu();
    trayMenu->addAction("Clipboard 1");
    trayMenu->addAction("Clipboard 2");
    trayMenu->addSeparator();
    trayMenu->addAction("Custom Menu");

    // Set the tray menu
    trayIcon.setContextMenu(trayMenu);
}