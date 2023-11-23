#include "constants.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::on_button_num0_pressed() {
  ui->button_num0->setStyleSheet(stylesheets::numericPressed +
                                 "padding-right: 85px;");
}

void MainWindow::on_button_num0_released() {
  ui->button_num0->setStyleSheet(stylesheets::numericReleased +
                                 "padding-right: 85px;");
  shownData += "0";
  ui->label->setText(shownData);
  ui->label->setAlignment(Qt::AlignRight);
}

void MainWindow::on_button_num1_pressed() {
  ui->button_num1->setStyleSheet(stylesheets::numericPressed);
}

void MainWindow::on_button_num1_released() {
  ui->button_num1->setStyleSheet(stylesheets::numericReleased);
  shownData += "1";
  ui->label->setText(shownData);
  ui->label->setAlignment(Qt::AlignRight);
}

void MainWindow::on_button_num2_pressed() {
  ui->button_num2->setStyleSheet(stylesheets::numericPressed);
}
void MainWindow::on_button_num2_released() {
  ui->button_num2->setStyleSheet(stylesheets::numericReleased);
  shownData += "2";
  ui->label->setText(shownData);
  ui->label->setAlignment(Qt::AlignRight);
}

void MainWindow::on_button_num3_pressed() {
  ui->button_num3->setStyleSheet(stylesheets::numericPressed);
}
void MainWindow::on_button_num3_released() {
  ui->button_num3->setStyleSheet(stylesheets::numericReleased);
  shownData += "3";
  ui->label->setText(shownData);
  ui->label->setAlignment(Qt::AlignRight);
}

void MainWindow::on_button_num4_pressed() {
  ui->button_num4->setStyleSheet(stylesheets::numericPressed);
}
void MainWindow::on_button_num4_released() {
  ui->button_num4->setStyleSheet(stylesheets::numericReleased);
  shownData += "4";
  ui->label->setText(shownData);
  ui->label->setAlignment(Qt::AlignRight);
}

void MainWindow::on_button_num5_pressed() {
  ui->button_num5->setStyleSheet(stylesheets::numericPressed);
}
void MainWindow::on_button_num5_released() {
  ui->button_num5->setStyleSheet(stylesheets::numericReleased);
  shownData += "5";
  ui->label->setText(shownData);
  ui->label->setAlignment(Qt::AlignRight);
}

void MainWindow::on_button_num6_pressed() {
  ui->button_num6->setStyleSheet(stylesheets::numericPressed);
}
void MainWindow::on_button_num6_released() {
  ui->button_num6->setStyleSheet(stylesheets::numericReleased);
  shownData += "6";
  ui->label->setText(shownData);
  ui->label->setAlignment(Qt::AlignRight);
}

void MainWindow::on_button_num7_pressed() {
  ui->button_num7->setStyleSheet(stylesheets::numericPressed);
}
void MainWindow::on_button_num7_released() {
  ui->button_num7->setStyleSheet(stylesheets::numericReleased);
  shownData += "7";
  ui->label->setText(shownData);
  ui->label->setAlignment(Qt::AlignRight);
}

void MainWindow::on_button_num8_pressed() {
  ui->button_num8->setStyleSheet(stylesheets::numericPressed);
}
void MainWindow::on_button_num8_released() {
  ui->button_num8->setStyleSheet(stylesheets::numericReleased);
  shownData += "8";
  ui->label->setText(shownData);
  ui->label->setAlignment(Qt::AlignRight);
}

void MainWindow::on_button_num9_pressed() {
  ui->button_num9->setStyleSheet(stylesheets::numericPressed);
}
void MainWindow::on_button_num9_released() {
  ui->button_num9->setStyleSheet(stylesheets::numericReleased);
  shownData += "9";
  ui->label->setText(shownData);
  ui->label->setAlignment(Qt::AlignRight);
}

void MainWindow::on_button_comma_pressed() {
  ui->button_comma->setStyleSheet(stylesheets::numericPressed);
}
void MainWindow::on_button_comma_released() {
  ui->button_comma->setStyleSheet(stylesheets::numericReleased);
  shownData += '.';
  ui->label->setText(shownData);
}
