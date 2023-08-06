var express = require('express');
var bodyParser = require('body-parser');
var app = express();

app.use(bodyParser.json());

app.post('/', function(req, res) {
	const name = req.body.name;
	const password = req.body.password;

	console.log("Received Data");
	console.log(req.body);

	res.json({
		status: 'ok',
		message: 'Data Received'
	});
})

app.listen(5000, () => {
	console.log("listening on http://127.0.0.1:5000");
})
