n, m = map(int, input().split())

dp=[1]*101


for i in range(2, n+1):
  dp[i]=i*dp[i-1]
  
print(dp[n]//(dp[n-m]*dp[m]))
