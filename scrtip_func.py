import csv
data=[]
with open("data.txt") as tsv:
	tsv_data = tsv.readlines()[2:]
	for line in tsv_data:
		print(line)
		if "FUNC" in line:
			l = line.split()

			data.append((l[1],l[4],l[7]))

print(data[1])
with open("func_data.csv",'wb') as fcsv:
	csv.writer(fcsv, dialect='excel').writerows(data)
