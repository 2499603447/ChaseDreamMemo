#include "popupmenu.h"
#include "ui_popupmenu.h"
#include <QGraphicsDropShadowEffect>

PopupMenu::PopupMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PopupMenu)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint | Qt::Popup);
}

PopupMenu::~PopupMenu()
{
    delete ui;
}
