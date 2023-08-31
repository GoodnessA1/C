/**
 * function submitForm() {
	var name = document.theform.name.value;
	var password = document.theform.password.value;

	fetch("http://127.0.0.1:5000", {
		method: 'POST',
		headers: {
			Content-Type: 'application/json'
		},

		body: JSON.stringify({
			name: name,
			password: password
		})
	})

		.then(response => response.json())
		.then(data => console.log(data))
		.catch(error => console.log(error))
}
console.log(name + " " +  password)
*/
fetch('http://127.0.0.1:5000', {
	method: 'POST',
	body: JSON.stringify({
		name: 'Goodness',
		password: 17
	}),
	headers: {
		"Content-Type": "application/json"
	}
})
	.then(response => response.text())
	.then(json => console.log(json))
	.catch(error => console.warn(error));


fetch('http://127.0.0.1:5000', {
	method: 'GET',
	headers: {
		"Content-Type": 'application/html; charset=utf-8'
	}
})
	.then(response => response.text())
	.then(data => console.log(data))
	.catch(error => console.error(error))
