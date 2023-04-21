-- Keep a log of any SQL queries you execute as you solve the mystery.
--Getting basic  information about the crime.
SELECT * FROM crime_scene_reports WHERE month=7 AND day=28;
--Checking witness interviews.
SELECT * FROM interviews WHERE day=28 AND month=7;