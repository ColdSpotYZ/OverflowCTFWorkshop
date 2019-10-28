#!/usr/bin/env python2
import sys
import random
import string

password = "wbown"
counter = 0
guess = False

while not guess:
    rand = random.randint(0,52)
    print "Enter " + string.ascii_letters[rand] + " for flag"
    sys.stdout.flush()
    user = str(raw_input())
    if user != string.ascii_letters[rand]:
        quit()
    counter += 1
    if user == password or counter >= 1000:
        print "Here's the flag: HNF{just_pur3_brut3_str3ngth!!}"
        sys.stdout.flush()
        guess = True
