#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

int main(int argc, char* argv[])
{
    QApplication app{ argc, argv };

    QWidget window{ };
    window.resize(250, 150);
    window.setWindowTitle("Simple Window");
    window.show();

    return app.exec();
}

