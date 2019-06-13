from time import time

start=time()
set1=set(line.strip() for line in open('C://Users//Cagatay//Desktop//names.txt'))#READING LINE BY LINE O THE SET
print(set1)

name = 'ABDULLAH'
if name in set1:
 print ('found')
 end=time()

total_time=end-start;
print('finding the name takes %f' %(total_time))