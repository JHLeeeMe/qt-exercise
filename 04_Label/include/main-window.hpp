#pragma once

#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QLabel>
#include <QtWidgets/QGridLayout>

class MainWindow : public QWidget
{
public:
    MainWindow(QWidget* parent = nullptr);
public:
    void OnPlus();
    void OnMinus();
private:
    QLabel* label{ };
};

