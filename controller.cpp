#include "controller.h"
#include <iostream>
#include <math.h>

Controller::Controller() : value{0}, result{0}, action{' '}, epsilon{10e-7} {}

void Controller::setvalue(long double _value) { value = _value; }

void Controller::setaction(char _action) { action = _action; }

void Controller::calculate(double _value) {
  switch (action) {
  case '/':
    result = value / _value;
    break;

  case '*':
    result = value * _value;
    break;

  case '-':
    result = value - _value;
    break;

  case '+':
    result = value + _value;
    break;

  default:
    result = -1;
    break;
  }
}

QString Controller::getresult() {
  QString retstring;
  if (abs(result - static_cast<int>(result)) < epsilon) {
    value = static_cast<int>(result);
    retstring = QString::number(static_cast<int>(result));
  } else {
    value = result;
    retstring = QString::number(value, 'g');
  }

  return retstring;
}
