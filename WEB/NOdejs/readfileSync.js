var fs = require('fs');
var data = fs.readFileSync('INPUT.txt');
console.log("Synchronous read: " + data.toString());
