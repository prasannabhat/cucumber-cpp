# language: en 

Feature: Should say Hello BDD

  Scenario: Should be able to greet with Hello BDD! message
    Given An instance of Hello class is created
    When the sayHello method is invoked
    Then it should return
