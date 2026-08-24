print("****************** Education Scholarship Eligibility ******************")

num_age = int(input("Enter your age: "))
num_income = float(input("Enter your annual family income: "))

if num_age < 25 and num_income < 300000:
    print("You are eligible for the Specialized Education Scholarship")
else:
    print("You are not eligible for the Specialized Education Scholarship")

print("****************** Thank You ******************")
