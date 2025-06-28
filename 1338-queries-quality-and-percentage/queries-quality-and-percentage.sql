# Write your MySQL query statement below
select query_name,
ROUND(avg(rating/position),2) as quality, 
ROUND(sum(rating<3)*100.0/count(*),2)as poor_query_percentage 
from Queries
group by query_name;
