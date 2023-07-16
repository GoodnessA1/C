var events = require("events");

eventEmitter = new events.EventEmitter();

var connHandler = function connect() {
	console.log("Connection Established");
}

eventEmitter.on('conn', connHandler);
eventEmitter.emit('conn');
