#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "controller.h"
#include <QMainWindow>
#include <QMap>
#include <QPushButton>
#include <QString>
#include <vector>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

private slots:

  void on_button_num7_pressed();

  void on_button_num7_released();

  void on_button_num2_pressed();

  void on_button_num0_pressed();

  void on_button_num0_released();

  void on_button_num1_pressed();

  void on_button_num1_released();

  void on_button_num8_pressed();

  void on_button_num9_pressed();

  void on_button_num9_released();

  void on_button_num6_pressed();

  void on_button_num6_released();

  void on_button_num5_pressed();

  void on_button_num5_released();

  void on_button_num4_pressed();

  void on_button_num4_released();

  void on_button_num3_pressed();

  void on_button_num3_released();

  void on_button_num2_released();

  void on_button_num8_released();

  void on_button_division_pressed();

  void on_button_division_released();

  void on_button_result_pressed();

  void on_button_result_released();

  void on_button_AC_pressed();

  void on_button_AC_released();

  void on_button_multiplication_pressed();

  void on_button_multiplication_released();

  void on_button_subtraction_pressed();

  void on_pushButton_addition_released();

  void clear_data();

  void on_button_subtraction_released();

  void on_pushButton_addition_pressed();

  void on_button_comma_pressed();

  void on_button_comma_released();

private:
  QString shownData;
  Controller controller;
  std::vector<QPushButton *> numericbuttons;
  Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
