# ACM-Spring-2019-Programming-Contest
1 The Sandwich Factor
  Tim, an aspiring computer scientist and math enthusiast, works the night shift at Myeraman’s
Sandwich Shoppe. One evening, during an extended lull in customer activity, Tim creates what
he proudly calls a ‘math sandwich’. His sandwich consists of two numbers, and a math operator.
Being a self proclaimed mathlete, he states that to evaluate a math sandwich, an individual
must take the given math operator and apply it to all integers between the two numbers which
comprise the sandwich. Warning, these savory treats can be addictive.

1.1 Input
You will be given three lines of input in the format of:
< integer >< singlespace >< integer >< singlespace >< operator >
The second integer will always be greater than the first integer and there will always be at
least one value between the two numbers (i.e. the numbers could be 7 and 9 but not 7 and 8).
The operator after each number pair will either be addition, subtraction, or multiplication. If
only one value exists between the two integers, then only output that one value.

1.2 Output
The task is to either add, subtract, or multiply all the integers between, but not including, the
two integers given. For example the result of 9 13 + would be 33 i.e. 10 + 11 + 12. The output
will be the result obtained by doing this for each of the three number pairs and their operators.
