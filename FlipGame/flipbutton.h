#ifndef FLIPBUTTON_H
#define FLIPBUTTON_H

#include <QPushButton>
#include <QList>
class FlipButton : public QPushButton
{
    Q_OBJECT
public:
    explicit FlipButton(QWidget *parent = 0);
    void connectSelfAndOther(QList<FlipButton*> list);



signals:
    
public slots:
    void flip();
    virtual void flip(size_t num);

private:
    bool flipped;
    bool oldState;

};

#endif // FLIPBUTTON_H
