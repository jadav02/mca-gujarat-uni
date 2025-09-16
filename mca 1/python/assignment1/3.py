from datetime import date

byear = int(input("Enter birth year:"))
bmonth = int(input("Enter birth month:"))
bday = int(input("Enter bith day:"))

birth_date = date(byear,bmonth,bday)
today = date.today()

years= today.year - birth_date.year
months= today.month - birth_date.month
days= today.day - birth_date.day

if days < 0:
    months -= 1
    days += 30

if months < 0:
    years -=1
    months += 12

print(f"your age: {years} years, {months} months, {days} days")
