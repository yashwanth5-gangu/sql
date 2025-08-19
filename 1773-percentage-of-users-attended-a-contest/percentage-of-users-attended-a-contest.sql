# Write your MySQL query statement below
select r1.contest_id,round(count(r1.contest_id)/(select count(*) from users )*100,2) as percentage
  from register r1
   join users u1
   on u1.user_id=r1.user_id
  group by r1.contest_id
  order by percentage desc,r1.contest_id 
  
  
