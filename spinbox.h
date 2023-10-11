#ifndef SPINBOX_H
#define SPINBOX_H

#include <QWidget>

namespace Ui {
class SpinBox;
}

class SpinBox : public QWidget
{
    Q_OBJECT

public:
    explicit SpinBox(QWidget *parent = nullptr);
    ~SpinBox();

public slots:
    void ChangeValue();

private:
    Ui::SpinBox *ui;
};

#endif // SPINBOX_H
