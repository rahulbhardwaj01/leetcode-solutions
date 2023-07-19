# Write your MySQL query statement below
 # we want every row from Person( which is we are specifying first using SELECT statement.) table so we are using LEFT JOIN on contrary if we wanted every row from address table we would have used RIGHT JOIN. I hope you have understood.

# How to remember what is left, what is right?
# -Simple
# Whatever you are accessing first = LEFT ----- 1 = LEFT
# 2 = RIGHT

SELECT P.firstName, P.lastName, A.city, A.state
FROM Person P LEFT JOIN Address A
on P.personId = A.personId