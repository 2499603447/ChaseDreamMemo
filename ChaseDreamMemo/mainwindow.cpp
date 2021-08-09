#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QProgressBar>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include "memowindow/memowindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    QString filename = "1256sdff.png";
//    int currentIndex = 0;

//    QWidget *widget = new QWidget(ui->listWidget);

//    //创建自定义的item
//    widget->setStyleSheet("background:transparent;");

//    QLabel *TypeLabel = new QLabel(widget);
//    QPixmap myPix(QStringLiteral("E:\\projects\\cpp\\ChaseDreamMemo\\res\\download.png"));
//    TypeLabel->setFixedSize(62, 32);
//    TypeLabel->setPixmap(myPix);
//    TypeLabel->setScaledContents(true);
//    TypeLabel->setStyleSheet("QLabel{padding-left:15px;padding-right:15px;}");

//    QWidget *frontArea = new QWidget(widget);
//    frontArea->setFixedHeight(32);

//    QLabel *TextLabel = new QLabel(frontArea);
//    TextLabel->setText(filename);

//    QLabel *TotalCopyLabel = new QLabel(frontArea);
//    TotalCopyLabel->setText("0 KB/0 KB");

//    QWidget *backArea = new QWidget(widget);
//    backArea->setFixedSize(158, 32);

//    QProgressBar *ProgressBar = new QProgressBar(backArea);
//    ProgressBar->setTextVisible(false);
//    ProgressBar->setFixedHeight(12);
//    ProgressBar->setStyleSheet("QProgressBar{ border:none; background:rgb(230, 230, 230); border-radius:0px; text-align:center; color:gray }\
//                            QProgressBar::chunk{ background:rgb(71, 137, 250); border-radius:0px; }");

//    QLabel *SpeedLabel = new QLabel(backArea);
//    SpeedLabel->setText("0 B/s");

//    QPushButton *OpenFolderButton = new QPushButton(widget);
//    OpenFolderButton->setToolTip(QStringLiteral("打开文件夹"));
//    OpenFolderButton->setFixedSize(82, 32);
//    QIcon icon3(QStringLiteral("E:\\projects\\cpp\\ChaseDreamMemo\\res\\folder.png"));
//    OpenFolderButton->setIcon(icon3);
//    OpenFolderButton->setIconSize(QSize(24, 24));
//    OpenFolderButton->setProperty("index", QString::number(currentIndex));
//    OpenFolderButton->setStyleSheet("QPushButton{ margin-left:25px;margin-right:25px;border:none; color:white; background:none; }QPushButton:hover{color:#FFFFFF; background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 0% ), stop:1 rgba(200, 200, 200, 60% )); }\
//                                                                QPushButton:pressed{ color:white; background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 0% ), stop:1 rgba(200, 200, 200, 80% )); }");
//    connect(OpenFolderButton, SIGNAL(clicked()), this, SLOT(OpenFolder()));

//    QLabel *TipIconLabel = new QLabel(widget);
//    QPixmap myPix2(QStringLiteral("E:\\projects\\cpp\\ChaseDreamMemo\\res\\waitting.png"));
//    TipIconLabel->setFixedSize(25, 20);
//    TipIconLabel->setPixmap(myPix2);
//    TipIconLabel->setScaledContents(true);
//    TipIconLabel->setStyleSheet("QLabel{padding-left:0px;padding-right:5px;}");

//    QLabel *TipTextLabel = new QLabel(widget);
//    TipTextLabel->setText(QStringLiteral("等待中"));
//    TipTextLabel->setStyleSheet("QLabel{padding-left:0px;padding-right:0px;}");
//    TipTextLabel->setFixedWidth(55);

//    QPushButton *CloseButton = new QPushButton(widget);
//    CloseButton->setToolTip(QStringLiteral("取消下载"));
//    CloseButton->setFixedSize(34, 24);
//    QIcon icon4(QStringLiteral("E:\\projects\\cpp\\ChaseDreamMemo\\res\\cancel.png"));
//    CloseButton->setIcon(icon4);
//    CloseButton->setIconSize(QSize(12, 12));
//    CloseButton->setProperty("index", QString::number(currentIndex));
//    CloseButton->setStyleSheet("QPushButton{ margin-left:0px;margin-right:10px;border:none; color:white; background:none; }QPushButton:hover{color:#FFFFFF; background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 0% ), stop:1 rgba(200, 200, 200, 60% )); }\
//                            QPushButton:pressed{ color:white; background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 0% ), stop:1 rgba(200, 200, 200, 80% )); }");
//    connect(CloseButton, SIGNAL(clicked()), this, SLOT(HideItem()));

//    QVBoxLayout *verLayout = new QVBoxLayout;
//    verLayout->setContentsMargins(0, 0, 0, 0);
//    verLayout->setSpacing(0);
//    verLayout->addWidget(TextLabel);
//    verLayout->addWidget(TotalCopyLabel);
//    frontArea->setLayout(verLayout);

//    QVBoxLayout *verLayout2 = new QVBoxLayout;
//    verLayout2->setContentsMargins(0, 0, 0, 0);
//    verLayout2->setSpacing(0);
//    verLayout2->addWidget(ProgressBar);
//    verLayout2->addWidget(SpeedLabel);
//    backArea->setLayout(verLayout2);

//    QHBoxLayout *horLayout = new QHBoxLayout;
//    horLayout->setContentsMargins(0, 0, 0, 0);
//    horLayout->setSpacing(0);
//    horLayout->addWidget(TypeLabel);
//    horLayout->addWidget(frontArea);
//    horLayout->addWidget(backArea);
//    horLayout->addWidget(OpenFolderButton);
//    horLayout->addWidget(TipIconLabel);
//    horLayout->addWidget(TipTextLabel);
//    horLayout->addWidget(CloseButton);
//    widget->setLayout(horLayout);

//    //将widget作为列表的item
//    QListWidgetItem *ITEM = new QListWidgetItem();
//    ITEM->setSizeHint(QSize(this->width(), 56));
//    ui->listWidget->addItem(ITEM);
//    widget->setSizeIncrement(this->width(), 56);
//    ui->listWidget->setItemWidget(ITEM, widget);


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
    addButton->setToolTip(QStringLiteral("取消下载"));
    addButton->setFixedSize(150, 220);
    QIcon icon4(QStringLiteral("E:\\projects\\cpp\\ChaseDreamMemo\\res\\add.png"));
    addButton->setIcon(icon4);
    addButton->setIconSize(QSize(12, 12));
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
    MemoWindow *memoWindow = new MemoWindow();
    memoWindow->show();
}

