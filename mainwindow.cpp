#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <string>
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::handleButton);

    this->refreshItems();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::refreshItems() {
    ui->listWidget->clear();

    for (const auto& label : this->items) {
        ui->listWidget->addItem(QString::fromStdString(label));
    }
}

void MainWindow::handleButton()
{
    auto text = ui->plainTextEdit->toPlainText().toStdString();
    if (text != "") {
        this->items.push_back(text);
        this->refreshItems();

        ui->plainTextEdit->clear();
    }
}

