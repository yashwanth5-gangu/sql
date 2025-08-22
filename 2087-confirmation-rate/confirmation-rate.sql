# Write your MySQL query statement below
select s1.user_id,round(ifnull(sum(c1.action='confirmed')/count(c1.action),0),2) as confirmation_rate
from signups s1
left join confirmations c1
 on s1.user_id=c1.user_id
group by s1.user_id