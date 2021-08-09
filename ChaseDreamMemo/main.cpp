#include "mainwindow.h"

#include <QApplication>
#include <QListView>
#include <QListWidgetItem>
#include <QHBoxLayout>
#include <QPushButton>
#include <QCheckBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

//    QListWidget *list=new QListWidget;
//    QListWidgetItem *item=new QListWidgetItem(list,0);

//    item->setSizeHint(QSize(100,100));
//    QWidget *w = new QWidget(list);
//    QHBoxLayout *layout=new QHBoxLayout(w);
//    QPushButton *pushButton=new QPushButton(w);
//    QCheckBox *checkBox=new QCheckBox(w);
//    layout->addWidget(checkBox);
//    layout->addWidget(pushButton);
//    w->setLayout(layout);
//    w->show();
//    list->setItemWidget(item,w);
//    list->show();
    return a.exec();
}
