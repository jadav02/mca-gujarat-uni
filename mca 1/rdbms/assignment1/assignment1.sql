create table Deposit(
	ACTNO varchar(5),
    CNAME varchar(18),
    BNAME varchar(18),
    AMOUNT numeric(8,2),
    ADATE date
    );
    
create table Borrow(
	LOANNO varchar(5),
    CNAME varchar(18),
    BNAME varchar(18),
    AMOUNT numeric(8,2)
);

create table Customer(
	CNAME varchar(18),
    CITY varchar(18)
);

create table Branch(
	BNAME varchar(18),
	CITY varchar(18)
);
