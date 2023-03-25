#include "main-window.hpp"

MainWindow::MainWindow(QWidget* parent)
    : QWidget(parent)
{
    label = new QLabel("0", this);

    QPushButton* plusButton{ new QPushButton("+", this) };
    QPushButton* minusButton{ new QPushButton("-", this) };

    QGridLayout* grid{ new QGridLayout(this) };
    grid->addWidget(plusButton, 0, 0);
    grid->addWidget(minusButton, 0, 1);
    grid->addWidget(label, 1, 1);

    setLayout(grid);

    connect(plusButton, &QPushButton::clicked, this, &MainWindow::OnPlus);
    connect(minusButton, &QPushButton::clicked, this, &MainWindow::OnMinus);
}

void MainWindow::OnPlus()
{
    int value{ label->text().toInt() };
    value++;
    label->setText(QString::number(value));
}

void MainWindow::OnMinus()
{
    int value{ label->text().toInt() };
    value--;
    label->setText(QString::number(value));
}

