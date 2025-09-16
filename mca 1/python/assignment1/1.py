
#static
from datetime import date

d1 = date(2025,9,1)
d2 = date(2025,9,13)

difference = d2-d1

print("date 1:", d1)
print("date 2:", d2)

print("difference:",difference.days,"days")

#user input

from datetime import datetime

d1 = input("Enter first date (dd-mm-yyyy):")
d2 = input("Enter second date (dd-mm-yyyy):")

date1 = datetime.strptime(d1, "%d-%m-%Y")
date2 = datetime.strptime(d2, "%d-%m-%Y")

diff = abs((date2-date1).days)

print("Difference in days:", diff)
