var http = require('http');
var server = http.createServer(function(req, res){
    if(req.url == '/'){
        res.writeHead(200, {'Content-Type': 'text/html'});
        res.write('<html><body><h1>This is Home Page.</h1></body></html>');
    }else{
        res.end('Invalid Request');
    }
});
server.listen(8080);
console.log('NodeJS web server is running at port 8080');
