#include "taskwindow.h"
#include "ui_taskwindow.h"
#include "customui/popupmenu.h"
#include <QPushButton>
#include <QDockWidget>

Taskwindow::Taskwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Taskwindow)
{
    ui->setupUi(this);
    connect(ui->addNewTask, SIGNAL(clicked()), this, SLOT(showPopupMenu()));
}


Taskwindow::~Taskwindow()
{
    delete ui;
}

void Taskwindow::showPopupMenu()
{
    auto pMenu = new PopupMenu(this);
    int menuWidth = pMenu->width();
    int menuHeight = pMenu->height();

    int x = - menuWidth;
    int y = ui->addNewTask->height() / 2 - menuHeight;

    QPoint pos(ui->addNewTask->mapToGlobal(QPoint(x, y)));
    pMenu->move(pos);
    pMenu->show();
}
