alfabeto = {
    "a": "z",
    "b": "y",
    "c": "x",
    "d": "w",
    "e": "v",
    "f": "u",
    "g": "t",
    "h": "s",
    "i": "r",
    "j": "q",
    "k": "p",
    "l": "o",
    "m": "n",
    "n": "m",
    "o": "l",
    "p": "k",
    "q": "j",
    "r": "i",
    "s": "h",
    "t": "g",
    "u": "f",
    "v": "e",
    "w": "d",
    "x": "c",
    "y": "b",
    "z": "a"
}

def encode(plain_text):
    msg = []
    for char in plain_text:
        msg.append(alfabeto[char])
    return "".join(msg)

def decode(ciphered_text):
    msg = []
    inverted_dict = {}
    for item in alfabeto.items():
        inverted_dict[item[1]] = item[0]
    for char in ciphered_text:
        msg.append(inverted_dict[char])
    return "".join(msg)
        