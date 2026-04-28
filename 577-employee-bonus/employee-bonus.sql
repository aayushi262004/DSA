# Write your MySQL query statement below
SELECT e.name , b.bonus from Employee e 
LEFT JOIN BONUS b on e.empid = b.empid
where b.bonus is null or b.bonus<1000;