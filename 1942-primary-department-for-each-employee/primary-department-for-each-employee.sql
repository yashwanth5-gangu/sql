# Write your MySQL query statement below
select employee_id,department_id
from employee e1
where employee_id in (
    select employee_id
    from employee
    group by employee_id
    having count(employee_id)=1
) or primary_flag='Y'

