#include "main-window.hpp"

int main(int argc, char* argv[])
{
    QApplication app{ argc, argv };

    MainWindow window{ };
    window.resize(300, 190);
    window.setWindowTitle("Plus Minus");
    window.show();

    return app.exec();
}

