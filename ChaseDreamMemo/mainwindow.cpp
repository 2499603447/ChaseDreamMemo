#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QProgressBar>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include "taskwindow/taskwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // 界面初始化
    //设置行列比例系数
    ui->gridLayout->setSpacing(10);
    ui->gridLayout->setRowStretch(0, 1);
    ui->gridLayout->setRowStretch(1, 3);
    ui->gridLayout->setColumnStretch(0, 1);
    ui->gridLayout->setColumnStretch(1, 3);
    // 1.从数据库中读取已有的数据

    // 2.将读取到的数据显示到gridlayout中

    // 3.追加显示一个添加数据的布局
    QPushButton *addButton = new QPushButton();
    addButton->setToolTip(QStringLiteral("添加任务"));
    addButton->setFixedSize(150, 220);
    QIcon icon4(QStringLiteral("../ChaseDreamMemo/res/icon/add.svg"));
    addButton->setIcon(icon4);
    addButton->setIconSize(QSize(24, 24));
    connect(addButton, SIGNAL(pressed()), this, SLOT(addMemo()));

    ui->gridLayout->addWidget(addButton);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addMemo()
{
    qDebug() << "add memo start";
    Taskwindow *taskWindow = new Taskwindow();
    taskWindow->show();
}
