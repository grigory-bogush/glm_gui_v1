#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::handleButton);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleButton()
{
    std::string text = std::string{"Clicked "};
    std::string str = std::to_string(this->counter);
    std::string label = text + str;

    ui->pushButton->setText(QString::fromStdString(label));
    ++this->counter;
}

