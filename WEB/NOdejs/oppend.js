var fs = require("fs");

console.log("Going to open file");
fs.open("newinput.txt", "w", function (err, f) {
  if (err) {
    return console.error(err);
  }
  console.log("File opened Successfully!");
});
