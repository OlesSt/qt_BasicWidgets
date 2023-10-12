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

    connect(ui->pushProgressBar,    SIGNAL(clicked(bool)), this, SLOT(OpenProgressBar()));
    connect(ui->pushSpinBox,        SIGNAL(clicked(bool)), this, SLOT(OpenSpinBox()));
    connect(ui->pushSlider,         SIGNAL(clicked(bool)), this, SLOT(OpenSlider()));
    connect(ui->pushRadioButton,    SIGNAL(clicked(bool)), this, SLOT(OpenRadioButton()));
    connect(ui->pushMessDialog,     SIGNAL(clicked(bool)), this, SLOT(OpenMessageDialog()));
    connect(ui->pushListWidget,     SIGNAL(clicked(bool)), this, SLOT(OpenListWidget()));
    connect(ui->pushLCD,            SIGNAL(clicked(bool)), this, SLOT(OpenLCDNumber()));
    connect(ui->pushInputDialog,    SIGNAL(clicked(bool)), this, SLOT(OpenInputDialog()));
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

    delete ui;
}

void MainWindow::OpenProgressBar()  { progressBar->show();}
void MainWindow::OpenSpinBox()      { spinBox->show();}
void MainWindow::OpenSlider()       { mySlider->show();}
void MainWindow::OpenRadioButton()  { radioButton->show();}
void MainWindow::OpenMessageDialog(){ messageDialog->show();}
void MainWindow::OpenListWidget()   { listWidget->show();}
void MainWindow::OpenLCDNumber()    { lcdNumber->show();}
void MainWindow::OpenInputDialog()  { inputDialog->show();}
