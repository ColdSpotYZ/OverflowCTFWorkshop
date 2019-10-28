import os

#os.system("cat CTF{flag} > flag.txt")
os.system("tar -cf 0.tar flag.txt")


for i in range(1000):

	payload = 'tar -cf ' + str(i+1) + '.tar' + ' ' + str(i) + '.tar'
	os.system(payload)
	payload2 = 'rm '+ str(i) + '.tar'
	os.system(payload2)
exit()
