var fs = require('fs');
console.log("Going to create directory in current directory");
fs.mkdir('K:\NMITD\SEM-1\NEW', function(err){
    if(err){
        return console.error(err);
    }
    console.log("Directory created successfully!");
});
