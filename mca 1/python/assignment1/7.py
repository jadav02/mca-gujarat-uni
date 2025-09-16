import base64

c_username = "vivek"
c_password = "123"

encrypted_password = base64.b64encode(c_password.encode()).decode()

username = input("Enter username: ")
password = input("Enter password:")

entered_encrypted = base64.b64encode(password.encode()).decode()

if username == c_username and entered_encrypted == encrypted_password:
    print("login successful")
else:
    print("invalid username and password")
