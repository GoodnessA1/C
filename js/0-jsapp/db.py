import sqlite3


conn = sqlite3.connect('db.db')
cursor = conn.cursor()
print("Established Connection\n")

name = cursor.execute('SELECT * FROM Users')
for nam in name:
    print(nam);

print("Done\n")
