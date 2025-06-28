# Write your MySQL query statement below
SELECT name,b.bonus from Employee
LEFT JOIN Bonus b
ON Employee.empId=b.empId
WHERE b.bonus<1000 or b.bonus IS NULL