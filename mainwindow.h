#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "myprogressbar.h"
#include "spinbox.h"
#include "myslider.h"
#include "myradiobutton.h"
#include "messagedialog.h"
#include "listwidget.h"
#include "lcdnumber.h"
#include "inputdialog.h"
#include "combobox.h"
#include "checkbox.h"
#include "calendar.h"
#include "lineedit.h"
#include "table.h"
#include "animationstate.h"
#include "animationproperty.h"

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
    void OpenMessageDialog();
    void OpenListWidget();
    void OpenLCDNumber();
    void OpenInputDialog();
    void OpenComboBox();
    void OpenCheckBox();
    void OpenCalendar();
    void OpenLineEdit();
    void OpenTable();
    void OpenAnimationState();
    void OpenAnimationProperty();

private:
    Ui::MainWindow  *ui;
    MyProgressBar   *progressBar;
    SpinBox         *spinBox;
    MySlider        *mySlider;
    MyRadioButton   *radioButton;
    MessageDialog   *messageDialog;
    ListWidget      *listWidget;
    LcdNumber       *lcdNumber;
    InputDialog     *inputDialog;
    ComboBox        *comboBox;
    CheckBox        *checkBox;
    Calendar        *calendar;
    LineEdit        *lineEdit;
    Table           *table;

    AnimationState      *animationState;
    AnimationProperty   *animationProperty;


};

#endif // MAINWINDOW_H
