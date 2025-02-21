import re

name = input("What's your name? ").strip()
matches = re.search(r"^(.+), *(.+)$", name)
if matches:
    last, first = matches.groups()
    name = first.title() + " " + last.title()
print(f"hello, {name}")
