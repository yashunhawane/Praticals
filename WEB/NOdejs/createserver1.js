var http = require('http');
var server = http.createServer(function (req, res)
{
    res.write("Hello, Server!");
    res.end();
});
server.listen(8000);
console.log('Node.js web server is running at port 8000');
