# Write your MySQL query statement below
select r1.contest_id,round(count(r1.contest_id)/(select count(*) from users )*100,2) as percentage
  from register r1
  
  group by r1.contest_id
  order by percentage desc,r1.contest_id 
  
  
