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

    connect(ui->pushProgressBar,    SIGNAL(clicked(bool)), this, SLOT(OpenProgressBar()));
    connect(ui->pushSpinBox,        SIGNAL(clicked(bool)), this, SLOT(OpenSpinBox()));

}

MainWindow::~MainWindow()
{
    delete progressBar;
    delete spinBox;
    delete ui;
}

void MainWindow::OpenProgressBar()  { progressBar->show();}
void MainWindow::OpenSpinBox()      { spinBox->show();}
