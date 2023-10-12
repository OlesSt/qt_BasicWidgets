#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow{parent},
    ui{new Ui::MainWindow}
{
    ui->setupUi(this);
    this->resize(600, 600);

    progressBar = new MyProgressBar();
    spinBox = new SpinBox();
    mySlider = new MySlider();
    radioButton = new MyRadioButton();
    messageDialog = new MessageDialog();

    connect(ui->pushProgressBar,    SIGNAL(clicked(bool)), this, SLOT(OpenProgressBar()));
    connect(ui->pushSpinBox,        SIGNAL(clicked(bool)), this, SLOT(OpenSpinBox()));
    connect(ui->pushSlider,         SIGNAL(clicked(bool)), this, SLOT(OpenSlider()));
    connect(ui->pushRadioButton,    SIGNAL(clicked(bool)), this, SLOT(OpenRadioButton()));
    connect(ui->pushMessDialog,     SIGNAL(clicked(bool)), this, SLOT(OpenMessageDialog()));
}

MainWindow::~MainWindow()
{
    delete progressBar;
    delete spinBox;
    delete ui;
}

void MainWindow::OpenProgressBar()  { progressBar->show();}
void MainWindow::OpenSpinBox()      { spinBox->show();}
void MainWindow::OpenSlider()       { mySlider->show();}
void MainWindow::OpenRadioButton()  { radioButton->show();}
void MainWindow::OpenMessageDialog(){ messageDialog->show();}
