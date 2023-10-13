#ifndef LINEEDIT_H
#define LINEEDIT_H

#include <QWidget>

namespace Ui {
class LineEdit;
}

class LineEdit : public QWidget
{
    Q_OBJECT

public:
    explicit LineEdit(QWidget *parent = nullptr);
    ~LineEdit();

private:
    Ui::LineEdit *ui;
};

#endif // LINEEDIT_H
