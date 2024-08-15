classes = [0, 1, 2, 3, 4, 5, 6, 7]
target = []

for i in classes:
	for j in classes:
		if j > i:
			target.append((i, j))

print(target)
