import hashlib

c_username = "vivek"
c_password_hash = hashlib.sha256("1234".encode()).hexdigest()

username = input("Enter Usename: ")
password = input("Enter Password:  ")

password_hash = hashlib.sha256(password.encode()).hexdigest()

if username == c_username and password_hash == c_password_hash:
    print("Login success")
else:
    print("Invalid username and password")
