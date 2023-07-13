from flask import Flask
import os

def create_app(test_config=None):
    app = Flask(__name__, instance_relative_config=True)
    app.config.from_mapping(
            DATABASE_URL = os.path.join(app.instance_path, "db.sqlite"),
            SECRET_KEY = 'dev',
            )

    app.config.from_pyfile('config.py', silent=True)

    try:
        os.makedirs(app.instance_path)
    except:
        pass

    from . import init_db

    init_db.init_app(app)

    from . import auth
    app.register_blueprint(auth.bp)

    from . import blog
    app.register_blueprint(blog.bp)
    app.add_url_rule('/', endpoint='index')

    return app

app = create_app()
