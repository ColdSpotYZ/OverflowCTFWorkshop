#!/usr/bin/env python
from pwn import *

host, port = "www.coldspot.wtf", 8081

s = connect(host, port)

s.recvline()
for i in range(1000):
	s.sendline('A')
	temp = s.recvline()
	if "HNF" in temp:
		print(temp)