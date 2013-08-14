#ifndef GRIDBOARD_H
#define GRIDBOARD_H

#include <QWidget>
class FlipButton;
namespace Ui {
class GridBoard;
}

class GridBoard : public QWidget
{
    Q_OBJECT
    
public:
    explicit GridBoard(QWidget *parent = 0);
    ~GridBoard();
    
private:
    Ui::GridBoard *ui;
    FlipButton* itemAt(int row, int col);
};

#endif // GRIDBOARD_H
