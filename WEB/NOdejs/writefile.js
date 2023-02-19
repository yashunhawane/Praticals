var fs = require('fs');

fs.writeFile('NewFile.txt', 'Hello World!', function(err){
    if(err){
        console.log(err);
    }else{
        console.log('Write operation complete.');
    }
})
