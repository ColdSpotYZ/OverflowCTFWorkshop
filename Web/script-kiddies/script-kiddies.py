'''
(function(){var g="H{t_t",h="_vcp}",a=g+"tjart",d=function(ai, bi, ci){return ai<a.length&&bi<b.length&&ci<c.length;},b ="Nwco_sasi!",c="Fahui"+h,v="Z2V0R",n="mxhZw",z="at",x="ob";window[window[z+x](v+n)]=function(){var f="",ai=0,bi=0,ci=0;while(d(ai, bi, ci))f+=a[ai++]+b[bi++]+c[ci++];return f;}})();
'''
g="H{t_t"
h="_vcp}"
a=g+"tjart"
b ="Nwco_sasi!"
c="Fahui" + h
v="Z2V0R"
n="mxhZw"
z="at"
x="ob"

flag = ""
index = 0
while index < 21:
	if index < len(a):
		flag += a[index]
	if index < len(b):
		flag += b[index]
	if index < len(c):
		flag += c[index]
	index += 1
print(flag)