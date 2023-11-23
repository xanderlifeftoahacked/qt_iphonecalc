#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <QString>

class Controller {
public:
  Controller();
  void setvalue(long double _);
  void setaction(char _);
  void calculate(double _);
  QString getresult();

private:
  long double result;
  long double value;
  char action;
  long double epsilon;
};

#endif // CONTROLLER_H
