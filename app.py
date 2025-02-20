from flask import Flask, render_template, request, session
from data_utils import save_data, process_data

import random

app = Flask(__name__)


@app.get("/showscore")
def display_player_score():
    session["points"] = random.randint(
        1, 100
    )  # Puts the browser's data in the session.
    return render_template(
        "score.html", title="Here is your score", score=session["points"]
    )


@app.post("/savedata")
def save_the_data():
    player = request.form["the_player"]
    # What about the score?
    score = session["points"]  # Gets the browser's data from the session.

    save_data(player, score)
    player, score, where, how_many, ordered = process_data(player, score)

    ## return f"{player}, {score}, OK - you placed {where} out of {how_many}."
    return render_template(
        "results.html",
        title="Here is how you did",
        name=player,  # template var=code var
        points=score,
        position=where,
        length=how_many,
        topten=ordered[:10],
    )


# The session's cookies will be encrypted on the browser.
app.secret_key = (
    "eigj'preu r9u g eg9rgaer'ij'dfjpraeu#rea-9gperajearpu#eribafpoj #adfd#af"
)


if __name__ == "__main__":
    app.run(debug=True)
