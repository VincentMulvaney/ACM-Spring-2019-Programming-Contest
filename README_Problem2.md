# ACM-Spring-2019-Programming-Contest

2 Words are Numbers...right?
Last semester Tim took courses on reading, writing, and counting. This semester he has advanced in his mathematics courses and is now learning how to add. Sadly, he has failed his
reading and writing classes, and must retake them along with his class on addition.
His addition course is a co-requisite to reading, so it assumes that he knows how to read somewhat. He has now been assigned a project that involves counting certain letters in words, and
is really struggling, so it is your job to help this dingus complete his project.

2.1 Input
The input will begin with an integer n, followed by a newline. There will then be n strings all
consisting of n characters, with a newline at the end of each string. The characters will all be
in the range a-z. The smallest value for n will be 3.

2.2 Output
The output will a single integer that is the sum of the ascii values of each character in the
diagonals formed by the strings if each string were stacked below the previous one as shown in
the sample input.
Please note that when the diagonals intersect, you will be adding a letter twice. In the sample
input below, the sum of the diagonals are (d + a + o) + (b + a + g), and a is added twice.
