var User = require('./db.js').initDB();

User.drop();
console.log("Table Deleted")
