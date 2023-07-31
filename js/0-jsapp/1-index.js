var express = require('express');
var session = require('express-session');
var cookieParser = require('cookie-parser');
var app = express();

app.use(cookieParser());
app.use(session({secret: "Hello it is a secret"}))
app.get('/', function(req, res) {
	if (req.session.page_views)
	{
		req.session.page_views++;
		res.send(`Visited this page ${req.session.page_views} number of times`);
	}
	else
	{
		req.session.page_views = 1;
		res.send("Visiting for the first time");
	}
});

app.listen(5000);
console.log("Server is running on http://127.0.0.5:5000");
