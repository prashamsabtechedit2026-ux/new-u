create database product_26;

use product_26;

create table orders(
	order_id int primary key,
    customer_id int not null,
    order_amount int not null
    );
    
insert into orders
values
	(1, 101,500),
    (2, 102,200),
    (3, 101,300),
    (4, 103,400),
    (5, 102,600);
    
select customer_id,SUM(order_amount) AS total_amount
from orders
group by customer_id;
    
select customer_id,SUM(order_amount) AS total_amount
from orders
group by customer_id
having SUM(order_amount)>500;