#include "../external/decimal_for_cpp/include/decimal.h"

using namespace dec;

namespace common {
  static double getExternal(double out, int internalPrecision, int externalPrecision) { 
    if(internalPrecision != externalPrecision) {
      if(externalPrecision==1) {
        decimal<1> ext(out);
        out = ext.getAsDouble();
      }
      else if(externalPrecision==2) {
        decimal<2> ext(out);
        out = ext.getAsDouble();
      }
      else if(externalPrecision==3) {
        decimal<3> ext(out);
        out = ext.getAsDouble();
      }
      else if(externalPrecision==4) {
        decimal<4> ext(out);
        out = ext.getAsDouble();
      }
      else if(externalPrecision==5) {
        decimal<5> ext(out);
        out = ext.getAsDouble();
      }
      else if(externalPrecision==6) {
        decimal<6> ext(out);
        out = ext.getAsDouble();
      }
      else if(externalPrecision==7) {
        decimal<7> ext(out);
        out = ext.getAsDouble();
      }
      else if(externalPrecision==8) {
        decimal<8> ext(out);
        out = ext.getAsDouble();
      }
      else if(externalPrecision==9) {
        decimal<9> ext(out);
        out = ext.getAsDouble();
      }
      else if(externalPrecision==10) {
        decimal<10> ext(out);
        out = ext.getAsDouble();
      }
    }
    return out;
  }
  static double sum(double arg0, double arg1, int internalPrecision, int externalPrecision) {
    double out = 0;
    if(internalPrecision==1) {
      decimal<1> dec0(arg0);
      decimal<1> dec1(arg1);
      decimal<1> value = dec0 + dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==2) {
      decimal<2> dec0(arg0);
      decimal<2> dec1(arg1);
      decimal<2> value = dec0 + dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==3) {
      decimal<3> dec0(arg0);
      decimal<3> dec1(arg1);
      decimal<3> value = dec0 + dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==4) {
      decimal<4> dec0(arg0);
      decimal<4> dec1(arg1);
      decimal<4> value = dec0 + dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==5) {
      decimal<5> dec0(arg0);
      decimal<5> dec1(arg1);
      decimal<5> value = dec0 + dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==6) {
      decimal<6> dec0(arg0);
      decimal<6> dec1(arg1);
      decimal<6> value = dec0 + dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==7) {
      decimal<7> dec0(arg0);
      decimal<7> dec1(arg1);
      decimal<7> value = dec0 + dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==8) {
      decimal<8> dec0(arg0);
      decimal<8> dec1(arg1);
      decimal<8> value = dec0 + dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==9) {
      decimal<9> dec0(arg0);
      decimal<9> dec1(arg1);
      decimal<9> value = dec0 + dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==10) {
      decimal<10> dec0(arg0);
      decimal<10> dec1(arg1);
      decimal<10> value = dec0 + dec1;
      out = value.getAsDouble();
    }
    return getExternal(out, internalPrecision, externalPrecision);
  }
  static double sub(double arg0, double arg1, int internalPrecision, int externalPrecision) {
    double out = 0;
    if(internalPrecision==1) {
      decimal<1> dec0(arg0);
      decimal<1> dec1(arg1);
      decimal<1> value = dec0 - dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==2) {
      decimal<2> dec0(arg0);
      decimal<2> dec1(arg1);
      decimal<2> value = dec0 - dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==3) {
      decimal<3> dec0(arg0);
      decimal<3> dec1(arg1);
      decimal<3> value = dec0 - dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==4) {
      decimal<4> dec0(arg0);
      decimal<4> dec1(arg1);
      decimal<4> value = dec0 - dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==5) {
      decimal<5> dec0(arg0);
      decimal<5> dec1(arg1);
      decimal<5> value = dec0 - dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==6) {
      decimal<6> dec0(arg0);
      decimal<6> dec1(arg1);
      decimal<6> value = dec0 - dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==7) {
      decimal<7> dec0(arg0);
      decimal<7> dec1(arg1);
      decimal<7> value = dec0 - dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==8) {
      decimal<8> dec0(arg0);
      decimal<8> dec1(arg1);
      decimal<8> value = dec0 - dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==9) {
      decimal<9> dec0(arg0);
      decimal<9> dec1(arg1);
      decimal<9> value = dec0 - dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==10) {
      decimal<10> dec0(arg0);
      decimal<10> dec1(arg1);
      decimal<10> value = dec0 - dec1;
      out = value.getAsDouble();
    }
    return getExternal(out, internalPrecision, externalPrecision);
  }
  static double mult(double arg0, double arg1, int internalPrecision, int externalPrecision) {
    double out = 0;
    if(internalPrecision==1) {
      decimal<1> dec0(arg0);
      decimal<1> dec1(arg1);
      decimal<1> value = dec0 * dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==2) {
      decimal<2> dec0(arg0);
      decimal<2> dec1(arg1);
      decimal<2> value = dec0 * dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==3) {
      decimal<3> dec0(arg0);
      decimal<3> dec1(arg1);
      decimal<3> value = dec0 * dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==4) {
      decimal<4> dec0(arg0);
      decimal<4> dec1(arg1);
      decimal<4> value = dec0 * dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==5) {
      decimal<5> dec0(arg0);
      decimal<5> dec1(arg1);
      decimal<5> value = dec0 * dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==6) {
      decimal<6> dec0(arg0);
      decimal<6> dec1(arg1);
      decimal<6> value = dec0 * dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==7) {
      decimal<7> dec0(arg0);
      decimal<7> dec1(arg1);
      decimal<7> value = dec0 * dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==8) {
      decimal<8> dec0(arg0);
      decimal<8> dec1(arg1);
      decimal<8> value = dec0 * dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==9) {
      decimal<9> dec0(arg0);
      decimal<9> dec1(arg1);
      decimal<9> value = dec0 * dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==10) {
      decimal<10> dec0(arg0);
      decimal<10> dec1(arg1);
      decimal<10> value = dec0 * dec1;
      out = value.getAsDouble();
    }
    return getExternal(out, internalPrecision, externalPrecision);
  }
  static double div(double arg0, double arg1, int internalPrecision, int externalPrecision) {
    double out = 0;
    if(internalPrecision==1) {
      decimal<1> dec0(arg0);
      decimal<1> dec1(arg1);
      decimal<1> value = dec0 / dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==2) {
      decimal<2> dec0(arg0);
      decimal<2> dec1(arg1);
      decimal<2> value = dec0 / dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==3) {
      decimal<3> dec0(arg0);
      decimal<3> dec1(arg1);
      decimal<3> value = dec0 / dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==4) {
      decimal<4> dec0(arg0);
      decimal<4> dec1(arg1);
      decimal<4> value = dec0 / dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==5) {
      decimal<5> dec0(arg0);
      decimal<5> dec1(arg1);
      decimal<5> value = dec0 / dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==6) {
      decimal<6> dec0(arg0);
      decimal<6> dec1(arg1);
      decimal<6> value = dec0 / dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==7) {
      decimal<7> dec0(arg0);
      decimal<7> dec1(arg1);
      decimal<7> value = dec0 / dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==8) {
      decimal<8> dec0(arg0);
      decimal<8> dec1(arg1);
      decimal<8> value = dec0 / dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==9) {
      decimal<9> dec0(arg0);
      decimal<9> dec1(arg1);
      decimal<9> value = dec0 / dec1;
      out = value.getAsDouble();
    }
    else if(internalPrecision==10) {
      decimal<10> dec0(arg0);
      decimal<10> dec1(arg1);
      decimal<10> value = dec0 / dec1;
      out = value.getAsDouble();
    }
    return getExternal(out, internalPrecision, externalPrecision);
  }
}