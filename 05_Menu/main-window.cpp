#include "main-window.hpp"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
{
    QPixmap newIcon{ "add-file.png" };
    QPixmap openIcon{ "open-file-button.png" };
    QPixmap quitIcon{ "logout.png" };

    auto* newAction{ new QAction(newIcon,"&New", this) };
    auto* openAction{ new QAction(openIcon,"&New", this) };
    auto* quitAction{ new QAction(quitIcon,"&New", this) };
    quitAction->setShortcut(tr("CTRL+Q"));

    QMenu* file{ menuBar()->addMenu("&File") };
    file->addAction(newAction);
    file->addAction(openAction);
    file->addSeparator();
    file->addAction(quitAction);

    qApp->setAttribute(Qt::AA_DontShowIconsInMenus, false);

    connect(quitAction, &QAction::triggered, qApp, &QApplication::quit);
}

