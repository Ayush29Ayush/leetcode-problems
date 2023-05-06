# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below

# smallest id wale ko rakhna hai so p1 ko save karenge and p2 ko delete karenge
DELETE p2
FROM Person p1 INNER JOIN Person p2
ON (p1.email = p2.email AND p1.id < p2.id)