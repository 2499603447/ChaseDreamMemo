#include "memowindow.h"
#include "ui_memowindow.h"

/**
 * @brief MemoWindow::MemoWindow
 * @param parent
 */
MemoWindow::MemoWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MemoWindow)
{
    ui->setupUi(this);
}

MemoWindow::~MemoWindow()
{
    delete ui;
}
