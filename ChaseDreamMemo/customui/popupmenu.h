#ifndef POPUPMENU_H
#define POPUPMENU_H

#include <QMainWindow>

namespace Ui {
class PopupMenu;
}

class PopupMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit PopupMenu(QWidget *parent = nullptr);
    ~PopupMenu();

private:
    Ui::PopupMenu *ui;
};

#endif // POPUPMENU_H
