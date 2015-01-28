#include <node.h>
#include <v8.h>
#include <iostream>
#include "decimal.h"


using namespace v8;
using namespace dec;

Handle<Value> Sum(const Arguments& args) {
  HandleScope scope;
  
  if(args.Length() < 2) {
    ThrowException(Exception::TypeError(String::New("Wrong number of arguments")));
    return scope.Close(Undefined());
  }
  
  if(!args[0]->IsNumber() || !args[1]->IsNumber()) {
    ThrowException(Exception::TypeError(String::New("Wrong argument type")));
    return scope.Close(Undefined());
  }
  int precision = 3;
  std::cout << precision;
  if(args.Length() > 2) {
    if(args[2]->IsNumber()) {
      precision = args[2]->ToNumber()->IntegerValue(); 
    }
    else {
      ThrowException(Exception::TypeError(String::New("Precision must be a number")));
      return scope.Close(Undefined());
    }
  }
  double out = 0;
  double arg0 = args[0]->ToNumber()->Value();
  double arg1 = args[1]->ToNumber()->Value();
  
  if(precision==1) {
    decimal<1> dec0(arg0);
    decimal<1> dec1(arg1);
    decimal<1> value = dec0 + dec1;
    out = value.getAsDouble();
  }
  else if(precision==2) {
    decimal<2> dec0(arg0);
    decimal<2> dec1(arg1);
    decimal<2> value = dec0 + dec1;
    out = value.getAsDouble();
  }
  else if(precision==3) {
    decimal<3> dec0(arg0);
    decimal<3> dec1(arg1);
    decimal<3> value = dec0 + dec1;
    out = value.getAsDouble();
  }
  else if(precision==4) {
    decimal<4> dec0(arg0);
    decimal<4> dec1(arg1);
    decimal<4> value = dec0 + dec1;
    out = value.getAsDouble();
  }
  else if(precision==5) {
    decimal<5> dec0(arg0);
    decimal<5> dec1(arg1);
    decimal<5> value = dec0 + dec1;
    out = value.getAsDouble();
  }
  else if(precision==6) {
    decimal<6> dec0(arg0);
    decimal<6> dec1(arg1);
    decimal<6> value = dec0 + dec1;
    out = value.getAsDouble();
  }
  else if(precision==7) {
    decimal<7> dec0(arg0);
    decimal<7> dec1(arg1);
    decimal<7> value = dec0 + dec1;
    out = value.getAsDouble();
  }
  else if(precision==8) {
    decimal<8> dec0(arg0);
    decimal<8> dec1(arg1);
    decimal<8> value = dec0 + dec1;
    out = value.getAsDouble();
  }
  else if(precision==9) {
    decimal<9> dec0(arg0);
    decimal<9> dec1(arg1);
    decimal<9> value = dec0 + dec1;
    out = value.getAsDouble();
  }
  else if(precision==10) {
    decimal<10> dec0(arg0);
    decimal<10> dec1(arg1);
    decimal<10> value = dec0 + dec1;
    out = value.getAsDouble();
  }
  return scope.Close(Number::New(out));
}

Handle<Value> Sub(const Arguments& args) {
  HandleScope scope;
  
  if(args.Length() < 2) {
    ThrowException(Exception::TypeError(String::New("Wrong number of arguments")));
    return scope.Close(Undefined());
  }
  
  if(!args[0]->IsNumber() || !args[1]->IsNumber()) {
    ThrowException(Exception::TypeError(String::New("Wrong argument type")));
    return scope.Close(Undefined());
  }
  int precision = 3;
  std::cout << precision;
  if(args.Length() > 2) {
    if(args[2]->IsNumber()) {
      precision = args[2]->ToNumber()->IntegerValue(); 
    }
    else {
      ThrowException(Exception::TypeError(String::New("Precision must be a number")));
      return scope.Close(Undefined());
    }
  }
  double out = 0;
  double arg0 = args[0]->ToNumber()->Value();
  double arg1 = args[1]->ToNumber()->Value();
  
  if(precision==1) {
    decimal<1> dec0(arg0);
    decimal<1> dec1(arg1);
    decimal<1> value = dec0 - dec1;
    out = value.getAsDouble();
  }
  else if(precision==2) {
    decimal<2> dec0(arg0);
    decimal<2> dec1(arg1);
    decimal<2> value = dec0 - dec1;
    out = value.getAsDouble();
  }
  else if(precision==3) {
    decimal<3> dec0(arg0);
    decimal<3> dec1(arg1);
    decimal<3> value = dec0 - dec1;
    out = value.getAsDouble();
  }
  else if(precision==4) {
    decimal<4> dec0(arg0);
    decimal<4> dec1(arg1);
    decimal<4> value = dec0 - dec1;
    out = value.getAsDouble();
  }
  else if(precision==5) {
    decimal<5> dec0(arg0);
    decimal<5> dec1(arg1);
    decimal<5> value = dec0 - dec1;
    out = value.getAsDouble();
  }
  else if(precision==6) {
    decimal<6> dec0(arg0);
    decimal<6> dec1(arg1);
    decimal<6> value = dec0 - dec1;
    out = value.getAsDouble();
  }
  else if(precision==7) {
    decimal<7> dec0(arg0);
    decimal<7> dec1(arg1);
    decimal<7> value = dec0 - dec1;
    out = value.getAsDouble();
  }
  else if(precision==8) {
    decimal<8> dec0(arg0);
    decimal<8> dec1(arg1);
    decimal<8> value = dec0 - dec1;
    out = value.getAsDouble();
  }
  else if(precision==9) {
    decimal<9> dec0(arg0);
    decimal<9> dec1(arg1);
    decimal<9> value = dec0 - dec1;
    out = value.getAsDouble();
  }
  else if(precision==10) {
    decimal<10> dec0(arg0);
    decimal<10> dec1(arg1);
    decimal<10> value = dec0 - dec1;
    out = value.getAsDouble();
  }
  return scope.Close(Number::New(out));
}

Handle<Value> Mult(const Arguments& args) {
  HandleScope scope;
  
  if(args.Length() < 2) {
    ThrowException(Exception::TypeError(String::New("Wrong number of arguments")));
    return scope.Close(Undefined());
  }
  
  if(!args[0]->IsNumber() || !args[1]->IsNumber()) {
    ThrowException(Exception::TypeError(String::New("Wrong argument type")));
    return scope.Close(Undefined());
  }
  int precision = 3;
  std::cout << precision;
  if(args.Length() > 2) {
    if(args[2]->IsNumber()) {
      precision = args[2]->ToNumber()->IntegerValue(); 
    }
    else {
      ThrowException(Exception::TypeError(String::New("Precision must be a number")));
      return scope.Close(Undefined());
    }
  }
  double out = 0;
  double arg0 = args[0]->ToNumber()->Value();
  double arg1 = args[1]->ToNumber()->Value();
  
  if(precision==1) {
    decimal<1> dec0(arg0);
    decimal<1> dec1(arg1);
    decimal<1> value = dec0 * dec1;
    out = value.getAsDouble();
  }
  else if(precision==2) {
    decimal<2> dec0(arg0);
    decimal<2> dec1(arg1);
    decimal<2> value = dec0 * dec1;
    out = value.getAsDouble();
  }
  else if(precision==3) {
    decimal<3> dec0(arg0);
    decimal<3> dec1(arg1);
    decimal<3> value = dec0 * dec1;
    out = value.getAsDouble();
  }
  else if(precision==4) {
    decimal<4> dec0(arg0);
    decimal<4> dec1(arg1);
    decimal<4> value = dec0 * dec1;
    out = value.getAsDouble();
  }
  else if(precision==5) {
    decimal<5> dec0(arg0);
    decimal<5> dec1(arg1);
    decimal<5> value = dec0 * dec1;
    out = value.getAsDouble();
  }
  else if(precision==6) {
    decimal<6> dec0(arg0);
    decimal<6> dec1(arg1);
    decimal<6> value = dec0 * dec1;
    out = value.getAsDouble();
  }
  else if(precision==7) {
    decimal<7> dec0(arg0);
    decimal<7> dec1(arg1);
    decimal<7> value = dec0 * dec1;
    out = value.getAsDouble();
  }
  else if(precision==8) {
    decimal<8> dec0(arg0);
    decimal<8> dec1(arg1);
    decimal<8> value = dec0 * dec1;
    out = value.getAsDouble();
  }
  else if(precision==9) {
    decimal<9> dec0(arg0);
    decimal<9> dec1(arg1);
    decimal<9> value = dec0 * dec1;
    out = value.getAsDouble();
  }
  else if(precision==10) {
    decimal<10> dec0(arg0);
    decimal<10> dec1(arg1);
    decimal<10> value = dec0 * dec1;
    out = value.getAsDouble();
  }
  return scope.Close(Number::New(out));
}

Handle<Value> Div(const Arguments& args) {
  HandleScope scope;
  
  if(args.Length() < 2) {
    ThrowException(Exception::TypeError(String::New("Wrong number of arguments")));
    return scope.Close(Undefined());
  }
  
  if(!args[0]->IsNumber() || !args[1]->IsNumber()) {
    ThrowException(Exception::TypeError(String::New("Wrong argument type")));
    return scope.Close(Undefined());
  }
  int precision = 3;
  std::cout << precision;
  if(args.Length() > 2) {
    if(args[2]->IsNumber()) {
      precision = args[2]->ToNumber()->IntegerValue(); 
    }
    else {
      ThrowException(Exception::TypeError(String::New("Precision must be a number")));
      return scope.Close(Undefined());
    }
  }
  double out = 0;
  double arg0 = args[0]->ToNumber()->Value();
  double arg1 = args[1]->ToNumber()->Value();
  
  if(precision==1) {
    decimal<1> dec0(arg0);
    decimal<1> dec1(arg1);
    decimal<1> value = dec0 / dec1;
    out = value.getAsDouble();
  }
  else if(precision==2) {
    decimal<2> dec0(arg0);
    decimal<2> dec1(arg1);
    decimal<2> value = dec0 / dec1;
    out = value.getAsDouble();
  }
  else if(precision==3) {
    decimal<3> dec0(arg0);
    decimal<3> dec1(arg1);
    decimal<3> value = dec0 / dec1;
    out = value.getAsDouble();
  }
  else if(precision==4) {
    decimal<4> dec0(arg0);
    decimal<4> dec1(arg1);
    decimal<4> value = dec0 / dec1;
    out = value.getAsDouble();
  }
  else if(precision==5) {
    decimal<5> dec0(arg0);
    decimal<5> dec1(arg1);
    decimal<5> value = dec0 / dec1;
    out = value.getAsDouble();
  }
  else if(precision==6) {
    decimal<6> dec0(arg0);
    decimal<6> dec1(arg1);
    decimal<6> value = dec0 / dec1;
    out = value.getAsDouble();
  }
  else if(precision==7) {
    decimal<7> dec0(arg0);
    decimal<7> dec1(arg1);
    decimal<7> value = dec0 / dec1;
    out = value.getAsDouble();
  }
  else if(precision==8) {
    decimal<8> dec0(arg0);
    decimal<8> dec1(arg1);
    decimal<8> value = dec0 / dec1;
    out = value.getAsDouble();
  }
  else if(precision==9) {
    decimal<9> dec0(arg0);
    decimal<9> dec1(arg1);
    decimal<9> value = dec0 / dec1;
    out = value.getAsDouble();
  }
  else if(precision==10) {
    decimal<10> dec0(arg0);
    decimal<10> dec1(arg1);
    decimal<10> value = dec0 / dec1;
    out = value.getAsDouble();
  }
  return scope.Close(Number::New(out));
}

void init(Handle<Object> target) {
  
  target->Set(String::NewSymbol("sum"),
      FunctionTemplate::New(Sum)->GetFunction());
  target->Set(String::NewSymbol("add"),
      FunctionTemplate::New(Sum)->GetFunction());
  
  target->Set(String::NewSymbol("sub"),
      FunctionTemplate::New(Sub)->GetFunction());
  target->Set(String::NewSymbol("minus"),
      FunctionTemplate::New(Sub)->GetFunction());
  
  target->Set(String::NewSymbol("multiply"),
      FunctionTemplate::New(Mult)->GetFunction());
  
  target->Set(String::NewSymbol("divide"),
      FunctionTemplate::New(Div)->GetFunction());
}
NODE_MODULE(decimalmath, init)