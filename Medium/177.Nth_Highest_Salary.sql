CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
     with cte as
     (SELECT *, DENSE_RANK() OVER (ORDER BY SALARY DESC) AS "rnk" from employee)

     select distinct ifnull(salary, null) from cte where rnk = n
  );
END