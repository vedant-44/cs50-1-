-- Keep a log of any SQL queries you execute as you solve the mystery.
--Getting basic  information about the crime.
SELECT * FROM crime_scene_reports WHERE month=7 AND day=28;
--Checking witness interviews.
SELECT * FROM interviews WHERE day=28 AND month=7;
--Getting license plate number.
SELECT * FROM bakery_security_logs WHERE month=7 AND day=28 AND hour=10 AND minute<25 AND minute>15;
--Checking atm transactions.
 SELECT * FROM atm_transactions WHERE month=7 AND day=28 AND atm_location='Leggett Street' AND transaction_type='withdraw';
--Getting details related to bank accounts.
 SELECT * FROM bank_accounts WHERE account_number IN(SELECT account_number FROM atm_transactions WHERE month=7 AND day=28 AND atm_location='Leggett Street' AND transaction_type='withdraw');
 --Possible suspect list using current information.
  SELECT * FROM people WHERE id IN(SELECT person_id FROM bank_accounts WHERE account_number IN(SELECT account_number FROM atm_transactions WHERE month=7 AND day=28 AND atm_location='Leggett Street' AND transaction_type='withdraw')) AND license_plate IN(SELECT license_plate FROM bakery_security_logs WHERE month=7 AND day=28 AND hour=10 AND minute<25 AND minute>15);