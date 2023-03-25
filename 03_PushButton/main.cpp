#include "main-window.hpp"

int main(int argc, char* argv[])
{
    QApplication app{ argc, argv };

    MainWindow window{ };
    window.resize(250, 150);
    window.setWindowTitle("QPushButton");
    window.show();

    return app.exec();
}

