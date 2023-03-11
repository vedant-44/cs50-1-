import csv
teams=[]
def main():

 with open('2018m.csv') as csv_file:
     reader=csv.DictReader(csv_file)
     for row in reader:
        team={row['team']:row['rating']}
        teams.append(team)





def simulate_round(teams):
    """Simulate a round. Return a list of winning teams."""
    winners = []

    # Simulate games for all pairs of teams
    for i in range(0, len(teams), 2):
        if simulate_game(teams[i], teams[i + 1]):
            winners.append(teams[i])
        else:
            winners.append(teams[i + 1])

    return winners



