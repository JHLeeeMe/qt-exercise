#include "main-window.hpp"

int main(int argc, char* argv[])
{
    QApplication app{ argc, argv };

    MainWindow window{ };
    window.resize(350, 250);
    window.setWindowTitle("Another menu");
    window.show();

    return app.exec();
}

