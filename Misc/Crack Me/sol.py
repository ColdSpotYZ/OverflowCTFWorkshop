#!/usr/bin/env python
from pwn import *
import time

host, port = "nc.coldspot.ga", 8080

s = connect(host, port)
temp = s.recvline()
print(temp)
for i in range(1000):
    time.sleep(1)
    s.sendline(temp[6])
    temp = s.recvline()
    print(temp)
    if "HNF" in temp:
        print(temp)
