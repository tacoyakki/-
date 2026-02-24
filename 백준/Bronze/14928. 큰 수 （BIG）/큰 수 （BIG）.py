n = input().strip()
MOD = 20000303

result = 0
for ch in n:
    result = (result * 10 + int(ch)) % MOD

print(result)