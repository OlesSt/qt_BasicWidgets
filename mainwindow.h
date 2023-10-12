#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "myprogressbar.h"
#include "spinbox.h"
#include "myslider.h"
#include "myradiobutton.h"

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
    void OpenSlider();
    void OpenRadioButton();

private:
    Ui::MainWindow *ui;
    MyProgressBar *progressBar;
    SpinBox *spinBox;
    MySlider *mySlider;
    MyRadioButton *radioButton;
};

#endif // MAINWINDOW_H
