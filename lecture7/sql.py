from cs50 import SQL
db =SQL('sqlite:///favourites.db')
language=input('Language: ')
rows=db.execute("SELECT * FROM favourites")
