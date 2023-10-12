#ifndef MESSAGEDIALOG_H
#define MESSAGEDIALOG_H

#include <QWidget>
#include <QMessageBox>

namespace Ui {
class MessageDialog;
}

class MessageDialog : public QWidget
{
    Q_OBJECT

public:
    explicit MessageDialog(QWidget *parent = nullptr);
    ~MessageDialog();

public slots:
    void setMssg();
    void setInfo();
    void setAbout();

private:
    Ui::MessageDialog *ui;
};

#endif // MESSAGEDIALOG_H
