# Write your MySQL query statement below
with cte as(
select d1.name as Department,e1.name as Employee,e1.salary as Salary,
DENSE_RANK() over(partition by d1.name order by e1.salary desc) as ranking

from employee e1
join department d1
on e1.departmentId=d1.id
)
select Department,Employee,Salary
from cte
where ranking <=3;

