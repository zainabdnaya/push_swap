# push_swap
sort data on a stack, with a limited set of instructions, using the lowest possible number of actions

## Concept of this Project ##

 The idea is simple, You have two stacks called Stack A and Stack B. <br>
 Stack A is given a random list of unorganized numbers.  <br>
 You must take the random list of numbers in Stack A and sort them so that Stack A is organized from smallest to largest. <br> 
 There are only a few moves you’re allowed to used to manipulate the stacks that we’re going to call “Actions”.  <br>
 The main goal of this project is to organize Stack A in as few actions as possible. <br>

 ## MOVES ##

the moves are named:  sa, sb, ss, ra, rb, rr, rra, rrb, rrr, pa, pb.<br>
I use Double linked list to implement these moves :<br>

## sa || sb 	:arrow_right_hoo:  ##
    
    -swap 2 first element


<a href="https://ibb.co/wC6FY2V"><img src="https://i.ibb.co/828LXQq/Screen-Shot-2021-04-03-at-12-44-32-PM.png" alt="Screen-Shot-2021-04-03-at-12-44-32-PM" border="0"></a>

## ra || rb :arrow_right_hook:	 ##
    -put the first element last,and all elemnt go UP by one :arrow_heading_up:
<a href="https://ibb.co/9ggTtbY"><img src="https://i.ibb.co/YQQkZcj/Screen-Shot-2021-04-03-at-2-51-42-PM.png" alt="Screen-Shot-2021-04-03-at-2-51-42-PM" border="0"></a>