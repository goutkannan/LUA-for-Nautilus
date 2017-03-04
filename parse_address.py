import re
import copy
final=[]
my_dict={}
type_list = ["<0xf5>", "<0x11d>", "<0x113>"]
type_flag=0
pointer_flag=-1
for addr in type_list:
    my_dict["addr"] = addr
    with open("full_log.txt") as elflog:
        for line in elflog:
            if type_flag==0 and pointer_flag==-1:
                if "<1>"+addr.replace("0x","") in line:
                    if "DW_TAG_pointer_type" in line:
                        my_dict["pointer"] = True
                        pointer_flag=1
                        next_addr=0
                        size_flag=0
                        continue
                    elif "DW_TAG_typedef" in line:
                        my_dict["pointer"] = False
                        pointer_flag = 2
                        next_addr = 0
                        name_flag = 0
                        continue
                    else:
                        my_dict["pointer"]=False
                        my_dict["type"]=line.split("DW_TAG_")[1].split("_type")[0].split(")")[0]
                        pointer_flag=0
                        type_flag=1
                        name_flag=0
                        size_flag=0
                        continue
            if type_flag==1 and pointer_flag==0:
                if name_flag==0:
                    if "DW_AT_name" in line:
                        my_dict["name"]=line.split(":")[-1].strip()
                        name_flag=1
                        continue
                if size_flag==0:
                    if "DW_AT_byte_size" in line:
                        my_dict["size"]=line.split(":")[-1].strip()
                        size_flag=1
                        continue
            if pointer_flag==1:
                if next_addr==0:
                    if "DW_AT_type" in line:
                        next_addr=line.split(":")[-1].strip()
                        continue
                if size_flag==0:
                    if "DW_AT_byte_size" in line:
                        my_dict["size"]=line.split(":")[-1].strip()
                        size_flag=1
                        continue
            if pointer_flag==2:
                if next_addr==0:
                    if "DW_AT_type" in line:
                        next_addr=line.split(":")[-1].strip()
                        continue
                if name_flag==0:
                    if "DW_AT_name" in line:
                        my_dict["name"]=line.split(":")[-1].strip()
                        name_flag=1
                        continue
            if pointer_flag==1 and next_addr==1 and size_flag==1:
                break
            if pointer_flag==2 and next_addr==1 and name_flag==1:
                break
            if type_flag==1 and name_flag==1 and size_flag==1:
                break
    elflog.close()
    if pointer_flag==1:
        with open("full_log.txt") as elflog:
            for line in elflog:
                if "<1>"+next_addr.replace("0x","") in line and type_flag==0:
                    my_dict["type"] = line.split("DW_TAG_")[1].split("_type")[0]
                    type_flag = 1
                    name_flag = 0
                    continue
                if type_flag == 1:
                    if name_flag == 0:
                        if "DW_AT_name" in line:
                            my_dict["name"] = line.split(":")[-1].strip()
                            name_flag = 1
                            continue
                if type_flag == 1 and name_flag == 1:
                    break
        elflog.close()
    if pointer_flag==2:
        with open("full_log.txt") as elflog:
            for line in elflog:
                if "<1>"+next_addr.replace("0x","") in line and type_flag==0:
                    my_dict["type"] = "typedef"
                    type_flag = 1
                    size_flag = 0
                    continue
                if type_flag == 1:
                    if size_flag == 0:
                        if "DW_AT_byte_size" in line:
                            my_dict["size"] = line.split(":")[-1].strip()
                            size_flag = 1
                            continue
                if type_flag == 1 and size_flag == 1:
                    break
        elflog.close()
    final.append(copy.deepcopy(my_dict))
    type_flag=0
    pointer_flag=-1

print final