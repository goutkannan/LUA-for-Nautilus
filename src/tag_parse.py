import csv
import re
data = []
with open("tags") as tags:
	for tag in tags.readlines():
	 if "!_" not in tag:
	 	m = re.search("\w*.\.c\s+.*\sf\s.*",tag)
	 	if m:
	 		data.append(tag.split("\t"))
;
for d in (data[101:110]):
	print(d,'\n')

with open('tag_data.csv', 'wb') as csvfile:
    writer = csv.writer(csvfile, delimiter=",")
    writer.writerows(data)

