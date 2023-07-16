#!/bin/env node

var http = require("http");

http.createServer(function (request, response) {
	response.writeHead(200, {'content-type': 'text/plain'});
	response.end("Hello World\n");
}).listen(5000);

console.log("Server Running on http://127.0.0.1:5000");
