#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow{parent},
    ui{new Ui::MainWindow}
{
    ui->setupUi(this);
    this->resize(600, 600);

    progressBar     = new MyProgressBar();
    spinBox         = new SpinBox();
    mySlider        = new MySlider();
    radioButton     = new MyRadioButton();
    messageDialog   = new MessageDialog();
    listWidget      = new ListWidget();
    lcdNumber       = new LcdNumber();
    inputDialog     = new InputDialog();
    comboBox        = new ComboBox();
    checkBox        = new CheckBox();
    calendar        = new Calendar();
    lineEdit        = new LineEdit();
    table           = new Table();
    chart           = new Charts();

    animationState    = new AnimationState();
    animationProperty = new AnimationProperty();

    paintClock      = new PaintClock();
    dragDrop        = new DragDrop();
    diagram         = new Diagram();

    connect(ui->pushProgressBar,    SIGNAL(clicked(bool)), this, SLOT(OpenProgressBar()));
    connect(ui->pushSpinBox,        SIGNAL(clicked(bool)), this, SLOT(OpenSpinBox()));
    connect(ui->pushSlider,         SIGNAL(clicked(bool)), this, SLOT(OpenSlider()));
    connect(ui->pushRadioButton,    SIGNAL(clicked(bool)), this, SLOT(OpenRadioButton()));
    connect(ui->pushMessDialog,     SIGNAL(clicked(bool)), this, SLOT(OpenMessageDialog()));
    connect(ui->pushListWidget,     SIGNAL(clicked(bool)), this, SLOT(OpenListWidget()));
    connect(ui->pushLCD,            SIGNAL(clicked(bool)), this, SLOT(OpenLCDNumber()));
    connect(ui->pushInputDialog,    SIGNAL(clicked(bool)), this, SLOT(OpenInputDialog()));
    connect(ui->pushComboBox,       SIGNAL(clicked(bool)), this, SLOT(OpenComboBox()));
    connect(ui->pushCheckBox,       SIGNAL(clicked(bool)), this, SLOT(OpenCheckBox()));
    connect(ui->pushCalendar,       SIGNAL(clicked(bool)), this, SLOT(OpenCalendar()));
    connect(ui->pushLineEdit,       SIGNAL(clicked(bool)), this, SLOT(OpenLineEdit()));
    connect(ui->pushTable,          SIGNAL(clicked(bool)), this, SLOT(OpenTable()));
    connect(ui->pushAnimation,      SIGNAL(clicked(bool)), this, SLOT(OpenAnimationState()));
    connect(ui->pushAnimation_2,    SIGNAL(clicked(bool)), this, SLOT(OpenAnimationProperty()));
    connect(ui->pushChart,          SIGNAL(clicked(bool)), this, SLOT(OpenChart()));
    connect(ui->pushClock,          SIGNAL(clicked(bool)), this, SLOT(OpenPaintClock()));
    connect(ui->pushDragDrop,       SIGNAL(clicked(bool)), this, SLOT(OpenDragDrop()));
    connect(ui->pushDiagrams,       SIGNAL(clicked(bool)), this, SLOT(OpenDiagram()));
}

MainWindow::~MainWindow()
{
    delete progressBar;
    delete spinBox;
    delete mySlider;
    delete radioButton;
    delete messageDialog;
    delete listWidget;
    delete lcdNumber;
    delete inputDialog;
    delete checkBox;
    delete calendar;
    delete lineEdit;
    delete table;
    delete animationState;
    delete animationProperty;
    delete chart;
    delete paintClock;
    delete dragDrop;

    delete ui;
}

void MainWindow::OpenProgressBar()      { progressBar->show();}
void MainWindow::OpenSpinBox()          { spinBox->show();}
void MainWindow::OpenSlider()           { mySlider->show();}
void MainWindow::OpenRadioButton()      { radioButton->show();}
void MainWindow::OpenMessageDialog()    { messageDialog->show();}
void MainWindow::OpenListWidget()       { listWidget->show();}
void MainWindow::OpenLCDNumber()        { lcdNumber->show();}
void MainWindow::OpenInputDialog()      { inputDialog->show();}
void MainWindow::OpenComboBox()         { comboBox->show();}
void MainWindow::OpenCheckBox()         { checkBox->show();}
void MainWindow::OpenCalendar()         { calendar->show();}
void MainWindow::OpenLineEdit()         { lineEdit->show();}
void MainWindow::OpenTable()            { table->show();}
void MainWindow::OpenAnimationState()   { animationState->show();}
void MainWindow::OpenAnimationProperty(){ animationProperty->show();}
void MainWindow::OpenChart()            { chart->show();}
void MainWindow::OpenPaintClock()       { paintClock->show();}
void MainWindow::OpenDragDrop()         { dragDrop->show();}
void MainWindow::OpenDiagram()          { diagram->show();}
