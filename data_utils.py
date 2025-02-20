import DBcm

config = {
    "host": "127.0.0.1",
    "database": "leaderDB",
    "user": "leader",
    "password": "leaderpasswd",
}

SQL_INSERT = "insert into scores (player, points) values ( %s, %s )"
SQL_GETSCORES = "select player, points from scores order by points desc"


def save_data(player, score):
    with DBcm.UseDatabase(config) as db:
        db.execute(SQL_INSERT, (player, score,))


def process_data(the_player, the_score):
    with DBcm.UseDatabase(config) as db:
        db.execute(SQL_GETSCORES)
        results = db.fetchall()
    where = results.index((the_player, the_score)) + 1
    how_many = len(results)

    return the_player, the_score, where, how_many, results
