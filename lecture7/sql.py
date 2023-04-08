from cs50 import SQL
db =SQL('sqlite:///favourites.db')
language=input('Language: ')
rows=db.execute("SELECT COUNT(*) AS n FROM favourites WHERE language=?",language)
print(rows[['n'])