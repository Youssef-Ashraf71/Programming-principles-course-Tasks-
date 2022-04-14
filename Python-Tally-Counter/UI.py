import count
from count import inc

def get_input():
    value = input("Enter the operation to be done \n\
        1 >> increment \n\
        2 >> decrement \n\
        3 >> reset \n\
        4 >> display \n\
        5 >> exit \n")
    return int(value)


def main():
      counter=0 
      flag=True
      while flag :
           print("current counter status ::\n",counter)
           userinp=get_input()
           if userinp == 1 :
             counter = count.inc(counter)
           elif userinp == 2 :
              if(counter>0) :
                 counter = count.dec(counter)   
           elif userinp == 3 : 
             counter = count.reset(counter)
           elif userinp == 4 :
            print("counter :: ",counter)
           elif userinp == 5 :
             flag =False  

      print("user input ==> ", userinp)     


main()