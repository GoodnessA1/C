#!/bin/env node

var express = require('express');
var app = express();
var multer = require('multer');
var upload = multer();

app.get('/', function(req, res) {
	res.send("Hello World");
});

app.get('/form', function(req, res) {
        res.render('index');
});
app.set('view engine', 'pug');
app.set('views', './views');

app.use(express.json());
app.use(express.urlencoded({extended: false}));

app.use(upload.array());
app.use('static', express.static('public'));

app.post('/form', function(req, res) {
	console.log(req.body);
	res.send('File Received');
})
app.listen(5000);
console.log("Server Starting");
