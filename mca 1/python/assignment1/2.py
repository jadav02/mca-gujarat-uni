import time

#current time in seconds from epoch
seconds_since_epoch = time.time()

#convert to hours and minutes
hours = int(seconds_since_epoch//3600)
minutes = int((seconds_since_epoch%3600)//60)

print("second since epoch :",int(seconds_since_epoch))
print("time since epoch:",hours,"hours and" , minutes,"minutes")
