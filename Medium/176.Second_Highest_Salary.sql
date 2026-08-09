/* Write your PL/SQL query statement below */
SELECT MAX(SALARY) AS "SecondHighestSalary" FROM EMPLOYEE Where SALARY < (SELECT MAX(SALARY) FROM EMPLOYEE)