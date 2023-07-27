var { Sequelize, Models, DataTypes } = require('sequelize');
var path = require('path');

exports.jane = function() {
	var sequelize = new Sequelize({
		dialect: 'sqlite',
		storage: path.join(__dirname, 'db.db')
	});
	sequelize.authenticate();

	var User = sequelize.define("User", {
		name: DataTypes.TEXT,
		age: DataTypes.INTEGER,
		job: DataTypes.TEXT
	});
	sequelize.sync();

	var me = User.create({
		name: 'Goodness',
		age: 17,
		job: 'Doctor'
	});
}
