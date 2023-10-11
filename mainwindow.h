#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "myprogressbar.h"
#include "spinbox.h"

QT_BEGIN_NAMESPACE
namespace Ui {class MainWindow;}
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void OpenProgressBar();
    void OpenSpinBox();

private:
    Ui::MainWindow *ui;
    MyProgressBar *progressBar;
    SpinBox *spinBox;
};

#endif // MAINWINDOW_H
