def hrs_to_m(hrs): #define the conversion function
    return  hrs * 60
    #ask the user for input 
hrs = float(input("Enter time in hours: "))
#perform conversion
m = hrs_to_m(hrs)
#print output
print(f"{hrs}hours is equal to {m} minutes.")