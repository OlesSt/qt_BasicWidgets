#ifndef COMBOBOX_H
#define COMBOBOX_H

#include <QWidget>

namespace Ui {
class ComboBox;
}

class ComboBox : public QWidget
{
    Q_OBJECT

public:
    explicit ComboBox(QWidget *parent = nullptr);
    ~ComboBox();

public slots:
    void ChoosenItem();


private:
    Ui::ComboBox *ui;
};

#endif // COMBOBOX_H
