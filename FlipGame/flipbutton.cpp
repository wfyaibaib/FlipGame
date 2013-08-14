#include "flipbutton.h"

FlipButton::FlipButton(QWidget *parent) :
    QPushButton(parent)
{
    this->flipped = false;


    this->setIcon(QIcon(QString(":/res/0.jpg")));

    this->setFixedSize(140, 140);
    this->setIconSize(this->size());

}

void FlipButton::flip()
{
    flipped = !flipped;
    if (flipped)
        this->setIcon(QIcon(QString(":/res/1.jpg")));
    else
        this->setIcon(QIcon(QString(":/res/0.jpg")));
    this->setIconSize(this->size());

}

void FlipButton::connectSelfAndOther(QList<FlipButton *> list)
{
    foreach (FlipButton * reciver, list)
    {
        connect(this, SIGNAL(clicked()),reciver, SLOT(flip()));
    }
}
