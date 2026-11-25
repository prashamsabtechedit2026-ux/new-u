create database code_26;

use code_26;

create table departments(
	dept_id int primary key,
    dept_name varchar (100) not null
    );

insert into departments
values
	(101, "HR"),
	(102, "IT"),
    (103, "Finance");
	

select * from departments;

create table employees(
	employee_id int primary key,
    employee_name varchar (100) not null,
    dept_id int not null,
    foreign key (dept_id) references departments (dept_id)
    );
    
insert into employees
values
	(1, "Jhon", 101),
	(2, "Sarah", 102),
	(3, "Mike", 101),
	(4, "Lisa", 103);
    
select employee_name from employees
where dept_id IN(select dept_id from departments where dept_name IN ('HR','IT'));

select * from new_employees;

CREATE TABLE new_employees (
employee_id INT PRIMARY KEY,
employee_name VARCHAR(100) not null,
dept_id INT not null
);

insert into new_employees(employee_id,employee_name, dept_id)
select employee_id, employee_name,dept_id
from employees
where dept_id IN (select dept_id from departments where dept_name = 'HR');

