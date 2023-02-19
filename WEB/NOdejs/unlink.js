var fs = require('fs');

fs.unlink('NewAppend.txt', function(){
    console.log('Delete operation complete.');
});
