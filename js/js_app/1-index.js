var events = require("events");

var eventEmitter = new events.EventEmitter();

var listener1 = function listener1() {
	console.log("Listener 1 connected")
}

var listener2 = function listener2() {
	console.log("Listener 2 connected");
}

eventEmitter.on('connection', listener1);
eventEmitter.addListener('connection', listener2);

eventEmitter.emit('connection');

eventEmitter.removeListener('connection', listener2);
console.log('Listener 2 removed');
eventEmitter.emit('connection');

var eventCounter = require('events').EventEmitter.listenerCount(eventEmitter, 'connection')

console.log(eventCounter);
