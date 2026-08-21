SELECT contest_id,
       round(count(user_id)*100.0/(select count(*) from Users),2) AS percentage
from Register
group by contest_id
order by percentage desc,contest_id asc;