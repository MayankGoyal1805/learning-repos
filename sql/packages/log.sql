
-- *** The Lost Letter ***
SELECT "id" FROM "addresses"
WHERE "address"="900 Somerville Avenue";

-- Just as a try, no significance.
SELECT * FROM "scans"
WHERE "address_id"=(
    SELECT "id" FROM "addresses"
    WHERE "address"="900 Somerville Avenue"
);

-- To find the address_id where the Congratulatory letter was delieverd which is 854.
SELECT * FROM "packages"
WHERE "from_address_id" in (
    SELECT "id" FROM "addresses"
    WHERE "address"="900 Somerville Avenue"
);

-- This is to find the about the address where the letter was delieverd.
SELECT * FROM "addresses"
WHERE "id"=854;


-- *** The Devious Delivery ***

-- To find out about the address_id where it was delieverd 
SELECT * FROM "scans"
WHERE "package_id"=(
    SELECT "id" FROM "packages"
WHERE "from_address_id" is NULL
);

-- To find about the address where it was delieverd 
SELECT * FROM "addresses"
WHERE "id" =(
    SELECT "address_id" FROM "scans"
    WHERE "package_id"=(
    SELECT "id" FROM "packages"
    WHERE "from_address_id" is NULL
) AND "action" = 'Drop'
);

-- *** The Forgotten Gift ***


-- To find out the adress id where the package was sent, which 4983
SELECT * FROM "packages"
WHERE "from_address_id" in (
    SELECT "id" FROM "addresses"
    WHERE "address"="109 Tileston Street"
);

-- TO find out about the address where the package sent, it's dropped in warehouse but apparently that's not the answer
SELECT * FROM "addresses"
WHERE "id" =(
    SELECT "address_id" FROM "scans"
    WHERE "package_id"=(
    SELECT "id" FROM "packages"
    WHERE "from_address_id"=(
        SELECT "id" FROM "addresses"
        WHERE "address"="109 Tileston Street"
    )
) AND "action" = 'Drop'
);
 -- From scans we can say it was picked up again but not delieverd anywhere, let's find out about the driver. driever_id is 17
SELECT * FROM "scans"
    WHERE "package_id"=(
    SELECT "id" FROM "packages"
    WHERE "from_address_id"=(
        SELECT "id" FROM "addresses"
        WHERE "address"="109 Tileston Street"
    )
);

-- To find the name of the driver who has the package
SELECT * FROM "drivers"
WHERE "id"=17;