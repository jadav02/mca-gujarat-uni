CREATE TABLE Customers (
customer_id INT PRIMARY KEY,
name VARCHAR(50),
city VARCHAR(50)
);
INSERT INTO Customers VALUES
(1, 'Aarav', 'Mumbai'),
(2, 'Riya', 'Delhi'),
(3, 'Kabir', 'Pune'),
(4, 'Simran', 'Chennai'),
(5, 'Anaya', 'Delhi');
CREATE TABLE Products (
product_id INT PRIMARY KEY,
product_name VARCHAR(50),
category_id INT,
price DECIMAL(10,2)
);
INSERT INTO Products VALUES
(101, 'Laptop', 1, 60000),
(102, 'Smartphone', 1, 30000),
(103, 'Headphones', 2, 2000),
(104, 'Shoes', 3, 2500),
(105, 'Washing Machine', 4, 40000);
CREATE TABLE Categories (
category_id INT PRIMARY KEY,
category_name VARCHAR(50)
);
INSERT INTO Categories VALUES
(1, 'Electronics'),
(2, 'Accessories'),
(3, 'Fashion'),
(4, 'Home Appliances'),
(5, 'Furniture');

CREATE TABLE Orders (
order_id INT PRIMARY KEY,
customer_id INT,
order_date DATE
);
INSERT INTO Orders VALUES
(201, 1, '2025-09-01'),
(202, 2, '2025-09-03'),
(203, 1, '2025-09-05'),
(204, 3, '2025-09-07'),
(205, 5, '2025-09-07');
CREATE TABLE OrderDetails (
orderdetail_id INT PRIMARY KEY,
order_id INT,
product_id INT,
quantity INT
);
INSERT INTO OrderDetails VALUES
(301, 201, 101, 1),
(302, 201, 103, 2),
(303, 202, 104, 1),
(304, 203, 102, 1),
(305, 204, 105, 1),
(306, 205, 103, 3);

#1. Write a query to display all customers who have placed an order, along with their orderIDs and the dates of those orders.
select c.customer_id,c.name, o.order_id, o.order_date from Customers as c join Orders as o on c.customer_id = o.customer_id;

#2. Write a query to show all customers and their corresponding orders. If a customer has not placed any order, still display their name with NULL for order details.
select c.customer_id, c.name, o.order_id, o.order_date from Customers as c left join Orders as o on c.customer_id = o.customer_id;

#3. Write a query to display all products along with the category name to which each productbelongs.
select p.product_id, p.product_name, ca.category_name , p.price from products as p join categories as ca on p.category_id = ca.category_id; 

#4. Write a query to display all categories along with the products in each category. If a category has no products, display the category name with NULL for product name.
select ca.category_name, p.product_name from categories as ca left join products as p on ca.category_id = p.category_id;

#5. Write a query to display each order along with the product names and quantities purchased in that order.
select od.order_id , od.product_id,od.quantity,p.product_name from orderdetails as od join products as p on od.product_id= p.product_id ;

#6. Write a query to display customer names along with the products they purchased and the quantity of each product.
select c.name , p.product_name , od.quantity from customers as c join orders as o on c.customer_id=o.customer_id join orderdetails as od on o.order_id = od.order_id   join products as p on od.product_id=p.product_id;

#7. Write a query to display the names of customers who have not placed any order.
select c.name from customers as c left join orders as o on c.customer_id=o.customer_id where order_id is null;

#8. Write a query to display the distinct category names of products that customers have purchased.
select  DISTINCT  c.category_name from orderdetails as od join products as p on od.product_id=p.product_id join categories as c on p.category_id = c.category_id;

#9. Write a query to display each order ID and the total amount spent in that order (total = price * quantity).
select od.order_id , sum(od.quantity*p.price) as total_amount from orderdetails as od join products as p on od.product_id= p.product_id group by od.order_id; 

#10. Write a query to find customers who live in the same city and display their names together (self join).
