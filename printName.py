import sys
import time

name = "Joshua Fogg"
count = int(sys.argv[1])

for i in range(0, count):
    print name
    time.sleep(1)