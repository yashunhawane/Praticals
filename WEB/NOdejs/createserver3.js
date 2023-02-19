var http = require("http");

var server = http.createServer(function (req, res) {
    if (req.url == "/") {
    res.writeHead(200, { "Content-Type": "text/html" });
    res.write("<html><body><h2>This is Home/Main page</h2></body></html>");
    res.end();
  } 
  
  else if (req.url == "/about") {
    res.writeHead(200, { "Content-Type": "text/html" });
    res.write("<html><body><h2>This is About US page</h2></body></html>");
    res.end();
  }

   else if (req.url == "/contact") {
    res.writeHead(200, { "Content-Type": "text/html" });
    res.write("<html><body><h2>This is Contact US page</h2></body></html>");
    res.end();
  }
  
  else {
    res.end("Invalid Request!");
  }

});
server.listen(8050);
console.log("NodeJS web server is running at port 8050");
