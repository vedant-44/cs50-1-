import csv
lsteams=[]
with open('2018m.csv') as csv_file:
    reader=csv.reader(csv_file,delimiter=',')
    line_count=0
    for row in reader:
          if line_count==0:
             line_count+=1
          else:
              team={row[0]:row[1]}
              lsteams.append(team)
print(lsteams[0])

