#include "mainwindow.h"
#include "constants.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), shownData(""), controller{},
      numericbuttons{ui->button_num0, ui->button_num1, ui->button_num3,
                     ui->button_num3, ui->button_num4, ui->button_num5,
                     ui->button_num6, ui->button_num7, ui->button_num8,
                     ui->button_num9} {
  ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }
