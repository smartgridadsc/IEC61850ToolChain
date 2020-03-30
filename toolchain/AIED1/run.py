import time
import os
from multiprocessing import Process
from array import *
#milli_sec = int(round(time.time() * 1000))
#print(milli_sec/1000)
milli_sec = int(round(time.time() * 1000000))/1000000
print(milli_sec)


#cmd = 'sudo ./goose_publisher_toolchain lo '+str(milli_sec+2)+' 102 &'
#os.system(cmd)



def run_one_toolchain(interface, timestamp, port):
    cmd = 'sudo ./goose_publisher_toolchain '+interface+' '+str(milli_sec+2)+' '+str(port)
    os.system(cmd)

processes = []
arg1=["lo",102]
arg2=["lo",103]
args=[arg1,arg2]


for i in args:
   p = Process(target=run_one_toolchain, args=(i[0], milli_sec,i[1]))
   p.start()
   processes.append(p)

for p in processes:
   p.join()


