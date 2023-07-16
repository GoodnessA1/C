#!/bin/env node

var fs = require("fs");

fs.readFile('file.txt', function(err, data) {
	if (err) console.error(err);
	console.log(data.toString());
})
