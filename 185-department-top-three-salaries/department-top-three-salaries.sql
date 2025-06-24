with cte as(
select
id,
name,
salary,
departmentId,
dense_rank() over(partition by departmentId order by salary desc) as top_salaries
from Employee
)

select d.name as Department, c.name as Employee, c.salary from Department d join cte c on 
d.id = c.departmentId where top_salaries <=3