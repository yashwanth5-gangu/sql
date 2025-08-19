# Write your MySQL query statement below
select p1.project_id,round(sum(e1.experience_years)/count(e1.experience_years),2) as average_years
  from project p1
  left join employee e1
  on p1.employee_id =e1.employee_id
  group by p1.project_id

