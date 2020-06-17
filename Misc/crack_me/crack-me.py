#!/usr/bin/env python2
import sys
import random
import string

password = "coldspotisgod"
counter = 0
guess = False

while not guess:
    i = counter % 20
    print "Enter " + string.ascii_uppercase[i] + " for flag"
    sys.stdout.flush()
    user = str(raw_input())
    if user != string.ascii_uppercase[i]:
        quit()
    counter += 1
    if user == password or counter >= 1000:
        print "Here's the flag: CTF{just_pur3_brut3_str3ngth!!}"
        sys.stdout.flush()
        guess = True
