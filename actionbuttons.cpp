#include "constants.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::clear_data() {
  controller.setvalue(shownData.toDouble());
  shownData.clear();
  ui->button_division->setStyleSheet(stylesheets::actionReleased);
  ui->button_multiplication->setStyleSheet(stylesheets::actionReleased);
  ui->button_subtraction->setStyleSheet(stylesheets::actionReleased);
  ui->pushButton_addition->setStyleSheet(stylesheets::actionReleased);
}

void MainWindow::on_button_division_pressed() {
  ui->button_division->setStyleSheet(stylesheets::actionPressed);
  controller.setaction('/');

  //  for (auto button : numericbuttons) {
  //    button->setDisabled(0);
  //  }
}

void MainWindow::on_button_division_released() { clear_data(); }

void MainWindow::on_button_result_pressed() {
  ui->button_result->setStyleSheet(stylesheets::actionPressed);
}

void MainWindow::on_button_result_released() {
  controller.calculate(shownData.toDouble());
  ui->button_result->setStyleSheet(stylesheets::actionReleased);
  shownData = controller.getresult();
  ui->label->setText(shownData);

  //  for (auto button : numericbuttons) {
  //    button->setDisabled(1);
  //  }
}

void MainWindow::on_button_multiplication_pressed() {
  ui->button_multiplication->setStyleSheet(stylesheets::actionPressed);
  controller.setaction('*');
}

void MainWindow::on_button_multiplication_released() { clear_data(); }

void MainWindow::on_button_subtraction_pressed() {
  ui->button_subtraction->setStyleSheet(stylesheets::actionPressed);
  controller.setaction('-');
}

void MainWindow::on_button_subtraction_released() { clear_data(); }

void MainWindow::on_pushButton_addition_pressed() {
  ui->pushButton_addition->setStyleSheet(stylesheets::actionPressed);
  controller.setaction('+');
}

void MainWindow::on_pushButton_addition_released() { clear_data(); }
void MainWindow::on_button_AC_pressed() {
  ui->button_AC->setStyleSheet(stylesheets::acPressed);
}

void MainWindow::on_button_AC_released() {
  shownData.clear();
  controller.setvalue(0.f);
  ui->button_AC->setStyleSheet(stylesheets::acReleased);
  ui->label->setText(shownData);
}
