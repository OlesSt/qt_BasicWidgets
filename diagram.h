#ifndef DIAGRAM_H
#define DIAGRAM_H

#include <QWidget>

namespace Ui {
class Diagram;
}

class Diagram : public QWidget
{
    Q_OBJECT

public:
    explicit Diagram(QWidget *parent = nullptr);
    ~Diagram();

private:
    Ui::Diagram *ui;
};

#endif // DIAGRAM_H
