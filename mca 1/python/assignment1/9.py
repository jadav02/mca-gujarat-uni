import base64

text = "Hello$World"
print("Original String :" , text)

encoded = base64.b64encode(text.encode())
print("Base64 Encoded:", encoded.decode())
