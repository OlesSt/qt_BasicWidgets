#ifndef INPUTDIALOG_H
#define INPUTDIALOG_H

#include <QWidget>
#include <QInputDialog>

namespace Ui {
class InputDialog;
}

class InputDialog : public QWidget
{
    Q_OBJECT

public:
    explicit InputDialog(QWidget *parent = nullptr);
    ~InputDialog();

public slots:
    void getMyText();
    void getMyItem();

private:
    Ui::InputDialog *ui;
    QInputDialog *inputDialog;
};

#endif // INPUTDIALOG_H
