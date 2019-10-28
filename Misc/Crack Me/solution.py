#!/usr/bin/env python
from pwn import *

host, port = "www.coldspot.wtf", 8080

s = connect(host, port)

s.recvline()
for i in range(1000):
	s.sendline('A')
	s.recvline()
	if "HNF" in temp:
		print(temp)
