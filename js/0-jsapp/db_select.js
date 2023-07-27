var initDB = require('./db').initDB();
var User = initDB;
//var jane = require('./db_create.js').jane()
async function findUsers() {
    try {
        const users = await User.findAll({
            where: {
                name: 'Goodness'
            }
        });
	if (users.length < 1)
		console.log('NULL')
        console.log(JSON.stringify(users));
        console.log(typeof users);
    } catch (error) {
        console.error('Error:', error);
    }
}

// Call the asynchronous function
findUsers();

