import re
import copy
from collections import defaultdict

def get_function_sign(filepath = "full_log.txt"):
	count = 0
	flag=0

	final=[]

	my_dict=defaultdict(lambda: {})
	param=[]
	fname_flag=1
	func_start=0
	in_param=0
	param_name=0
	ret_flag=-1

	with open(filepath) as elflog:
		for line in elflog:
			if fname_flag==1:
				if "<1>" in line:
					func_start=0
					in_param=0
					param_name=0
				m = re.findall("\s+[<\w+>]*<(\w+)>:*\s+([\w\s]*:)(.*)",line)
				if m and "DW_TAG_subprogram" in m[0][2] and "<1>" in line:
					count+=1
					#if len(my_dict.keys())!=0:
					#	final.append(copy.deepcopy(my_dict))
					#my_dict={}
					func_start=1
					fname_flag=0
					in_param=0
					param_name=0
					ret_flag=0
					#print str(in_param)+"---"+str(param_name)
					continue
			if fname_flag==0 and func_start==1 and in_param==0 and param_name==0:
				#m = re.findall("\s+[<\w+>]*<(\w+)>:*\s+([\w\s]*:)(.*)",line)
				#print line 
				if "DW_AT_name" in line:
					func_name=(line.split(":")[-1]).strip()
					fname_flag=1
					my_dict[func_name]["param"]=[]
					#print func_name
					continue
			if ret_flag==0 and func_start==1 and in_param==0 and param_name==0:
				#m = re.findall("\s+[<\w+>]*<(\w+)>:*\s+([\w\s]*:)(.*)",line)
				#print line 
				if "DW_AT_type" in line:
					ret=(line.split(":")[-1]).strip()
					ret_flag=1
					my_dict[func_name]["ret_type"]=ret
					#print func_name
					continue
			if fname_flag==1 and func_start==1 and in_param==0 and param_name==0:
				if "<2>" in line and "DW_TAG_formal_parameter" in line:
					in_param=1
					#print line
					continue
			if fname_flag==1 and func_start==1 and in_param==1 and param_name==0:
				if "DW_AT_name" in line:
					param.append(line.split(":")[-1].strip())
					param_name=1
					continue
			if fname_flag==1 and func_start==1 and in_param==1 and param_name==1:
				if "DW_AT_type" in line:
					param.append(line.split(":")[-1].strip())
					#print param
					my_dict[func_name]["param"].append(param)
					if len(param)!=2:
						print "error_param"
					param=[]
					in_param=0
					param_name=0
					continue
		#final.append(copy.deepcopy(my_dict))
	return my_dict


function_values = get_function_sign()



print "length of final list = "+str(len(function_values.keys()))
for k,v in function_values.items():
	print k+" : "+str(v)