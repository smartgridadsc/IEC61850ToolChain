import time
import os
import simulationParser
from multiprocessing import Process
from array import *
#milli_sec = int(round(time.time() * 1000))
#print(milli_sec/1000)
milli_sec = int(round(time.time() * 1000000))/1000000
print(milli_sec)





def run_one_toolchain(folder,interface, timestamp, port,duration):
    cmd = 'sudo ./'+folder+'/goose_publisher_toolchain '+interface+' '+str(milli_sec+2)+' '+str(port)+' '+folder+' '+duration
    print cmd;
    os.system(cmd)

processes = []
#arg1=["goose_publisher1","ens33.1",102]
#arg2=["goose_publisher2","ens33.2",103]
#args=[arg1,arg2]
args=simulationParser.getArgs()
#args=[arg1]
print args


for i in args:
   p = Process(target=run_one_toolchain, args=(i[0], i[1],milli_sec,i[2],i[3]))
   p.start()
   processes.append(p)

for p in processes:
   p.join()



