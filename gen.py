import argparse

argparse = argparse.ArgumentParser()
argparse.add_argument("-f", "--file", dest="file", help="File to parse")
args = argparse.parse_args()

global file
file = args.file

if __name__ == "__main__":
    
    array = ""
    
    with open(file, "rb") as f:
        while True:
            byte = f.read(1)
            if not byte:
                break
            
            char = "0x" + "".join("{:02x}".format(ord(byte)))
            array += char + ", "
            
    print(array)