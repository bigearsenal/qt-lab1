#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    connect(ui->action, SIGNAL(triggered()), this, SLOT(About_Lab1()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    ui->calendarWidget->setFirstDayOfWeek(Qt::DayOfWeek(index+1));
}
