#ifndef MEMOWINDOW_H
#define MEMOWINDOW_H

#include <QWidget>

namespace Ui {
class MemoWindow;
}

class MemoWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MemoWindow(QWidget *parent = nullptr);
    ~MemoWindow();

private:
    Ui::MemoWindow *ui;
};

#endif // MEMOWINDOW_H
