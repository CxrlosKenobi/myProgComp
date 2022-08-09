from rich import print

sum_digits = lambda x: sum(int(x) for x in str(i))
matches = {}
for i in range(100):
  _key = sum_digits(i)
  try:
    matches[_key].append(i)
  except KeyError:
    matches[_key] = [i]

with open('matches.json', 'w') as file:
  file.write("{\n")
  for key in matches:
    if key == max(matches):
      file.write(f"\t\"{key}\": [{', '.join(str(x) for x in matches[key])}]\n")
    else:
      file.write(f"\t\"{key}\": [{', '.join(str(x) for x in matches[key])}],\n")

  file.write("}")
print(matches)

