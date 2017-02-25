import re
count = 0
with open("full_log.txt") as elflog:
	for line in elflog:
		m = re.findall("\s+[<\w+>]*<(\w+)>:*\s+([\w\s]*:)(.*)",line)
		if m:
			
			if "DW_TAG_" in m[0][2]:
				print(m)
				
				count +=1
				if count == 5:
					break

			
			



