#!/bin/node

exports.doSomething = function (a, func) {
	for ( i = 0; i < a; i++)
		func();
}
