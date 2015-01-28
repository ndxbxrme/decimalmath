var Chance = require('chance');
var chance = new Chance();
var dec = require('../build/Release/decimalmath.node');
var v1 = chance.floating({fixed:10, min:10, max:20});
var v2 = chance.floating({fixed:10, min:10, max:20});
var v3 = chance.floating({fixed:10, min:10, max:20});
console.log(v1, 'minus', v2, 'equals');
console.log('js', v1 - v2);
console.log('c++', dec.sub(v1, v2, 10));