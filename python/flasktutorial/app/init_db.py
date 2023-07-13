import sqlite3
from flask import current_app, g
import click

def get_db():
    if 'db' not in g:
        g.db = sqlite3.connect(
                current_app.config['DATABASE_URL'],
                detect_types = sqlite3.PARSE_DECLTYPES
                )
        g.db.row_factory = sqlite3.Row
    return g.db

def close_db(e=None):
    db = g.pop('db', None)

    if db is not None:
        db.close()

def initDB():
    db = get_db()

    with current_app.open_resource('schema.sql') as f:
        db.executescript(f.read().decode('utf8'))

@click.command('initDB')
def initDB_command():
    initDB()

    click.echo("Initialized connection")

def init_app(app):
    app.teardown_appcontext(close_db)
    app.cli.add_command(initDB_command)
