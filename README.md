# decimalmath

decimal math for javascript  

### installation
for node  
`npm install --save decimalmath`
`var dec = require('decimalmath');`  
for the web  
`bower install --save decimalmath`

### usage
dec.sum( value1, value2, precision? )  
dec.add( value1, value2, precision? )  
dec.sub( value1, value2, precision? )  
dec.minus( value1, value2, precision? )  
dec.multiply( value1, value2, precision? )  
dec.divide( value1, value2, precision? )  
`precision defaults to 2, max 10`


uses [https://github.com/vpiotr/decimal_for_cpp](https://github.com/vpiotr/decimal_for_cpp)
