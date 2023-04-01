#include "main-window.hpp"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
{
    QPixmap new_icon{ "add-file.png" };
    QPixmap open_icon{ "open-file-button.png" };
    QPixmap quit_icon{ "logout.png" };

    QToolBar* toolbar{ addToolBar("main toolbar" )};
    toolbar->addAction(QIcon(new_icon), "New File");
    toolbar->addAction(QIcon(open_icon), "Open File");
    toolbar->addSeparator();

    QAction* quit{ toolbar->addAction(QIcon(quit_icon), "Quit Application") };

    connect(quit, &QAction::triggered, qApp, &QApplication::quit);
}

