# Write your MySQL query statement below
SELECT p.product_name,s.year,s.price FROM SALES s
left join product p  on s.product_id = p.product_id;

