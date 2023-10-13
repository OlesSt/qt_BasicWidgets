#ifndef CHECKBOX_H
#define CHECKBOX_H

#include <QWidget>

namespace Ui {
class CheckBox;
}

class CheckBox : public QWidget
{
    Q_OBJECT

public:
    explicit CheckBox(QWidget *parent = nullptr);
    ~CheckBox();

public slots:
    void ChooseCheckBox();
//    void UpdateCheck();

private:
    Ui::CheckBox *ui;
};

#endif // CHECKBOX_H
