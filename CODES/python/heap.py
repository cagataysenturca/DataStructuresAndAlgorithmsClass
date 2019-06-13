from time import time
import heapq

start=time()

names=[]
with open("C://Users//Cagatay//Desktop//names.txt") as file:
    for name in file:
        name = name.strip()#REMOVING THESPACES
        names.append(name)

#HEAPIFY FUNCTION : FOR CHANGING THE LIST STRUCTURE INTO A HEAP
heapq.heapify(names)
print (list(names))

line = 'ABDULLAH'
if line in list(names):
 print ('found')

end=time()
total_time=end-start;
print('finding the name takes %f' %(total_time))