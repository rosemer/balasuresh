num=int(input("Enter your number:"))
an=0
while(num!=0):
	t=num%10
	an=an+t
	num=num//10
print("The sum of digit is:",an)
