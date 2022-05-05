#include <QPainter>
#include <QPixmap>
#include <QPaintEvent>
#include "include/colorfulCircle.h"

void ColorfulCircle::paintEvent(QPaintEvent *e) {
    QPainter p(this);
    p.drawPixmap(e->rect(), currentCircle);
}

QSize ColorfulCircle::minimumSizeHint() const {
    return QSize(100,100);
}

void ColorfulCircle::setYellow() {
    currentCircle = yellowCircle;
    setToolTip("Yellow");
    update();
}

void ColorfulCircle::setGreen() {
    currentCircle = greenCircle;
    setToolTip("Green");
    update();
}

void ColorfulCircle::setRed() {
    currentCircle = redCircle;
    setToolTip("Red");
    update();
}
ColorfulCircle::ColorfulCircle(QWidget *parent) {
    setParent(parent);
    setToolTip("created in paint.exe");
    setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    greenCircle = QPixmap("..\\images\\green.png");
    yellowCircle = QPixmap("..\\images\\yellow.png");
    redCircle = QPixmap("..\\images\\red.png");
    currentCircle = greenCircle;
}