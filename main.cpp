#include <QApplication>
#include <QSlider>
#include <QLineEdit>
#include <QVBoxLayout>
#include <iostream>
#include "include/colorfulCircle.h"


int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget *window = new QWidget;
    ColorfulCircle circle(nullptr);
    auto *slider = new QSlider(Qt::Horizontal,window);
    slider->setMinimum(0);
    slider->setMaximum(100);
    QObject::connect(slider,&QSlider::valueChanged, [&slider, &circle](int newValue)
    {
        if(newValue < 33)
        {
            circle.setGreen();
        }
        else if(newValue >= 33 && newValue < 66)
        {
            circle.setYellow();
        }
        else
        {
            circle.setRed();
        }
    });
    auto *loyout = new QVBoxLayout(window);
    loyout->addWidget(&circle,0,Qt::AlignHCenter);
    loyout->addWidget(slider,0,Qt::AlignBottom);
    window->resize(250,200);
    window->move(600, 300);
    window->setWindowTitle("Qtricolor");
    window->show();

    return app.exec();
}
