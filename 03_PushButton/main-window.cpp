#include "main-window.hpp"

MainWindow::MainWindow(QWidget* parent)
    : QWidget(parent)
{
    QPushButton* quit_btn{ new QPushButton("Quit", this) };
    quit_btn->setGeometry(50, 40, 75, 30);

    connect(quit_btn, &QPushButton::clicked, qApp, &QApplication::quit);
}

