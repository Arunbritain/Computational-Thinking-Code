yr=int(input("Input:\n"))
if((yr%4==0)and(yr%400==0)and(yr%100!=0)):
  print("yes")
else:
  print("no")
