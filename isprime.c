a = int(input("Enter the Number -->"))
prime= True
for i in range(2,a//2):
    if a%i == 0 :
        prime= False

if prime == True:
    print(a,"is prime")
else:
    print(a, "is not prime")
