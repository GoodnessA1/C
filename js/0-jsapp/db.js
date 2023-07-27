//Sequelize module in nodejs
var path = require('path');
var { Sequelize, Model, DataTypes } = require('sequelize');

exports.initDB = function() {
	const sequelize = new Sequelize({
		dialect: 'sqlite',
		storage: path.join(__dirname, 'db.db')
	});

	try {
		sequelize.authenticate();
		console.log('Connection has been established successfully.');
	}
	catch (error)
	{
		console.error('Unable to connect to the database:', error);
	}

	sequelize.sync();
	const User = sequelize.define("User", {
		name: DataTypes.TEXT,
		age: DataTypes.INTEGER,
		job: DataTypes.TEXT
	});

	return User;
}
