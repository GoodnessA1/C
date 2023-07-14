#!/bin/node

function add_two_nums(n1, n2) {
	let p = new Promise(function(resolve, reject) {
		if (n1 >= 0 && n2 >= 0) {
			resolve(n1 + n2);
		} else{
			reject("The numbers are negative");
		}
	})
	return p;
}

add_two_nums(10, 20)
	.then(successhandler)
	.catch(errorhandler);

add_two_nums(-10, 5)
	.then(successhandler)
	.catch(errorhandler)

function errorhandler(err) {
	console.log(`Handling Error: ${err}`)
}
function successhandler(result) {
	console.log(`Operation successful, result is: ${result}`)
}
