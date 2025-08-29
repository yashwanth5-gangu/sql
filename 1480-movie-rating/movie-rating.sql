# Write your MySQL query statement below
(
select u1.name as results
from users u1
inner join movierating m1
on u1.user_id=m1.user_id
group by u1.user_id
order by count(m1.user_id) desc,u1.name
limit 1
)
union all
(
 select title as results
 from movies m1
 inner join movierating m2
 on m1.movie_id=m2.movie_id
 where month(created_at)='02' and year(created_at)='2020'
 group by title
 order by  avg(rating) desc,title
 limit 1
)