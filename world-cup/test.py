import csv
import sys
import random
teams=[]
def main():

 with open('2018m.csv') as csv_file:
     reader=csv.DictReader(csv_file)
     for team in reader:
        team['rating']=int(team['rating'])
        teams.append(team)
 champion=simulate_tournament(teams)
 print(champion)


 counts = {}
 for i in range(1000):
      a=simulate_tournament(teams)
      b=a[0]['team']
      if b in counts.keys():
        counts[b]+=1
      else:
        counts[b]=0
 print(counts['Belgium'])



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




def simulate_game(team1, team2):
    """Simulate a game. Return True if team1 wins, False otherwise."""
    rating1 = team1["rating"]
    rating2 = team2["rating"]
    probability = 1 / (1 + 10 ** ((rating2 - rating1) / 600))
    return random.random() < probability



def simulate_tournament(teams):
    if len(teams)==1:
        return teams
    teams=simulate_round(teams)
    winner=simulate_tournament(teams)
    return winner

main()

