#ifndef MAIN_CPP_COLORFULCIRCLE_H
#define MAIN_CPP_COLORFULCIRCLE_H

#include <QWidget>
#include <QPushButton>

class ColorfulCircle : public QPushButton
{
public:
    ColorfulCircle() = default;
    ColorfulCircle(QWidget *widget);
    void paintEvent(QPaintEvent *e) override;
    QSize minimumSizeHint() const override;
public slots:
            void setGreen();
    void setYellow();
    void setRed();

private:
    QPixmap greenCircle;
    QPixmap yellowCircle;
    QPixmap redCircle;
    QPixmap currentCircle;
};

#endif //MAIN_CPP_COLORFULCIRCLE_H
