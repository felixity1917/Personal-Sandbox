This problem was provided by a peer. I have tried to solve it in my own way.

To test this on a console please execute the following in a shell:

Linux/MacOS:
``` sh
$ cat input.txt | python main.py
```

Windows:
``` powershell
PS> type input.txt | python main.py
```

# Problem
We have a list of annual rainfall recordings for cities. Each element in the list is of the form (c, r) where c is the city and r is the annual rainfall for a particular year. The list may have multiple entries for the same city, corresponding to rainfall recordings in different years. Write a Python program that takes as input a list of rainfall recordings and computes the average rainfall for each city. The output should be a list of pairs (c, ar) where c is the city and ar is the average rainfall for this city among the recordings in the input list.

Note that ar should be of type float. The output should be sorted in alphabetical order with respect to the city name.

Input Format:

    Read the number of samples (n) in line1
    Read city name and rainfall values in the next n lines

Output Format: Print a list and each item of the list will be a pair of (c, ar) where c is the city and ar is the average rainfall for this city sorted in alphabetical order of city names.
