#include "../external/decimal_for_cpp/include/decimal.h"

using namespace dec;

namespace common {
  static double sum(double arg0, double arg1, int precision) {
    double out = 0;
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
    return out;
  }
  static double sub(double arg0, double arg1, int precision) {
    double out = 0;
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
    return out;
  }
  static double mult(double arg0, double arg1, int precision) {
    double out = 0;
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
    return out;
  }
  static double div(double arg0, double arg1, int precision) {
    double out = 0;
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
    return out;
  }
}