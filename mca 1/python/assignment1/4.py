import math

print("Angle \t Sin \t\t Cos \t\t Tan")
print("-"*40)

for angle in range(0,91,15):
    rad = math.radians(angle)
    sin_val = round(math.sin(rad), 4)
    cos_val = round(math.cos(rad), 4)
    try:
        tan_val = round(math.tan(rad), 4)
    except:
        tan_val ="∞"
    print(f"{angle:>3}°\t{sin_val:<8}\t{cos_val:<8}\t{tan_val}")
        
