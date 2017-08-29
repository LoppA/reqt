#include <QApplication>
#include <QPushButton>
#include "window.h"

int main (int argc, char* argv[]) {
    QApplication app (argc, argv);
/*
    //ex1
    QPushButton button;
    button.setText("My text");
    button.setToolTip("A tooltip");
    button.show();

    QFont font ("Courier");
    button.setFont(font);

    button.setIcon(QIcon::fromTheme("face-smile"));

    //ex2
    QWidget window;
    window.setFixedSize(100, 50);

    QPushButton *button = new QPushButton ("Hello World", &window);
    button->setGeometry(10, 10, 80, 30);

    window.show();
*/

    Window window;
    window.show();

    return app.exec();
}
