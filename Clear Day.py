'''Chef classifies a day to be either rainy, cloudy, or clear.

In a particular week, Chef finds 
X
X days to be rainy and 
Y
Y days to be cloudy.
Find the number of clear days in the week.'''

#split function is used to get multiple input in the same line
#map function is use to convert multiple input to a destined datatypes
X,Y=map(int,input().split())
print(7-X-Y)