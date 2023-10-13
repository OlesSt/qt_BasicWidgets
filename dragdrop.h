#ifndef DRAGDROP_H
#define DRAGDROP_H

#include <QWidget>

namespace Ui {
class DragDrop;
}

class DragDrop : public QWidget
{
    Q_OBJECT

public:
    explicit DragDrop(QWidget *parent = nullptr);
    ~DragDrop();

private:
    Ui::DragDrop *ui;
};

#endif // DRAGDROP_H
