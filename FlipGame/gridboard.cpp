#include "gridboard.h"
#include "ui_gridboard.h"


GridBoard::GridBoard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GridBoard)
{
    ui->setupUi(this);
    int rowcnt = ui->gridLayout->rowCount();
    int colcnt = ui->gridLayout->columnCount();
    for (int i = 0; i < rowcnt; ++i)
        for (int j = 0; j < colcnt; ++j)
        {
            connect(itemAt(i,j), SIGNAL(clicked()),
                    itemAt(i, j), SLOT(flip()));
            if (i > 0)// up
            {
                connect(itemAt(i, j), SIGNAL(clicked()),
                        itemAt(i - 1, j), SLOT(flip()));
            }
            if (j > 0)// left
            {
                connect(itemAt(i, j), SIGNAL(clicked()),
                        itemAt(i, j - 1), SLOT(flip()));
            }
            if (j < colcnt - 1)// right
            {
                connect(itemAt(i, j), SIGNAL(clicked()),
                        itemAt(i, j + 1), SLOT(flip()));
            }
            if (i < rowcnt - 1)// down
            {
                connect(itemAt(i, j), SIGNAL(clicked()),
                        itemAt(i + 1, j), SLOT(flip()));
            }
        }
}

GridBoard::~GridBoard()
{
    delete ui;
}

FlipButton *GridBoard::itemAt(int row, int col)
{
    return static_cast<FlipButton*>(ui->gridLayout->itemAtPosition(row, col)->widget());
}
