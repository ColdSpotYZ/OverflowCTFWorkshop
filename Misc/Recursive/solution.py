import os

static = 1000

for i in range(1000):

	payload = 'tar -xf' + str(static-i) + '.tar'
	os.system(payload)
	payload2 = 'rm '+ str(static-i) + '.tar'
	os.system(payload2)
exit()