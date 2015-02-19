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
  int internalPrecision = 2;
  int externalPrecision = 2;
  
  if(args.Length() > 2) {
    if(args[2]->IsNumber()) {
      internalPrecision = args[2]->ToNumber()->IntegerValue(); 
      externalPrecision = internalPrecision;
    }
    else {
      if(args.Length() == 3) {
        ThrowException(Exception::TypeError(String::New("Precision must be a number")));
      }
      else {
        ThrowException(Exception::TypeError(String::New("Internal precision must be a number")));        
      }
      return scope.Close(Undefined());
    }
  }
  
  if(args.Length() > 3) {
    if(args[3]->IsNumber()) {
      externalPrecision = args[3]->ToNumber()->IntegerValue();
    }
    else {
      ThrowException(Exception::TypeError(String::New("External precision must be a number")));
      return scope.Close(Undefined());
    }
  }
  double arg0 = args[0]->ToNumber()->Value();
  double arg1 = args[1]->ToNumber()->Value();
  
  return scope.Close(Number::New(sum(arg0, arg1, internalPrecision, externalPrecision)));
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
  int internalPrecision = 2;
  int externalPrecision = 2;
  
  if(args.Length() > 2) {
    if(args[2]->IsNumber()) {
      internalPrecision = args[2]->ToNumber()->IntegerValue(); 
      externalPrecision = internalPrecision;
    }
    else {
      if(args.Length() == 3) {
        ThrowException(Exception::TypeError(String::New("Precision must be a number")));
      }
      else {
        ThrowException(Exception::TypeError(String::New("Internal precision must be a number")));        
      }
      return scope.Close(Undefined());
    }
  }
  
  if(args.Length() > 3) {
    if(args[3]->IsNumber()) {
      externalPrecision = args[3]->ToNumber()->IntegerValue();
    }
    else {
      ThrowException(Exception::TypeError(String::New("External precision must be a number")));
      return scope.Close(Undefined());
    }
  }
  double arg0 = args[0]->ToNumber()->Value();
  double arg1 = args[1]->ToNumber()->Value();
  
  return scope.Close(Number::New(sub(arg0, arg1, internalPrecision, externalPrecision)));
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
  int internalPrecision = 2;
  int externalPrecision = 2;
  
  if(args.Length() > 2) {
    if(args[2]->IsNumber()) {
      internalPrecision = args[2]->ToNumber()->IntegerValue(); 
      externalPrecision = internalPrecision;
    }
    else {
      if(args.Length() == 3) {
        ThrowException(Exception::TypeError(String::New("Precision must be a number")));
      }
      else {
        ThrowException(Exception::TypeError(String::New("Internal precision must be a number")));        
      }
      return scope.Close(Undefined());
    }
  }
  
  if(args.Length() > 3) {
    if(args[3]->IsNumber()) {
      externalPrecision = args[3]->ToNumber()->IntegerValue();
    }
    else {
      ThrowException(Exception::TypeError(String::New("External precision must be a number")));
      return scope.Close(Undefined());
    }
  }
  double arg0 = args[0]->ToNumber()->Value();
  double arg1 = args[1]->ToNumber()->Value();
  
  return scope.Close(Number::New(mult(arg0, arg1, internalPrecision, externalPrecision)));
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
  int internalPrecision = 2;
  int externalPrecision = 2;
  
  if(args.Length() > 2) {
    if(args[2]->IsNumber()) {
      internalPrecision = args[2]->ToNumber()->IntegerValue(); 
      externalPrecision = internalPrecision;
    }
    else {
      if(args.Length() == 3) {
        ThrowException(Exception::TypeError(String::New("Precision must be a number")));
      }
      else {
        ThrowException(Exception::TypeError(String::New("Internal precision must be a number")));        
      }
      return scope.Close(Undefined());
    }
  }
  
  if(args.Length() > 3) {
    if(args[3]->IsNumber()) {
      externalPrecision = args[3]->ToNumber()->IntegerValue();
    }
    else {
      ThrowException(Exception::TypeError(String::New("External precision must be a number")));
      return scope.Close(Undefined());
    }
  }
  double arg0 = args[0]->ToNumber()->Value();
  double arg1 = args[1]->ToNumber()->Value();
  
  return scope.Close(Number::New(div(arg0, arg1, internalPrecision, externalPrecision)));
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
NODE_MODULE(decimalmath, init);
