# Write your MySQL query statement below


select p1.product_name,sum(o1.unit) as unit
from products p1
left join orders o1
 on p1.product_id=o1.product_id
 where o1.order_date  between '2020-02-01' and '2020-02-29' 
 group by p1.product_name,o1.product_id
 having sum(o1.unit)>=100
 