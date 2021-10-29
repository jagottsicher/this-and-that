# progress bar 
## call by value vs call by reference

Idea was a function with ncurses which serves as an universal progress bar.

That worked not perfectly out, because it is not very universal.

As you can see in the declaration it returns an int as a simple error code. kind of, at least and it takes a pointer to a char to handle over a prompt or something, and int as some kind of counter, which I actually do not use, and an int which is a counter of the maximum of whatever will be counter in the progress bar, and of course, a value for the actual value.

In the main I just call this function in a loop, which shall represent any kind of ongoing progress, which needs a progress bar. btw here shall come once the counter in play if you have severeal progress bars I wanted to stack them up and but that is only an idea so far.

As the beginner I am, I often prepare my functions in the same file as the main loop and later push them out. that makes it easier for me to be clear about the scopes of different variables. The code is not a beauty, but at least it works, but does for example not consider that one could change the size of the terminal window at runtime. It just takes the value of the macro COLS and LINES to calculate width and position of the window for the scroll bar. Also there is no kind of error handling, or taking care if opening new windows succed or not. 

Another point is that this progress bar is not universal at all. If one wanted to archieve that one needed to handle over units, consider different purposes, or styles, maybe even color set, or make some stuff optional to handle over. You could do that by porting the C code to C++ and the overload the function, but also that is not needed now. 

But while I played around with this code I realised that besides the low quality it can at least serve as an example for showing the difference of the concept call-by-value and call-by-reference.

Call be value, then make it constants where possible
