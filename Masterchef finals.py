'''Chef has been working hard to compete in MasterChef.
He is ranked 
X
X out of all contestants. However, only 
10
10 contestants would be selected for the finals.

Check whether Chef made it to the top 
10
10 or not?'''

#number of testcases
T=int(input())
#loping each testcases
for t in range(T):
    X=int(input())
    if X>10:
        print("NO")
    else:
        print("YES")