#ifndef TASKWINDOW_H
#define TASKWINDOW_H

#include <QMainWindow>

namespace Ui {
class Taskwindow;
}

class Taskwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit Taskwindow(QWidget *parent = nullptr);
    ~Taskwindow();

signals:

public slots:
    void showPopupMenu();

private:
    Ui::Taskwindow *ui;
};

#endif // TASKWINDOW_H
