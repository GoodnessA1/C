#!/bin/node

log = require('./3-do_something').doSomething

log(3, function () {
	console.log("Hello World");
})
