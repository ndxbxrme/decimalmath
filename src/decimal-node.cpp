#include <node.h>
#include <v8.h>
#include <iostream>
#include "decimal-common.h"

using namespace v8;
using namespace common;

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
  int precision = 2;
  
  if(args.Length() > 2) {
    if(args[2]->IsNumber()) {
      precision = args[2]->ToNumber()->IntegerValue(); 
    }
    else {
      ThrowException(Exception::TypeError(String::New("Precision must be a number")));
      return scope.Close(Undefined());
    }
  }
  double arg0 = args[0]->ToNumber()->Value();
  double arg1 = args[1]->ToNumber()->Value();
  
  return scope.Close(Number::New(sum(arg0, arg1, precision)));
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
  int precision = 2;
  
  if(args.Length() > 2) {
    if(args[2]->IsNumber()) {
      precision = args[2]->ToNumber()->IntegerValue(); 
    }
    else {
      ThrowException(Exception::TypeError(String::New("Precision must be a number")));
      return scope.Close(Undefined());
    }
  }
  double arg0 = args[0]->ToNumber()->Value();
  double arg1 = args[1]->ToNumber()->Value();
  
  return scope.Close(Number::New(sub(arg0, arg1, precision)));
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
  int precision = 2;
  
  if(args.Length() > 2) {
    if(args[2]->IsNumber()) {
      precision = args[2]->ToNumber()->IntegerValue(); 
    }
    else {
      ThrowException(Exception::TypeError(String::New("Precision must be a number")));
      return scope.Close(Undefined());
    }
  }
  double arg0 = args[0]->ToNumber()->Value();
  double arg1 = args[1]->ToNumber()->Value();
  
  return scope.Close(Number::New(mult(arg0, arg1, precision)));
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
  int precision = 2;
  
  if(args.Length() > 2) {
    if(args[2]->IsNumber()) {
      precision = args[2]->ToNumber()->IntegerValue(); 
    }
    else {
      ThrowException(Exception::TypeError(String::New("Precision must be a number")));
      return scope.Close(Undefined());
    }
  }
  double arg0 = args[0]->ToNumber()->Value();
  double arg1 = args[1]->ToNumber()->Value();
  
  return scope.Close(Number::New(div(arg0, arg1, precision)));
}

void init(Handle<Object> target) {
  
  target->Set(String::NewSymbol("sum"),
      FunctionTemplate::New(Sum)->GetFunction());
  
  target->Set(String::NewSymbol("sub"),
      FunctionTemplate::New(Sub)->GetFunction());
  
  target->Set(String::NewSymbol("multiply"),
      FunctionTemplate::New(Mult)->GetFunction());
  
  target->Set(String::NewSymbol("divide"),
      FunctionTemplate::New(Div)->GetFunction());
}
NODE_MODULE(decimalmath, init);
