# Report document


# Requirements

## Introduction
    This Project is based With the number of client contacts rising by the day, the financial management system industry has witnessed some of the most rapid growth in the last year, and the database now contains all of the records. When it comes to handling money or important assets, it becomes an issue of credibility for both the service provider and the customer. Because everything is covered under one roof for consumer transparency, the banking management system is one of the most complicated systems. Every minute or second, everything from maintaining client information, account information, and transactions takes place.It not only saves transaction details and other data, but it also provides a report for use in other banking operations. Many procedures in this financial management system are automated, which makes it easier for the bank to operate. This lowers the need for manual labour, and automated operations will be mistake-free since they will only perform as intended, but human error is always a possibility when completing work manually.




## Advantages

-> The cost of operation per unit of services is lower for banks.

-> Offers convenience to customers since they are not required to go to the bank’s facilities.

-> There is a very low incidence of errors. 

-> The customer can obtain funds at any time from ATMs.


## Disadvantages
-> Chances of Bank going Bankrupt

-> Risk of Fraud and Robberies

-> Risk of Public Debt

## State of art/Research

The bank's fundamental processing systems are being modernised. It also analyses the reasons that drive modernisation, as well as essential success criteria and conversion methodologies. For a more comprehensive look at the Indian core systems market.

## SWOT Analysis

### Strengths
* One of the oldest industries.

        So long as humans have been alive, there’s been forms of banking. Initially, it was a bartering and exchange system, but now it’s much more than that. Banking teaches us the value of money, gives us access to loans to reach our dreams, and provides a host of other services related to credit cards, savings, and bonds.

* A leader in economic growth.

      It’s because of banking that we’ve seen such economic growth at home and worldwide. Supply and demand have fostered this growth and also improved financial trade, financial stability, and financial security. It’s also one factor behind increased employment and the reduction of worldwide poverty.

* Financial support after a crisis.

      After experiencing a loss or natural calamity, the banking industry helps customers get back on their feet. Insurance, investment, and loan options are to thank for this.

* Digital banking convenience.

      It’s now easier than ever to do banking online. You can deposit your check, pay your bills, and apply for a credit card without stepping foot into your bank’s branch. However, for more “in-depth” services, you’ll likely still need to make an appointment with a financial advisor. Some things are better handled in-person than electronically.

### Weaknesses
* Lack of worldwide coordination.

        Because the banking industry handles finances, it’s a vulnerable industry. It also relies heavily on the coordination of the economy, but this is a problem on a global scale. Europe holds more than 50% of the global market. Should it face a recession, the rest of the world (and banks) could suffer by proxy. Fluctuating currencies and exchange rates can also be trouble for banks.

* Old technology leads to vulnerabilities.

      Many banks still use outdated IT infrastructure to host online services. For instance, some banking websites don’t use case sensitive passwords or allow customers to put special characters in passwords. This makes passwords extremely weak and easy for hackers to brute-force into your accounts.

* No access to rural areas.

      Rural regions don’t have access to banking services. Part of this is because of conflicts between government objectives and banking objectives. Another reason for the lack of access is because providing services to rural areas can be more trouble than it’s worth financially.
### Opportunities
* Move into rural regions.

      As mentioned in the weaknesses section, the banking industry hasn’t approached rural areas yet. It’s an opportunity to get more customers, but achieving such a move isn’t a small feat. It may take dozens of years before this approach is successful.

* Offer more or lose customers.

      Banks should keep up with consumer demands and demographic changes. Having a banking app isn’t enough — consumers (especially millennials) crave more options. Providing what people want will require heavy research from banks. It will also require segmenting customers to create custom-service options. For instance, what students opening their first account needs will differ greatly from homeowners or business owners.


### Threats

* The biggest threat of all: recessions.

      The biggest threat to any industry handling money is a recession. It’s the most critical threat that can make or break a business. If small and big businesses fall, it’ll have a direct consequence on the banking industry.

* Data breaches.

      With banks offering more online options, it also increases the risk for data breaches. People give other websites like invoicing companies (like PayPal) access to their bank to receive and transfer money. If these companies have a breach, it gives hackers access to personal bank accounts. Although there is nothing banks can do for breaches on other websites they can make sure their own is heavily protected against hackers.

* So much competition.

      Banks have a ton of competition; not just with other banks, but with other alternative finance companies. This includes mutual fund companies and insurance companies. Millennials are especially receptive to getting financial services from fintech companies rather than traditional banks.
      
## 4W's and 1 H

### WHO
    Any person from a student to a professional can take up this project as there is a huge scope to implementing more and more functions and features within a function and make the code more effecient and robust.

### WHAT
    During the process of analysis of the code, enthusiasts can figure out how to work on a real-life problem, find solutions to any problems and have workarounds for it. Analysis of how to implement a problem and apply the theoritical knowledge.
    
### WHEN 
    There is no particular moment to learn. This can be implemented anytime and is easy to implement on any IDE or Compiler.
    
### WHERE
    As metioned earlier, this can be used for analysis and for better understanding of the c-language.
    
### HOW 
    The objective is to implement theory to practise.


## High Level Requirements
       1. ID          : HLR_01
          DESCRIPTION : Visual Studio code platform.
          PLATFORM    : Software.
       
       2. ID          : HLR_02
          DESCRIPTION : Window 10 or Linux
          PLATFORM    : Software.
       
       3. ID          : HLR_03
          DESCRIPTION : GitHub
          PLATFORM    : Software.

## Low Level Requirements
       1. ID          : LLR_01
          DESCRIPTION : Basic Salary
       
       2. ID          : LLR_02
          DESCRIPTION : Formulas


## HIGH_LEVEL_DIAGRAM 

![132397596-09eea363-54be-4499-aae9-dd8a4892163d](https://user-images.githubusercontent.com/66585290/142772902-a0e71d3a-8996-4521-830c-0e9022436d0b.png)


# UML Diagrams


![services_uml_diagram_atm_system_7](https://user-images.githubusercontent.com/66585290/142772525-5409a6da-f949-44e5-8d9f-a005030dfdba.png) ![Software-Development-ATM-UML-Diagrams-UML-Package-Diagram-for-Bank](https://user-images.githubusercontent.com/66585290/142772640-f9d6618e-cbeb-4dbe-905a-24e36fddebd4.png)


# Implementation

## Folder Structure



| Folder | Description |
| ------ | ------ |
| inc | All header files |
| src | Main source code for calculator |
| test | All source code and data for testing purposes |
| build | Build output (Not included in git) |


## Test Plan and Test Output

## High Level Test plan:

| ID | Description | Expected Input | Expected Output | Actual Output | Type of Test  |
| ------ | ----------- | ---------------| ----------------| --------------| --------------|  
| H_01 | To test with the wrong login password | failed | success | success | Scenario based |
| H_02 | Testing with bad credentials | success | success | success | success |
| H_03 | Out of bounds input |	Value out of bounds | success |success |Boundary based |


## Low Level Test Plan:

| Folder | Description | Expected Input | Expected Output | Actual Output | Type of Test  |
| ------ | ----------- | ---------------| ----------------| --------------| --------------|  
| H_01L_01 | Correct login credentials | success | success | success | Scenario based |
| H_01L_02 | Wrong login credentials | Wrong input | failed| failed | Scenario based |
| H_02L_01 | Next credentials of input to select the type of operation-Correct |	Success | success |success |Requirement based|
| H_02L_02 | Next credentials of input to select the type of operation-Wrong |	Wrong or invalid input | failed |failed |Requirement based |
| H_03L_01 | Input that is in bounds or out of bounds-correct |	success | success |success |Boundary based |
| H_03L_02 | OInput that is in bounds or out of bounds-wrong | Out of bounds | failed | failed |Boundary based |


