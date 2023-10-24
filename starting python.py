def cm_to_m(cm): #define the conversion function
    return cm / 1000
    #ask the user for input 
cm = float(input("Enter length in cm: "))
#perform conversion
m = cm_to_m(cm)
#print output
print(f"{cm}centimeters is equal to {m}meters.")