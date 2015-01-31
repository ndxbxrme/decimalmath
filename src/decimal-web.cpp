#include <emscripten/bind.h>
#include "decimal-common.h"

using namespace common;
using namespace emscripten;

double Sum(double arg0, double arg1) {
  return sum(arg0, arg1, 2);
}
double Sum(double arg0, double arg1, int precision) {
  return sum(arg0, arg1, precision);
}
double Sub(double arg0, double arg1) {
  return sub(arg0, arg1, 2);
}
double Sub(double arg0, double arg1, int precision) {
  return sub(arg0, arg1, precision);
}
double Mult(double arg0, double arg1) {
  return mult(arg0, arg1, 2);
}
double Mult(double arg0, double arg1, int precision) {
  return mult(arg0, arg1, precision);
}
double Div(double arg0, double arg1) {
  return div(arg0, arg1, 2);
}
double Div(double arg0, double arg1, int precision) {
  return div(arg0, arg1, precision);
}

EMSCRIPTEN_BINDINGS(decimalmath) {
  function("sum", select_overload<double(double,double)>(&Sum));
  function("sum", select_overload<double(double,double,int)>(&Sum));
  function("add", select_overload<double(double,double)>(&Sum));
  function("add", select_overload<double(double,double,int)>(&Sum));
  
  function("sub", select_overload<double(double,double)>(&Sub));
  function("sub", select_overload<double(double,double,int)>(&Sub));
  function("minus", select_overload<double(double,double)>(&Sub));
  function("minus", select_overload<double(double,double,int)>(&Sub));
  
  function("multiply", select_overload<double(double,double)>(&Mult));
  function("multiply", select_overload<double(double,double,int)>(&Mult));
  
  function("divide", select_overload<double(double,double)>(&Div));
  function("divide", select_overload<double(double,double,int)>(&Div));
}