fetch("https://api.github.com/users/GoodnessA1")
	.then(response => response.json())
	.then(data => console.log(data))
	.catch(error => console.error(error))
