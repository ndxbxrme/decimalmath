# decimalmath

decimal math for javascript  
for the times that `17.94 - 16.04 = 1.9000000000000021` isn't good enough  
eg. currency calculations

### installation
for node  
`npm install --save decimalmath`  
`var dec = require('decimalmath');`  
for the web  
`bower install --save decimalmath`  

### usage
dec.sum( value1, value2, precision?, externalPrecision? )  
dec.add( value1, value2, precision?, externalPrecision? )  
dec.sub( value1, value2, precision?, externalPrecision? )  
dec.minus( value1, value2, precision?, externalPrecision? )  
dec.multiply( value1, value2, precision?, externalPrecision? )  
dec.divide( value1, value2, precision?, externalPrecision? )  
`precision defaults to 2, max 10`

###eg
dec.sum(18.95, 14.28) = 33.23  
dec.sum(13.2525, 14.0837, 4) = 27.3362  
dec.sum(10.2464, 17.8059, 4, 2) = 28.05  
  
dec.sub(12.08, 16.95) = -4.87  
dec.sub(17.6833, 13.3624, 4) = 4.3209  
dec.sub(14.75, 13.1328, 4, 2) = 1.62  
  
dec.multiply(19.45, 18.21) = 354.18  
dec.multiply(17.0922, 15.7445, 4) = 269.1081  
dec.multiply(11.7909, 18.5525, 4, 2) = 218.75  
  
dec.divide(10.1, 14.04) = 0.72  
dec.divide(16.0716, 12.1446, 4) = 1.3234  
dec.divide(11.5976, 17.2487, 4, 2) = 0.67    
  
uses [https://github.com/vpiotr/decimal_for_cpp](https://github.com/vpiotr/decimal_for_cpp) under the hood  
compiled for the web with [emscripten](http://kripken.github.io/emscripten-site/index.html)
