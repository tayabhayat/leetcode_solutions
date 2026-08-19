/* Write your PL/SQL query statement below */
SELECT score as "score", dense_rank() over(order by score desc) as "rank" from scores