![FIULogo\_H\_CMYK](media/image1.jpeg){width="5.0in" height="0.9in"}

**DEPARTMENT OF ELECTRICAL AND COMPUTER ENGINEERING**

**EEL-4921C **

**SENIOR DESIGN II FINAL REPORT**

**Spring 2016**

**Smart Home System with Voice Command “Alfred”**

**TEAM 20**

Roy Lara 4267659 <rlara018@fiu.edu>

Angela Layne 1886523 <alayn001@fiu.edu>

Ariel Romero 4954259 <arome089@fiu.edu>

Patricia Sopena 5319793 <psope001@fiu.edu>

**Mentor: Dr. Gustavo Roig**

**April **

**2016**

**\
**

****Table of Contents****

ABSTRACT 8

I. EXECUTIVE SUMMARY 8

*Objectives* 9

*Constraints* 9

*Background* 10

*Ethical Consideration* 10

*End Product Description* 11

*Budget* 11

II\. PROBLEM STATEMENT 12

*A.* *Project Objectives* 12

*B.* *Constraints* 12

III\. ASSUMPTIONS AND LIMITATIONS 12

*A.* *Assumptions* 12

*B.* *Limitations* 13

IV\. NEEDS FEASIBILITY ANALYSIS 13

*A.* *Needs Analysis* 13

*B.* *Need Specification* 19

*C.* *Feasibility Analysis* 23

1\. *Types of Feasibility* 23

2\. *Feasibility Assessment* 26

*D.* *Marketability* 35

1\. *Domus Affordable Smart Home Automation Solution* 36

2\. *The Future of Smart Home - B.One* 39

V. RISK ANALYSIS 44

*A.* *Types of Feasibility* 44

*B.* *Risk Assessment* 46

*C.* *Exposure Matrix* 47

VI\. OPERATING ENVIRONMENT 48

VII\. INTENDED USER(S) AND INTENDED USE(S) 48

*A.* *Intended User(s)* 48

*B.* *Intended Use(s)* 49

VIII\. BACKGROUND 49

*A.* *VOCCA* 49

*B.* *Homey* 52

*C.* *NEEO* 55

IX\. INTELLECTUAL PROPERTY 60

*A.* *Automation Control of Electronic Devices, US 9,152,139 B2* \[7\]
60

*B.* *Voice Control Device and Voice Control Method US 9,153,232 B2*
\[8\] 62

*C.* *Actuator for Electric Blinds, US 4,773,464 \[9\]* 63

X. STANDARDS CONSIDERATIONS 64

XI\. GLOBALIZATION 65

*A.* *World Trade Organization* 65

*B.* *Importance of Eliminating the Barriers to Trade* 66

*C.* *Collaboration Tools* 67

*D.* *Perspective of our product in different countries and cultures* 67

XII\. HEALTH AND SAFETY 68

XIII\. ENVIROMENTAL CONSIDERATIONS 68

XIV\. SUSTAINABILITY CONSIDERATIONS 69

XV\. MANUFACTURABILITY CONSIDERATIONS 70

XVI\. ETHICAL CONSIDERATIONS AND SOCIAL IMPACT 71

*A.* *Ethical Considerations* 71

*B.* *Social Impact* 72

XVII\. CONCEPT DEVELOPMENT 74

*A.* *Concept Combination 1* 75

*B.* *Concept Combination 2* 76

*C.* *Concept Combination 3* 77

*D.* *Concept Selection* 77

XVIII\. END PRODUCT DESCRIPTION AND OTHER DELIVERABLES 79

*A.* *End Product Description* 79

XIX\. PLAN OF ACTION 87

XX\. MULTIDISCIPLINARY ASPECTS 95

XXI\. PERSONNEL 96

*A.* *Roy Lara* 96

*B.* *Angela Layne* 97

*C.* *Patricia Sopena* 98

D. *Ariel Romero* 99

XXII\. BUDGET 100

XXIII\. RESULTS EVALUATION 103

*Standards Consideration* 104

*Standards Consideration* 106

XXIV\. LIFE LONG LEARNING 107

XXV\. CONCLUSION 108

APPENDIX A 110

APPENDIX B 111

APPENDIX C 112

BIBLIOGRAPHY 115

SIGNING PAGE 117

[Figure 1 9](#_Toc449618946)

[Figure 3 – Brainstorm 14](#_Toc449618947)

[Figure 4 - BUD Industries JBH-4958-KO 21](#_Toc449618948)

[Figure 5 38](#_Toc449618949)

[Figure 6 - Smart socket 39](#_Toc449618950)

[Figure 7 - Smart iCon 39](#_Toc449618951)

[Figure 8 - B.One Smart Hub 43](#_Toc449618952)

[Figure 9 44](#_Toc449618953)

[Figure 10 46](#_Toc449618954)

[Figure 11 51](#_Toc449618955)

[Figure 12 51](#_Toc449618956)

[Figure 13 53](#_Toc449618957)

[Figure 14 53](#_Toc449618958)

[Figure 15 54](#_Toc449618959)

[Figure 16 55](#_Toc449618960)

[Figure 17 59](#_Toc449618961)

[Figure 18 60](#_Toc449618962)

[Figure 19 61](#_Toc449618963)

[Figure 20 62](#_Toc449618964)

[Figure 21 63](#_Toc449618965)

[Figure 22 70](#_Toc449618966)

[Figure 23 73](#_Toc449618967)

[Figure 24 74](#_Toc449618968)

[Figure 25 79](#_Toc449618969)

[Figure 26 81](#_Toc449618970)

[Figure 27 82](#_Toc449618971)

[Figure 28 83](#_Toc449618972)

[Figure 29 84](#_Toc449618973)

[Figure 31 86](#_Toc449618974)

[Figure 32 87](#_Toc449618975)

[Figure 33 – PERT Diagram 91](#_Toc449618976)

[Figure 34 – WBS Proposed 92](#_Toc449618977)

[Figure 35 – WBS Final 92](#_Toc449618978)

Table 1 - Attributes from client interview, survey and brainstorm 15

[Table 2 16](#_Toc449618980)

[Table 3 16](#_Toc449618981)

[Table 4 17](#_Toc449618982)

[Table 5 17](#_Toc449618983)

[Table 6 18](#_Toc449618984)

[Table 7 - Competitive Benchmark 20](#_Toc449618985)

[Table 8 22](#_Toc449618986)

[Table 9 26](#_Toc449618987)

[Table 10 27](#_Toc449618988)

[Table 11 27](#_Toc449618989)

[Table 12 28](#_Toc449618990)

[Table 13 29](#_Toc449618991)

[Table 14 30](#_Toc449618992)

[Table 15 30](#_Toc449618993)

[Table 16 31](#_Toc449618994)

[Table 17 31](#_Toc449618995)

[Table 18 32](#_Toc449618996)

[Table 19 33](#_Toc449618997)

[Table 20 34](#_Toc449618998)

[Table 21 34](#_Toc449618999)

[Table 22 34](#_Toc449619000)

[Table 23 35](#_Toc449619001)

[Table 24 - Weighted Scale 35](#_Toc449619002)

[Table 25 37](#_Toc449619003)

[Table 26 41](#_Toc449619004)

[Table 27 41](#_Toc449619005)

[Table 28 42](#_Toc449619006)

[Table 29 42](#_Toc449619007)

[Table 30 42](#_Toc449619008)

[Table 31 43](#_Toc449619009)

[Table 32 - Exposure Matrix 47](#_Toc449619010)

[Table 33 47](#_Toc449619011)

[Table 34 50](#_Toc449619012)

[Table 35 56](#_Toc449619013)

[Table 36 56](#_Toc449619014)

[Table 37 56](#_Toc449619015)

[Table 38 57](#_Toc449619016)

[Table 39 57](#_Toc449619017)

[Table 40 57](#_Toc449619018)

[Table 41 57](#_Toc449619019)

[Table 42 57](#_Toc449619020)

[Table 43 58](#_Toc449619021)

[Table 44 58](#_Toc449619022)

[Table 45 58](#_Toc449619023)

[Table 46 58](#_Toc449619024)

[Table 47 58](#_Toc449619025)

[Table 48 59](#_Toc449619026)

[Table 49 59](#_Toc449619027)

[Table 50 75](#_Toc449619028)

[Table 51 76](#_Toc449619029)

[Table 52 77](#_Toc449619030)

[Table 53 77](#_Toc449619031)

[Table 54 78](#_Toc449619032)

[Table 55 78](#_Toc449619033)

[Table 56 80](#_Toc449619034)

[Table 57 81](#_Toc449619035)

[Table 58 83](#_Toc449619036)

[Table 59 83](#_Toc449619037)

[Table 60 84](#_Toc449619038)

[Table 61 85](#_Toc449619039)

[Table 62 86](#_Toc449619040)

[Table 63 87](#_Toc449619041)

[Table 64 – Proposed Task Chart 88](#_Toc449619042)

[Table 65 – Final Task Chart 89](#_Toc449619043)

[Table 66 – Proposal Gantt Chart 90](#_Toc449619044)

[Table 67 – Completed Project Gantt Chart 91](#_Toc449619045)

[Table 68 – Proposed Budget 101](#_Toc449619046)

[Table 69 – Final Budget 102](#_Toc449619047)

[Table 70 105](#_Toc449619048)

[Table 71 107](#_Toc449619049)

[]{#_Toc449618869 .anchor}ABSTRACT

“Alfred”, the smart home system is a simple and easy to use house
automation control system. It is friendly for all ages and allows the
users to control lights, garage doors, make phone calls, and checks the
status of doors and windows, with a voice user interface or through a
smart phone application. This system makes life easier and more
comfortable, especially for the elderly and the disable. This is a study
on the most cost efficient design to implement a smart home automation
system that communicates wirelessly and through a voice recognition user
interface. With the current existing readily available modules on the
market, we chose the Arduino Mega 2560 and an EasyVR shield to add voice
functionality to the system. A simple installation and programmed
command set was all that was needed to realize the voice recognition
feature. Choosing to transmit via WiFi, the Dragino Yun Shield
implements an OpenWRT Linux on top of the board with Ethernet
capabilities. It communicates to a custom made android mobile
application for all android smart phones. The design was also evaluated
for the most beneficial power usage, cycling through the possible
circuit designs until finally deciding on Triacs. This system supports
the hypothesis of an efficient design of a voice recognizing wireless
home controller.

**ALFRED**

Automated living, friendly Robotic Environment Director

I.  [[[[[[]{#_Toc449618870 .anchor}]{#_Toc437211501
    .anchor}]{#h.z6m23nyppzny .anchor}]{#h.wxj81uv7pum7
    .anchor}]{#h.n5xm005e0vxu .anchor}]{#h.v3yxxzg6nnql
    .anchor}EXECUTIVE SUMMARY

  Smart Home System with Voice Command “Alfred”
  ----------------------------------------------- ------------------------------
  Team Number: 20                                 Team Name: The Owls
  Mentor: Dr. Gustavo Roig                        Team Leader: Ariel Romero
  Team Member: Roy Lara                           Team Member: Patricia Sopena
  Team Member: Angela Layne                       Team Member:

Summarized Problem Statement
----------------------------

This project is about designing an affordable voice commanded smart home
system. The system is able to control the lights of at four areas of
your house. Also, the system opens and closes the garage door, besides
checking the status of the remaining doors and windows. To make the
system user friendly for all ages, it is able to make phone calls not
only to the emergency service but also to the favorite contacts. Since
the system is not only operated by an app, but also by voice commands
the user can reprogram the voice commands to their favorite choice
personalizing the system. All these functions controlled by one single
piece of equipment with no necessity of additional devices.

Objectives and Constraints
--------------------------

[]{#_Toc449618871 .anchor}*Objectives*

The objective of this project was to create an affordable smart home
system using existing technology that will make life easier, not only
for those who use the application on a smart phone, but also to those
who are not so adept to technology. The system is able to perform some
basic functions like turning on and off lights via voice command or
smart phone, among other objectives listed below.

The main objectives of the project are:

1.  The system is able to control lights from a variety of areas.

2.  The system controls the garage door.

3.  The system checks the doors and windows status.

4.  The system is able to make phone calls.

5.  The system has a moderate grade of installation difficulty.

[]{#_Toc449618872 .anchor}*Constraints*

Our smart home system has constraints that created limitations on it.
However, those limitations did not make it impossible to build it and
are only challenges that were overcome. The constraints that we
encountered in the development of our system are listed below.

The constraints of the project are:

1.  The system needed to be operable by voice, phone application and
    regular switches.

2.  The system needed to be small enough to fit in a closet or attic.

3.  The system needed to be one device.

Project Description
-------------------

Loved ones are left at home, the elders of our households, even those
with some kind of disabilities; and sometimes is difficult for them to
reach a light switch, or in case of an accident to dial a phone. What if
a smart home system was made not only for people who loves technology
but also for elders?  A system that’s easy to use, with the ability to
understand your voice commands and also a phone app for your smart phone
or tablet to control it.

We have created a voice command system that is directly connected to
your home infrastructure in order to allow any homeowner (including
those with disabilities) to access their house. Our design allows anyone
to turn on or off the light of his or her house, make a phone call in
case of an emergency. Also, users that are more comfortable using a
phone application can manage every aspect of the system through the app,
even check the status of the doors and windows and control their garage
doors from their phone app and also through the voice command.

![C:\\Users\\Ximena\\Downloads\\Image
1.png](media/image2.png){width="3.4079713473315834in" height="1.81in"}

[]{#_Toc449618946 .anchor}Figure 1

Sections
--------

[]{#_Toc449618873 .anchor}*Background*

Upon researching competing products that are already in the market.
Listed below are three products, giving a simple glimpse of what the
current state of the art on smart home automation control systems.

***VOCCA***

> The VOCCA is an available technology developed by a team from Tel
> Aviv, Israel integrated by: Erez Nimrod, Ori Indursky, Vladislav
> Serebnik, Adi Malik, Ofer Masamy, Maggi Yovov, and Nir Dvash \[4\].
> VOCCA is a smart lighting system, which does not required Wi-Fi,
> professional setup, or installation since it is a simple plug and play
> voice activated bulb adapter.

***HOMEY***

> Homey is a voice-controlled home automation technology that allows you
> to talk to your room. A large team from Enschede, Netherlands
> developed it with over 15 members (Athom) \[5\]. Homey is described as
> a personal assistant that will help make a home more personal, since
> it is designed to control “from lights to music, from climate to TV.”
> The possibilities of this device are many, especially combining
> functions; for example, it is able to sync the light and the coffee
> machine with the alarm clock, making the user’s morning an incredible
> experience.

***NEEO***

> NEEO, the Thinking Remote is a revolutionary remote that allows home
> automation by hand recognition. It was co-founded by Raphael
> Oberholzer (CEO) and Oliver Studer (CTO) of NEEO Inc \[6\]. NEEO is a
> smart home automation system that connects and controls the devices of
> the house in very simple way. Instead of having a control remote for
> every device, this technology enables the user to have only one
> control for all of them

[]{#_Toc449618874 .anchor}*Ethical Consideration*

When the team starts developing the idea of our Smart Home System
“Alfred”, one of the first objectives that comes to our mind was the
desire of improving the quality of life of elderly and disable people.
But we were aware that the use of human interfaces in the design of the
smart home system could present several ethical issues, even more if the
system is meant to be also used by people with any kind of disability of
restriction (physical, cognitive, or sensorial). Therefore we were
extremely careful with the design of the system; we develop the
interface having in mind that all type of people could be accessing to
the system, in that way we treat fairly all persons regardless of such
factors as race, religion, gender, disability, age, or national origin.
In the process of the design we also sought and accepted honest
criticism of our technical work; we acknowledged and corrected errors,
and credited the contributions of others. As new developers of
technology, the assistance of our mentor was essential to achieve an
improved project.

[]{#_Toc449618875 .anchor}*End Product Description*

Our end product is enclosed in a nice, safe, operable electrical box
with dimensions of 8” width x 10” Height x 4” Depth that you can install
in a utility closet or attic. Inside the box the user will find a
different layers system controlled by an Arduino Mega 2560 board that is
going to be connected to the house infrastructure. The system comprises
different layers or modules, for example, a voice command shield with a
3.5mm audio output jack and a 8 ohm speaker output, a FONA 800
Voice/Data GSM module, a Triac board, a relay board, magnetic contact
switches in doors and windows couple to the Arduino, a Wi-Fi Module to
communicate with its phone application. All these components working as
a single unit with different microphones around the house will give the
user the ability to control the lights and garage doors trough their
voice, phone or regular switches; also, make calls and check the doors
and windows status. Since our system will be a single unit, the use of a
technician is recommended in order to evaluate your house and install
the product.  

![C:\\Users\\Ximena\\Downloads\\Image
2.png](media/image3.png){width="2.844970472440945in"
height="1.96in"}**Figure 2**

[]{#_Toc449618876 .anchor}*Budget*

Every development project needs to be an analysis of all expenses that
it could have during the concept, design, testing, and production; in
other words a deep look into the budget. The budget includes every
single expense: charges for team member’s work, the use of labs, and the
cost of all components. The budget shouldn’t be obtained by intuition;
it has to be a result of the use of a project planning software. After
entering all the information in the software used (Open Workbench), we
obtained the estimated found needed in order to bring our project to
live. To develop our system it costs us \$6,488.80 USD.

The Smart Home system with voice commands that we have created, is able
to perform basic operations like turning on and off the lights, opening
the garage door and making phone calls using voice commands from the
user. Like any other electronic system there were some constraints that
we encountered, however none of the constraints made it impossible for
us to build and implement our system, not even the existing patents
since we did not infringing in any of them. Also, the budget makes our
system affordable once we build and get our system in the market.

I.  []{#_Toc449618877 .anchor}PROBLEM STATEMENT

This project is about designing an affordable voice commanded smart home
system. The system is able to control the lights of at least four areas
of your house. Also, the system is able to open and close the garage
door, besides checking the status of the remaining doors and windows. To
make the system user friendly for all ages, it is able to make phone
calls not only to the emergency service but also to the favorite
contacts. Since the system is not only operated by an app, but also by
voice commands the user can reprogram the voice commands to their
favorite choice personalizing the system. All these functions are
controlled by one single piece of equipment with no necessity of
additional devices.

A.  []{#_Toc449618878 .anchor}*Project Objectives*

<!-- -->

1.  Controlled Areas

1.1 The system should be able to controls the garage door

> 1.2 Most important areas to control light; bedroom, living room and
> kitchen

1.  Safety

<!-- -->

1.  2.  1.  The system should be able to perform emergency calls, and to
        favorite contacts

    2.  The system should be able to check the doors and windows to see
        if they are open or close.

<!-- -->

1.  Interaction

    1.  The system will confirm your voice commands with a tone.

    2.  The system could be reprogrammable with voice commands of your
        choice.

2.  Marketability

<!-- -->

1.  2.  3.  4.  1.  The system should have a moderate grade of
        installation difficulty.

<!-- -->

A.  []{#_Toc449618879 .anchor}*Constraints*

<!-- -->

1.  The system should be operable by voice, phone application and
    regular switches.

2.  The system should be small enough to fit in a closet or attic.

3.  The system should be one device.

<!-- -->

I.  []{#_Toc449618880 .anchor}ASSUMPTIONS AND LIMITATIONS

<!-- -->

A.  []{#_Toc449618881 .anchor}*Assumptions *

    1.  The prototype will be finished by April 2016.

    2.  All team members will be able to contribute to the project.

    3.  The total cost in parts for the product development will not
        exceed \$250.00 USD.

    4.  The customer will set up the product in a closet or attic.

    5.  The customer will have Internet in the house.

B.  []{#_Toc449618882 .anchor}*Limitations *

<!-- -->

1.  Maximum of two garage doors to be controlled.

2.  At least one 120-volt outlet will be available to feed the unit.

3.  The end-user will need a PC in order to modify the voice command
    program.

<!-- -->

I.  []{#_Toc449618883 .anchor}NEEDS FEASIBILITY ANALYSIS

<!-- -->

A.  []{#_Toc449618884 .anchor}*Needs Analysis*

The need analysis section will describe step by step how project’s
objectives, constraints and the problem statement are developed.

The first step in the need analysis process is to conduct an interview
with our client in order to define the client’s needs. Below you can
find our interview questionnaire and the answers from our client.

### *Client Interview:*

1.  What kind of features would you like to see in a smart home
    automation system?

-   App

-   Calls

-   Garage door

-   Security (Check doors and windows to see if they are open)

1.  While inside your house for the system to communicate with you,
    would you like a voice or a small smooth tone that confirm your
    commands?

-   Tone

1.  Would you be willing to contact a licensed electrician if you don’t
    want to install the system?

-   Yes

1.  What would you be willing to pay for such technology?

-   \$ 400.00 USD

1.  What appliances and other household items would you like to see a
    smart solution for?

-   Garden Lights

-   Kitchen appliances

1.  What do you like about the existing products?

-   To be able to check if my house windows and doors are closed through
    my phone app.

1.  Take me through a day of using this technology.

> When I wake up early in the morning I would tell my bedroom lights to
> turn on, than go to the bathroom and do the same, I get ready to go to
> work and as I walk through the house I will turn on the light where
> needed. When I am going to leave I would tell the garage door to open
> so I can take out the car, after I leave the house for security
> purposes I will use my phone app to close the garage door and turn on
> the alarm system.

The second step is to conduct a survey to our potential customers, to
identify the user’s needs. The survey is included, along with the
results, in Appendix C.

The third step is a team brainstorm where we analyze the interview and
the survey and add new needs to our project that were not presented
before.

***Brainstorm:***

![](media/image4.png){width="6.0in" height="3.6666666666666665in"}

[]{#_Toc449618947 .anchor}Figure 3 – Brainstorm

-   Make the system one device and not sale it separately

-   Easy to use, can hire someone to install it, and the user does not
    need to have any technical knowledge

-   The system does not require to have a smart home or tablet if the
    user does not want, since it can be use through voice commands.

-   Our smart home system will be able to make phone calls not only for
    emergencies like 911 but also to our favorite contacts.

-   The system should be small enough to fit in a closet or attic

-   The system should be able to control the garden lights

-   The system could be reprogrammable with voice commands of your
    choice

Now we are going to list all the attributes collected from the client
interview, the survey and the brainstorm. Remove the repeated entries
and eliminate constraints, functions and implementations. Finally we
order the objectives by similar categories and the result will be a
pruned list of objectives shown below.

> The fourth step is determining attributes from client interview,
> survey and brainstorm.

  **Source**   **Attributes**
  ------------ --------------------------------------------------------------------------------------------
  Client       The system should be operable by voice, phone application and regular switches.
  Client       The system should be able to controls the garage door
  Client       The system should be able to perform emergency calls, and to favorite contacts
  Client       The system should be able to check the doors and windows to see if they are open or close.
  Client       The system will confirm your voice commands with a tone
  Client       The system could have a retail price of \$400.00 USD
  Survey       Most important areas to control light; bedroom, living room and kitchen.
  Survey       The system should have a moderate grade of installation difficulty
  Survey       The system should be operable by voice, phone application and regular switches.
  Survey       The system could have a retail price around \$300.00 USD
  Survey       The system should be able to perform calls.
  Brainstorm   The system could be reprogrammable with voice commands of your choice
  Brainstorm   The system should be able to control the garden lights
  Brainstorm   The system should be one device
  Brainstorm   The system should be small enough to fit in a closet or attic

[]{#_Toc449618979 .anchor}Table 1 - Attributes from client interview,
survey and brainstorm

The fifth step is identifying and removing repeated entries.

  **Source**   **Attributes**
  ------------ --------------------------------------------------------------------------------------------
  Client       The system should be operable by voice, phone application and regular switches.
  Client       The system should be able to controls the garage door
  Client       The system should be able to perform emergency calls, and to favorite contacts
  Client       The system should be able to check the doors and windows to see if they are open or close.
  Client       The system will confirm your voice commands with a tone
  Client       The system could have a retail price of \$400.00 USD
  Survey       Most important areas to control light; bedroom, living room and kitchen.
  Survey       The system should have a moderate grade of installation difficulty
  Survey       The system should be operable by voice, phone application and regular switches.
  Survey       The system could have a retail price around \$300.00 USD
  Survey       The system should be able to perform calls.
  Brainstorm   The system could be reprogrammable with voice commands of your choice
  Brainstorm   The system should be able to control the garden lights
  Brainstorm   The system should be one device
  Brainstorm   The system should be small enough to fit in a closet or attic

[]{#_Toc449618980 .anchor}Table 2

Repeated are eliminated:

  **Source**   **Attributes**
  ------------ --------------------------------------------------------------------------------------------
  Client       The system should be able to controls the garage door
  Client       The system should be able to perform emergency calls, and to favorite contacts
  Client       The system should be able to check the doors and windows to see if they are open or close.
  Client       The system will confirm your voice commands with a tone
  Client       The system could have a retail price of \$400.00 USD
  Survey       Most important areas to control light; bedroom, living room and kitchen.
  Survey       The system should have a moderate grade of installation difficulty
  Survey       The system should be operable by voice, phone application and regular switches.
  Survey       The system could have a retail price around \$300.00 USD
  Brainstorm   The system could be reprogrammable with voice commands of your choice
  Brainstorm   The system should be able to control the garden lights
  Brainstorm   The system should be one device
  Brainstorm   The system should be small enough to fit in a closet or attic

[]{#_Toc449618981 .anchor}Table 3

The sixth step is eliminating functions, constraints and
implementations.

  **Source**   **Attributes**                                                                                
  ------------ -------------------------------------------------------------------------------------------- -----------
  Client       The system should be able to controls the garage door                                         
  Client       The system should be able to perform emergency calls, and to favorite contacts                
  Client       The system should be able to check the doors and windows to see if they are open or close.    
  Client       The system will confirm your voice commands with a tone                                       
  Client       The system could have a retail price of \$400.00 USD                                          
  Survey       Most important areas to control light; bedroom, living room and kitchen.                      
  Survey       The system should have a moderate grade of installation difficulty                            
  Survey       The system should be operable by voice, phone application and regular switches.              Constrain
  Survey       The system could have a retail price around \$300.00 USD                                      
  Brainstorm   The system could be reprogrammable with voice commands of your choice                         
  Brainstorm   The system should be able to control the garden lights                                        
  Brainstorm   The system should be one device                                                              Constrain
  Brainstorm   The system should be small enough to fit in a closet or attic                                Constrain

[]{#_Toc449618982 .anchor}Table 4

Table with eliminated functions constraints and implementations

  **Source**   **Attributes**
  ------------ --------------------------------------------------------------------------------------------
  Client       The system should be able to controls the garage door
  Client       The system should be able to perform emergency calls, and to favorite contacts
  Client       The system should be able to check the doors and windows to see if they are open or close.
  Client       The system will confirm your voice commands with a tone
  Client       The system could have a retail price of \$400.00 USD
  Survey       Most important areas to control light; bedroom, living room and kitchen.
  Survey       The system should have a moderate grade of installation difficulty
  Survey       The system could have a retail price around \$300.00 USD
  Brainstorm   The system could be reprogrammable with voice commands of your choice
  Brainstorm   The system should be able to control the garden lights

[]{#_Toc449618983 .anchor}Table 5

Steps seventh, pruned list of objectives organized by categories.

  **Source**   **Attributes**                                                                               **Categories**
  ------------ -------------------------------------------------------------------------------------------- ------------------
  Client       The system should be able to controls the garage door                                        Controlled Areas
  Survey       Most important areas to control light; bedroom, living room and kitchen.                     Controlled Areas
  Brainstorm   The system should be able to control the garden lights                                       Controlled Areas
  Client       The system should be able to perform emergency calls, and to favorite contacts               Safety
  Client       The system should be able to check the doors and windows to see if they are open or close.   Safety
  Client       The system will confirm your voice commands with a tone                                      Interaction
  Brainstorm   The system could be reprogrammable with voice commands of your choice                        Interaction
  Survey       The system should have a moderate grade of installation difficulty                           Marketability
  Survey       The system could have a retail price between \$300.00 and \$400.00 USD                       Marketability

[]{#_Toc449618984 .anchor}Table 6

***Problem Statement***

This project is about designing an affordable voice commanded smart home
system. The system should be able to control the lights of at least five
areas of your house. Also, the system should be able to open and close
the garage door, besides checking the status of the remaining doors and
windows. To make the system user friendly for all ages, it will be able
to make phone calls not only to the emergency service but also to the
favorite contacts. Since the system is not only operated by an app, but
also by voice commands the user can reprogram the voice commands to
their favorite choice personalizing the system. All these functions
controlled by one single piece of equipment with no necessity of
additional devices.

***Project Objectives***

1.  Controlled Areas

1.1 The system should be able to controls the garage door

> 1.2 Most important areas to control light; bedroom, living room and
> hallway

1.  Safety

    1.  The system should be able to perform emergency calls, and to
        favorite contacts

    2.  The system should be able to check the doors and windows to see
        if they are open or close.

2.  Interaction

    1.  The system will confirm your voice commands with a tone.

    2.  The system could be reprogrammable with voice commands of your
        choice.

3.  Marketability

    1.  The system should have a moderate grade of installation
        difficulty.

***Constraints***

1.  The system should be operable by voice, phone application and
    regular switches.

2.  The system should be small enough to fit in a closet or attic.

3.  The system should be one device.

<!-- -->

A.  []{#_Toc449618885 .anchor}*Need Specification*

In this section we are going to analyze the objectives and problem
statement and translate them into engineering language. Also, we will
check our design operating environment and certain conditions in which
our system will be exposed. This and some assumptions made by our team
will lead to new specifications in our design.

***Controlled Areas***

1\. The system should be able to control the lights of at least five
areas of your house

2\. The system should be able to open and close the garage door.

The system will use an Arduino Mega 2560 board with at least five relays
that each will handle between 10 to 20 amps of current. That way with a
low voltage signal of 5 volts we can control different lights and the
garage door.

***Safety ***

1\. The system should be able to perform emergency calls, and to favorite
contacts.

2\. The system should be able to check the doors and windows to see if
they are open or close.

The system will use a FONA 800 Shield - Voice/Data Cellular GSM for
Arduino. It has a Quad-band 850/900/1800/1900MHz. Capable to make and
receive voice calls using an external 8Ω speaker + electret microphone.
Also, the Arduino Mega 2560 coupled with magnetic contact switches will
make the system able to check the status of your doors and windows.

***Interaction***

1\. The system will confirm your voice commands with a tone.

2\. The system could be reprogrammable with voice commands of your
choice.

The system will have a voice recognition module that includes a command
to process and download custom sound tables. Also it will Provides a
3.5mm audio output jack suitable for headphones or as a line out, and an
8 ohm speaker output.

***Marketability***

1\. The system should have a moderate grade of installation difficulty.

2\. The system could have a retail price between \$300.00 and \$400.00
USD

Since the system will be a single unit, the use of a technician is
recommended in order to evaluate your house and install the product.
Also, based on our client interview, survey and competitive products on
the market our system can be sold starting in a price of \$300.00 USD
for a standard system.

***Competitive Benchmark ***

  ** **                        **Insteon**                                                          **Lutron**                          **Our design**
  ---------------------------- -------------------------------------------------------------------- ----------------------------------- ----------------------------------------------------------------
  Controlled areas             2 lights 1 Door / Window security sensor, possibilities to expand.   4 lights, possibilities to expand   5 lights, garage door control, 1 Door / Window security sensor
  Able to make calls           No                                                                   No                                  Yes
  Single or multiple devices   Multiple                                                             Multiple                            No, only one device
  Voice command capability     No                                                                   No                                  Yes
  Cost                         \$369.99 USD                                                         \$356.00 USD                        \$350.00 USD

[]{#_Toc449618985 .anchor}Table 7 - Competitive Benchmark

***Constrains**:*

1\. The system should be operable by voice, phone application and regular
switches.

2\. The system should be small enough to fit in a closet or attic.

3\. The system should be one device.

The system will be connected to your house’s lights infrastructure, so
your regular switches will be available. As well as a smartphone
application that allows you to interact with the system when you are not
at home. Also, a variety of microphones will be installed around your
house, so you can interact with the system through your voice.
Microphone sensitivity -38dB (0dB=1V/Pa @1KHz), load Impedance 2.2K,
operating voltage 3V, almost flat frequency response in the range 100Hz
– 20 kHz. The microphones could be set for short or large range.
Finally, different layer like voicing system, calling module and relays
boards will be assembled into a single smart unit. It will be
preinstalled and enclosed in an electrical box ready for you.

Tentative Dimensions 8” width x 10” Height x 4” Depth

Box from BUD industries JBH-4958-KO

![C:\\Users\\Ximena\\Downloads\\Box
Image.png](media/image5.png){width="5.714376640419948in"
height="4.22in"}

[]{#_Toc449618948 .anchor}Figure 4 - BUD Industries JBH-4958-KO

***Assumptions and Limitations***

*Assumptions: *

1\. The prototype will be finished by March 2016

2\. All team members will be able to contribute to the project.

3\. The total cost in parts for product development will not exceed
\$250.00 USD

4\. The customer will set up the product in a closet or attic.

5\. The customer will have Internet in the house.

*Limitations: *

1\. Maximum of two garage doors to be controlled.

2\. At least one 120-volt outlet will be available to feed the unit.

3\. The end-user will need a PC in order to modify the voice command
program.

***Operating Environment***

Design a device that can withstand the daily environmental hazards may
be the key of success in a project, so is very important to analyze our
system’s operating environment. Our system will be mainly installed
inside the house in a closet or attic. In a worst-case scenario the
users will install the unit outside the house and the system is going to
be exposed to heavy rains, sun and dust. Since the system will be
installed and attached to the infrastructure of the house, the unit
should not suffer high drops. Another condition to take into
consideration is the temperature of operation. The system will be most
likely installed in attics what makes the temperature around 90 F.
Finally, in these locations the system may be exposed to small animals
or insects, therefore the system needs to be in a box.

***Specifications***

  **Device**                     **Specification**
  ------------------------------ ------------------------------------
  **Arduino**                    Mega 2560
  Input Voltage                  6-20V (limit), 7-12V (Recommended)
  DC Operating voltage           5 Volt
  DC Current per I/O pin         20 mA
  **Voice Recognition module**   EasyVR Shield 3.0
  []{#RANGE!A7 .anchor}Mic       Horn EM9745P-382
  Sensitivity                    -38dB (0dB=1V/Pa @1KHz)
  Distance                       3 Meters
  Sound output method            3.5mm jack, and/or 8 ohm speaker
  **Door Sensor **               Magnetic contact switch
  Rated current                  100 mA max
  Rated voltage                  200 VDC max
  Distance                       15mm max
  **Phone Shield **              FONA 800 Shield
  Band                           Quad-band 850/900/1800/1900MHz
  Input                          Electret Mic (Horn EM9745P-382)
  Output                         External 8Ω speaker
  **Unit case**                  JBH-4958-KO
  Tentative Dimensions           8” width x 10” Height x 4” Depth

[]{#_Toc449618986 .anchor}Table 8

In this section we analyzed the objectives and problem statement in a
more technical language. Also, we took a closer look to the different
environmental hazards that can affect the functionality of our design.
In addition, we evaluated some assumptions and limitations in our
project. The final result was the specifications of our design.

A.  []{#_Toc449618886 .anchor}*Feasibility Analysis*

On this section we will be analyzing if the project can be done and if
it will be success.

*Types of Feasibility*
======================

**1.1 Technical**

a.  Does the technology exist?

The technology for a smart home system already exist, we are
implementing a voice command to the already existing technology for home
automated systems which is also available in the market for other
engineering applications.

a.  Is it available locally?

Most of the technology used in this project, is found locally and
nationally, the material that is within the US and is not here in
Florida takes about 2 to 7 days depending on the shipping state.

a.  Can it be obtained?

Yes, all the technology needed can be obtained, locally, and from other
states, everything can be bought over the Internet or in local stores.

a.  Are fundamentally new inventions required?

In this project, there are not new inventions required, the technology
already exists and with this project is being improved.

**1.2 Resource**

a.  Do we have sufficient Skills?

The team for this project is considered to have sufficient skills; there
are three (3) electrical engineers, and a computer engineer who can
manage the programming part of the project.

a.  Do we have sufficient equipment?

We have sufficient equipment, the material needed to start the project
has been acquired, and some of the units are on route to be delivered.

a.  Do we have sufficient number of people?

The group considers that there are enough members to handle the work
that needs to be done.

**1.3 Economic**

a.  Is the project possible, given resource and constraints?

The project is possible, the technology needed to build the system is
available, the skills needed are available and the constraints like
implementing the voice commands with the smart home system is something
manageable with an integrated system that is added to an Arduino Mega
2560 board, just like it will be done with the phone calls. The boards
that are being used to build the system are small enough to make the
system of a manageable size that can be hidden away, as per our client’s
request. Since all the technology that is being used in the creation of
this system are integrated boars it will not be impossible to make it
one whole system, however this is our biggest challenge. All the
material used is affordable which will also help us stay within the
budget to market our product at a reasonable and competitive price.

**1.4 Schedule**

a.  What are the chances of meeting the intermediate mileposts?

Having into account our objectives, every resource we have available to
complete the project like technology, skills; also knowing that there
are constraints to have into account, we believe that the project is
possible and we will be able to meet our intermediate milepost.

a.  What are the chances of meeting the PDR (Preliminary Design Review)
    requirements?

The system will be able to meet the Preliminary Design Review
requirement; it can proceed into design and can meet the cost
requirements, schedule, risk, and system constraints

a.  What are the chances of meeting the CDR (Critical Design Review)
    requirements?

Once the system has been the design and has met the PDR requirements, it
is feasible to meet the Critical Design Review; the system will be able
to proceed to fabrication, demonstration and test. If the design is done
correctly, then all the performance requirements within cost, schedule,
risk and constraints will be met.

**1.5 Cultural**

a.  Social acceptability? Will there be a positive impact on the local
    culture. Will there be a positive impact on general culture.

During this time society is evolving almost as fast as technology is,
and new technologies are been accepted not only in our local culture but
also the general culture. It is true that in general people refuses
change; however, as far as technology goes, most of the people of all
ages are getting used to the changes and are looking forward for the
next new thing that will make life easier or cooler. Therefore, our team
believes that creating an affordable smart home system that will also
recognize a voice command will positively impact our culture, because
not only people who has the means to acquire a smart home system will be
able to have it, but much more people who thought they could never
afford such a system. Also, the system will be user friendly and not
only people with some knowledge of technology or that have access to
smartphones and know how to use the applications will be able to use it,
but even people with disabilities that want more independence, they can
talk to their houses to turn on a light or even open a door.

a.  Potential labor objections?

We believe that there will be no potential labor objections, since it is
a new product and it will create more work, not only of the suppliers of
the parts, but also for those who will assemble the system if the system
goes into market.

a.  Manager resistance?

Manager resistance will not be seen so much in the manufacturing stage
of the part, unless there are difficulties assembling the units or
programing them. However, some resistance could be seen when the product
is on the market, since it will be something new and different from what
they are used to sale, also the system will be more affordable which
will make it seem as if they were selling more product for less money,
while with other products they can make huge packages and in one sale
see a higher income for the store.

**1.6 Legal**

a.  Organizational conflicts and policies?

At the present time there are no conflicts. It is our Policy to respect
the privacy of the individuals that use our product.

a.  Laws or regulations impeding the project?

The National Electrical Installation Standards, these standards are held
for all electrical home installations on performance and safety
requirements.

a.  Laws of regulation limiting the project.

The Fourth amendment right to privacy comes to question in our system.
We will not collect information or share any information, completely
respecting people’s privacy in their homes.

**1.7 Marketing**

a.  Will the general public accept the product?

According to the results of our survey, in general the project will be
accepted by the public, a 92.31% of the people who answer the survey,
likes the idea of having a smart home system they can talk to.

*Feasibility Assessment*
========================

  **Attribute**                                          **Weight**   **1**     **2**   **3**     **4**   **5**      **Why?**                                                                                              **Solution**
  ------------------------------------------------------ ------------ --------- ------- --------- ------- ---------- ----------------------------------------------------------------------------------------------------- --------------------------------------------------------------------------------------
                                                                      **Low**           **Med**           **High**                                                                                                         
  **Technical Feasibility**                              ** **        ** **     ** **   ** **     ** **   ** **      ** **                                                                                                 ** **
  Does the technology exist?                             5                                                X          The technology to create and build our system already exist                                           Enough
  Is the technology available locally?                   4                                        X                  The technology is available within the US, not all locally (Florida)                                  Buy Online and pay for shipping
  []{#RANGE!A6 .anchor}Can the technology be obtained?   5                                                X          The technology is affordable and can be easily acquired                                               Enough
  Are fundamentally new inventions required?             2                      X                                    No new inventions are required, however, there is new code needed for the programming of the boards   Use programs that are open source and develop the code needed from the existing code

[]{#_Toc449618987 .anchor}Table 9

  **Attribute**                             **Weight**   **1**     **2**   **3**     **4**   **5**      **Why?**                                                                                                                                                              **Solution**
  ----------------------------------------- ------------ --------- ------- --------- ------- ---------- --------------------------------------------------------------------------------------------------------------------------------------------------------------------- --------------------------
                                                         **Low**           **Med**           **High**                                                                                                                                                                         
  **Resource Feasibility**                  ** **        ** **     ** **   ** **     ** **   ** **      ** **                                                                                                                                                                 ** **
  Do we have sufficient skills?             4                                        X                  There is a computer engineer who knows how to program and three electrical engineers that will assemble the system and create the necessary circuits                  Enough
  Do we have sufficient equipment?          3                              X                            We have the programs to create the code for the microcontrollers and the boards needed to build the main system, we still need the smaller parts to test the system   Buy the material needed.
  Do we have sufficient number of people?   5                                                X          Four people in the team                                                                                                                                               Enough

[]{#_Toc449618988 .anchor}Table 10

  **Attribute**                                          **Weight**   **1**     **2**   **3**     **4**   **5**      **Why?**                                                                                                                                                 **Solution**
  ------------------------------------------------------ ------------ --------- ------- --------- ------- ---------- -------------------------------------------------------------------------------------------------------------------------------------------------------- ---------------------------------------------------
                                                                      **Low**           **Med**           **High**                                                                                                                                                            
  **Economic Feasibility**                               ** **        ** **     ** **   ** **     ** **   ** **      ** **                                                                                                                                                    ** **
  Is the project possible, given resource constraints?   4                                        X                  The project constraints in the technical part is feasible, the size of the system is something that we need to work on as we start building the system   Find the way to make the complete system one unit

[]{#_Toc449618989 .anchor}Table 11

  ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  **Attribute**                                                 **Weight**   **1**     **2**   **3**     **4**   **5**      **Why?**                                                                                                                                                                     **Solution**
  ------------------------------------------------------------- ------------ --------- ------- --------- ------- ---------- ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------- --------------
                                                                             **Low**           **Med**           **High**                                                                                                                                                                                

  **Schedule **                                                 ** **        ** **     ** **   ** **     ** **   ** **      ** **                                                                                                                                                                        ** **
                                                                                                                                                                                                                                                                                                         
  **Feasibility**                                                                                                                                                                                                                                                                                        

  What are the chances of meeting the intermediate mileposts?   4                                        X                  The project is possible, we will be able to reach our goals                                                                                                                  Enough

  What are the chances of meeting the PDR requirements?         5                                                X          We believe that our system can proceed into detailed design, and can meet the requirements                                                                                   Enough

  What are the chances of meeting the CDR requirements?         5                                                X          After the design is finished, we believe that our system can proceed to the fabrication stage, where the system can be demonstrated, tested, and can meet the requirements   Enough
  ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

[]{#_Toc449618990 .anchor}Table 12

  **Attribute**                                                   **Weight**   **1**     **2**   **3**     **4**   **5**      **Why?**                                                                                                                                                                                                         **Solution**
  --------------------------------------------------------------- ------------ --------- ------- --------- ------- ---------- ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- -----------------------------------------------------------------------------------------------------------------------------------------------------------------
                                                                               **Low**           **Med**           **High**                                                                                                                                                                                                                    
  **Cultural Feasibility**                                        ** **        ** **     ** **   ** **     ** **   ** **      ** **                                                                                                                                                                                                            ** **
  Will there be a positive impact on local and general culture?   5                                                X          With our system, the general population will be able to afford to have a home system that will make their lives easier, especially those with physical disabilities                                              Enough
  Potential labor objections?                                     2                      X                                    There is a very low possibility of getting any labor objection, since jobs will be created or at least extra work hours for those working on the parts, the assembly and programming of the system               Make sure the parts needed to assemble are available, program has no bugs and easy to build
  Manager resistance?                                             3                              X                            There could be some resistance from the manager of the retail stores, our system will be more affordable for the user, and it will seem as if they were making more money if they sale a more expensive system   Show managers the advantage of selling our system that can move in volumes bringing more revenue than the more expensive systems, which not everyone can afford

[]{#_Toc449618991 .anchor}Table 13

  **Attribute**                               **Weight**   **1**     **2**   **3**     **4**   **5**      **Why?**                                                                                                                                         **Solution**
  ------------------------------------------- ------------ --------- ------- --------- ------- ---------- ------------------------------------------------------------------------------------------------------------------------------------------------ -----------------------------------------------------------------------------------------------------
                                                           **Low**           **Med**           **High**                                                                                                                                                    
  **Legal Feasibility**                       ** **        ** **     ** **   ** **     ** **   ** **      ** **                                                                                                                                            ** **
  Organizational conflicts and policies?      5                                                X          It is our policy to respect the privacy of others                                                                                                Enough
  Laws or regulations impeding the project?   3                              X                            Standards held for all electrical home installations on performance and safety requirements by the National Electrical Installation Standards.   Make sure that our system meets the requirements of the National Electrical Installation Standards.
  Laws or regulations limiting the project?   4                                        X                  Fourth Amendment could question our project.                                                                                                     We will not share any personal information of the users.

[]{#_Toc449618992 .anchor}Table 14

***Weighted Scale Table***

  **Attribute**
  ------------------------------------------------------ ----------- ----------------------------------------------------------------------------------------------------- --------------------------------------------------------------------------------------
  **Technical Feasibility**
  Does the technology exist?
  Is the technology available locally?
  []{#RANGE!A5 .anchor}Can the technology be obtained?
  Are fundamentally new inventions required?
  TOTAL
  AVERAGE

[]{#_Toc449618993 .anchor}Table 15

  **Attribute**
  ----------------------------------------- ----------- --------------------------------------------------------------------------------------------------------------------------------------------------------------------- --------------------------
  **Resource Feasibility**
  Do we have sufficient skills?
  Do we have sufficient equipment?
  Do we have sufficient number of people?
  TOTAL
  AVERAGE

[]{#_Toc449618994 .anchor}Table 16

  **Attribute**
  ------------------------------------------------------ ----------- -------------------------------------------------------------------------------------------------------------------------------------------------------- ---------------------------------------------------
  **Economic Feasibility**
  Is the project possible, given resource constraints?
  TOTAL
  AVERAGE

[]{#_Toc449618995 .anchor}Table 17

  **Attribute**
  ------------------------------------------------------------- ----------- ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------- --------------
  **Schedule Feasibility**
  What are the chances of meeting the intermediate mileposts?
  What are the chances of meeting the PDR requirements?
  What are the chances of meeting the CDR requirements?
  TOTAL
  AVERAGE

[]{#_Toc449618996 .anchor}Table 18

  A**ttribute**
  --------------------------------------------------------------- ----------- ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- -----------------------------------------------------------------------------------------------------------------------------------------------------------------
  **Cultural Feasibility**
  Will there be a positive impact on local and general culture?
  Potential labor objections?
  Manager resistance?
  TOTAL
  AVERAGE

[]{#_Toc449618997 .anchor}Table 19

  **Attribute**
  ------------------------------------------- ----------- ------------------------------------------------------------------------------------------------------------------------------------------------ -----------------------------------------------------------------------------------------------------
  **Legal Feasibility**
  Organizational conflicts and policies?
  Laws or regulations impeding the project?
  Laws or regulations limiting the project?
  TOTAL
  AVERAGE

[]{#_Toc449618998 .anchor}Table 20

  **Attribute**
  --------------------------------------------- ----------- ------------------------------------------------------------------------------------------------- --------------
  **Marketing Feasibility**
  Will the general public accept the product?
  TOTAL
  AVERAGE

[]{#_Toc449618999 .anchor}Table 21

**Obtaining Weights**

                  **Technical**   **Resource**   **Economic**   **Schedule**   **Cultural**   **Legal**   **Marketing**
  --------------- --------------- -------------- -------------- -------------- -------------- ----------- ---------------
  **Technical**   1               3              3              5              3              5           5
  **Resource**    1/3             1              1              3              3              5           5
  **Economic**    1/3             1              1              5              3              5           5
  **Schedule**    1/5             1/3            1/5            1              3              1           1
  **Cultural**    1/3             1/3            1/3            1/3            1              1           5
  **Legal**       1/5             1/5            1/5            1              1              1           1
  **Marketing**   1/5             1/5            1/5            1              1/5            1           1

[]{#_Toc449619000 .anchor}Table 22

**1 = equal 3 = moderate 5 = strong 7 = very strong 9 = extreme**

                  **Technical**   **Resource**   **Economic**   **Schedule**   **Cultural**   **Legal**   **Marketing**   **G. Mean**   **w**
  --------------- --------------- -------------- -------------- -------------- -------------- ----------- --------------- ------------- -------
  **Technical**   1               3              3              5              3              5           5               3.19183       0.35
  **Resource**    0.33            1              1              3              3              5           5               1.8503        0.2
  **Economic**    0.33            1              1              5              3              5           5               1.99038       0.22
  **Schedule**    0.2             0.33           0.2            1              3              1           1               0.63048       0.07
  **Cultural**    0.33            0.33           0.33           0.33           1              1           5               0.66791       0.07
  **Legal**       0.2             0.2            0.2            1              1              1           1               0.5017        0.05
  **Marketing**   0.2             0.2            0.2            1              0.2            1           1               0.39865       0.04
                                                                               **Total**                                  **9.23124**   

[]{#_Toc449619001 .anchor}Table 23

**Weighted Scale **

  **Attribute**          **Weight**   **Score**   **W. Score**
  ---------------------- ------------ ----------- --------------
  **Technical**          0.35         4           1.4
  **Resource**           0.2          4           0.8
  **Economic**           0.22         4           0.88
  **Schedule**           0.07         4.67        0.33
  **Cultural**           0.07         3.33        0.23
  **Legal**              0.05         4           0.2
  **Marketing**          0.04         5           0.2
  **TOTAL**              1            29          4.04
  **WEIGHTED AVERAGE**   **4.04**

[]{#_Toc449619002 .anchor}Table 24 - Weighted Scale

Base on the weighted average 4.04 obtained from our feasibility analysis
our project will be feasible being 5 the highest score.

A.  []{#_Toc449618889 .anchor}*Marketability*

***Introduction***

There is a great variety of Smart Home Systems, some more expensive than
others, some of better quality than others. All of the smart home
systems that are out in the market require some knowledge of technology,
or at least requires a person to own a smart cellphone or a tablet. The
creators of these types of systems have not thought about those who are
not very good with technology, or that have difficulty using a smart
cell phone or tablet. But, our team has thought about that, our system
has something for everyone, the application for those who like to have
the control in their hands, whether is through a cell phone or a tablet,
and a voice command for those who would like to speak to their houses.
All these, in an affordable price and an easy to use system.

***Other Culture’s Opinions***

We believe that our voice command smart home system will be accepted in
other cultures, if we adapt the system to the way the houses work in
other countries. For Example, Samuel Beltran, a computer engineer told
us that the idea is good, but he believes that the people who can afford
a smart home system do not live in houses but in apartment, therefore
the voice command to open the garage door will not be needed. Helbert
Quevedo a policeman who works in small towns and have seen smart homes
helped us to realize that in Colombia there are companies that will go
to your house and change all of the electrical systems to make your home
smart; it is not like here, where we can buy every component and change
it ourselves if we want, also they have to pay for a monthly service
fee. This monthly fee does not make the system affordable, since the
user not only have to pay for the actual system, also the set up and now
they need to add the monthly fee. We believe that if we make our system
affordable, easy to use and install by everyone, not only rich people
can have a smart home, but anyone who is willing to buy it, knowing they
do not need to worry about any monthly fees.

***Strong Argument***

Nowadays home automation is a reality, there are a lot of systems right
now on the market. But, are these systems what the users want? We think
that people are ready for something more innovative. We are ready to
present you ALFRED. A voice command smart home system that will give you
the capability to interact with your house through your voice,
Smartphone or regular switches. Our system is a single unit with no
monthly payment or subscription, so the user don't need to buy different
component in order to get what he or she wants. With ALFRED you can
control your lights, check the status of doors and windows and even make
phone calls to your loved ones. All you need, to make your house
enjoyable and interactive, without spending a fortune in technology.

***Review two similar projects ***

*Domus Affordable Smart Home Automation Solution*
=================================================

a.  Project Summary

The Domus Affordable Smart Home Automation Solution is a developing
project founded by Alex Ng and Steve Mak, product engineer: Jason Ng
Lead, Product & UI Designer: Maggie Ng, Software Engineer: Jacky Lee and
IOS & Android programmer: Jun Lee \[1\]. Domus, is a home automation
system where you have full control of your home appliances, you can
reschedule them and monitor your entire home energy usage. All these
benefits are controlled by a phone app that is easy to use and can
synchronize different functions, allowing you to create and control
different zones in your house. The system can also control the different
remote control devices in your house so you can forget about your four
or six remote controllers and turn on your TV or your A/C from your
smartphone or tablet. The product offer pretty good home automation
alternatives and it is worthy of admiration.

a.  Fund Raising Strategy

The Domus team use different types of rewards as strategy to obtain
funds for their project. For example, they offer pre-order deals like a
\$69 USD package with one iCon and one iPlug, or a \$149.49 package
where you can control three devices and the remote controls in your
house. The prices can go up, you can find a \$250 package for six
devices or zones and so on. Also, they have distributor packages
offering big quantities of product for a good price. These rewards work
in the following way, the backers deposit money and in return the team
promises to deliver these early products and updates of the project.
Another way to acquire funds for the project is to give recognition to
the backers on the website’s hall of fame. With these strategies the
team have a fundraising goal of \$100,000.00 USD and they have already
surpassed it and raised \$107,516.00 USD from 316 different backers.

a.  Technology Overview

The Domus project is a plug and play system that works over Wi-Fi. “At
the heart of Domus is a QCA4004 full-featured, dual-band, single stream
802.11b/n/g solution that serves as a highly integrated Wi-Fi link with
an energy-efficient on-board power amplifier. Domus can operate in a
pure hostless mode. The module networking platform includes an IP stack
and full networking services on the chip to enable backers to customize
Domus to any Wi-Fi setting with minimal development effort or cost!”
\[2\]. Also, they offer two main components; an iCon Smart Wi-Fi Remote
Control and a Wi-Fi controlled Socket.

-   Main characteristics of the components

  **iCon**                             **Socket**
  ------------------------------------ ------------------------------------
  Input: 125V - 60Hz                   Input: 125V - 60Hz 15A
  Output: 5Vdc 1A                      Output: 125V - 60Hz 15A
  Max. Consumption: 0.6W               Max. Rating: 1875W
  Wifi Standard: IEEE802.1b/g/n        Wifi Standard: IEEE802.1b/g/n
  IR frequency: 38KHz                  Unit Size 57x57x30mm
  Unit Size: 78x78x35mm                Operating Temperature: 32 to 104 F
  Operating Temperature: 32 to 104 F   Operating Humidity: Less than 80%
  Operating Humidity: Less than 80%    Color: White
  Color: Black                          

[]{#_Toc449619003 .anchor}Table 25

a.  System Description

The Domus system is designed to be easy to use and no experience is need
it for its installation. The package come with two main parts, the first
one is the smart socket and to be set up you just need to plug in into
any standard outlet, download the free Domus app and synchronize this
smartplug. Now you have the ability to turn on and off any device that
you connect to this outlet. The second one is the Domus smart iCon that
has a different installation procedure. In this case the iCon controls a
specific equipment so the first step is to put the smart iCon in a
direct line of sight to the equipment you want to control. Then, set it
into your Domus app. The final step is to choose in your app the make
and model of the appliance that you want to control. if your appliance
is not supported, the Domus will enter in a learning mode where you can
introduce the commands that you need. The system is backed up by a Domus
cloud where all the data and settings are stored. So, once you
personalized a zone or device, the data is available in all your
smartphones or tablets.

-   Block Diagram:

![Domus block
diagram.jpg](media/image6.jpeg){width="2.9302329396325457in"
height="3.779070428696413in"}

[]{#_Toc449618949 .anchor}Figure 5

-   Picture:

![](media/image7.png){width="2.583817804024497in"
height="2.2906977252843395in"}
![](media/image8.png){width="2.246608705161855in"
height="2.287055993000875in"}

[]{#_Toc449618950 .anchor}**Figure 6 - Smart socket**

> []{#_Toc449618951 .anchor}**Figure 7 - Smart iCon**

*The Future of Smart Home - B.One*
==================================

a.  Project Summary

The Future of Smart Homes - B.One is a developing project founded by
Chairma: Ajun Valluri, Chief Executive Officer: Sridhar Ponugupate,
Directors: Sarada Akkineni and Dr. Dave Irvine-Halliday \[3\]. B.One is
a smart home system that allows you to control the security, ambiance,
and entertainment from a single app, using only one hub. B.One offers
different feature like Qi wireless charger, media manager, universal
remote control, automation gateway and irrigation. The strongest
application of the B.One is the security system for the house; the
security system can be combine with window sensors, motion sensors,
camera with night vision, and camera doorbell among other things. B.One
is also a learning system that updates with the everyday usage, it get
use to your schedule and behaviors, this way the system can alert you if
there is something out of the ordinary, like a light on or a machine
that can create a hazard. Least but not less important, B.one is
compatible with most of the standard sensors and controls in the market,
also it will support android, iOs and Windows.

a.  Fund Raising Strategy

B.One’s fundraising goal is of \$100,000.00 USD and they have already
surpassed it and raised \$109,893.00 USD from 535 different backers.
B.One uses different types of strategies to raise fund for their
project. They use rewards as strategy to obtain funds for their project.
They have a webinar on IoT where the users can learn how the B.One will
change their homes and influence their lives for only \$3.00 USD. In
addition, those who support them with \$5.00 USD or more, their name
will be place on the supporter’s page of the project’s website. For
\$25.00 USD they will send an exclusive T-shirt with the different
updates of the journey of the B.One’s project, besides adding their name
to their supporter’s page on the website. Also, like the Domus project
previously mentioned, the B.One team offer pre-order packages with
prices like \$79.00 USD for a product that will have a retail price of
\$149.00 USD, the people who supports them with those package will not
only receive the first products that get produced, but their names will
also be added to the supporters page of the teams website. There is
another package that is being offer for \$109.00 that will be retail at
\$189.00 USD, those who supports this team with this package will
receive one (1) B.One Lite Smart HUB, one (1) B.One Door/Window Sensor,
and one (1) B.One Motion Sensor, besides adding their name to the
supporter’s page of the website. Another package offer by the team to
raise funds is a \$179.00 USD package in which the backers will receive
a full set of B.One system and their name as all the other packages
offer will be display on the supporters’ page of their website. For a
pledge of \$209.00 USD the backers will get 1 B.One Smart HUB, 1 B.One
Door/Window sensor, 1 B.One Motion Sensor and their name will be added
to their website. There is another package that costs \$349.00 USD, for
this amount of money the backers will get 1 B.One Smart HUB, 1 B.One
Door/Window sensor, 1 B.One motion Sensor, 1 B.One 1080p Wi-Fi Camera
with night vision and local storage of 32 GB, and 1 B.One Wireless
Siren, besides displaying the backer’s name on the website. A Premium
Home Kit Platinum is yet another package that is offer, this package
costs \$449.00 USD, this cost include a 1 B.One Smart HUB, 1 B.One Door
/ Window Sensor, 1 B.One 1080p Wi-Fi Camera with night vision and local
storage of 32 GB, 1 B.One Wireless Camera Door bell, 1 B.One wireless
Siren, and as a thank you to the backers their name will be included on
the website. This team, also offers a package for corporate companies,
distributors, and resellers which allows them to raise even more funds
with a price of \$1,700.00 USD per package that includes 10 B.One Smart
HUB and 10 B.One Dorr / Window Sensor, besides adding their names to the
website. But, the bigger package they offer is a Premium Kit for
corporate and distributors which has a cost of \$4,290.00 USD that
includes 10 B.One Smart HUB, 10 B.One Door / Window Sensor, 10 B.One
Motion Sensor, 10 B.One 1080p Wi-Fi Camera with night vision and local
storage of 32GB, 10 B.One wireless Camera Door bell and 10 B.One
wireless Siren.

a.  Technology Overview

The B.One use a parallel computer loT engine that allows ten processors
to work in parallel to ensure that every communication in and with the
system will be in real time. The whole package include the B.one Smart
Hub, a 1080p Camera, Wireless door bell, door sensors, motion sensors
and a wires siren.

-   Main characteristics of the components

  **Smart HUB**
  --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  Built-in Radio modules
  Radios: GSM/GPRS, Wi-Fi, BLE, Zigbee, NFC, Z-wave, 433 Mhz RF for security, IR Receiver and IR blasters
  Built-in GSM/GPRS module in case of power outage or absence of internet connection.
  Military standard 256-bit AES encryption with advance built-in firewalls.
  Future ready framework, it is ready and compatible to work with Insteon, C-Bus, Profibus, Dali, Lonworks, KNX and such others via Zigbee gateway.
  Power of 10 high in Parallel processors from Texas Instruments and Atmel that makes it the fastest hub available in the market.
  Qi wireless charger of 5Watt to enable charging of most Qi Compatible phones.
  Inbuilt SD card memory disk of 32 GB for local storage.
  On board Temperature and light intensity sensors to automate HVAC control and also to harvest the light by control of blinds / shades based on environment and personal preferences.
  NFC based sensor for a Tab or pair to the B.One Hub.
  Wi-Fi to IR convertor for universal remote control
  Battery backup of 48 hours for security.
  Media manager function built-in for audio stream services.
  Proprietary self-learning algorithms, sends notifications, predict / recommend user actions. The more is use the smarter it gets.

[]{#_Toc449619004 .anchor}Table 26

  **1080p Camera**
  --------------------------------------------------------------
  Local storage for recording up to 2 weeks of video.
  Camera view angle: 110 degrees
  Built-in speaker and High fidelity microphone
  Supports DNS, FTP, UPNP, DONS, HTTP, SMTP, DHCP & TCP.IP
  IR night vision
  Digital motion sensing and alarm notification
  Complete remote operations, controlled through the smart HUB

[]{#_Toc449619005 .anchor}Table 27

  **Wireless Doorbell**
  --------------------------------------------------------------------------------------------------------------------------------
  Wireless video doorbell with IP 65 protection for outdoor use
  720p video resolution for clear view
  Phone app and regular chime
  Works simultaneously for 5 users at a time with inbuilt access control. On demand access to keep a check on your surroundings.
  Do not disturb mode
  works with the current doorbell connections
  Remotely unlocks your doors.

[]{#_Toc449619006 .anchor}Table 28

  **Door Sensor**
  --------------------------------------------------
  Wireless radio: Z-Wave
  Battery: 3.2 Volt Lithium cell
  Idle Current: ⩽ 30uA
  Trigger Current: ⩽ 20mA
  Wireless transmission range: ⩽ 100m in open area
  Operation Condition: -15°C\~55°C
  Relative humidity: ⩽ 85%
  Battery life: 2 years

[]{#_Toc449619007 .anchor}Table 29

  **Motion Sensor**
  --------------------------------------------------
  Wireless Radio: Z-Wave
  Battery: 3.2 Volt Lithium cell
  Idle Current: ⩽ 50uA, Trigger Current: ⩽ 9.5mA
  Detection range: 8m
  Wireless Transmission Range: ⩽ 100m in open area
  Operation Condition: -15°C\~55°C
  Battery life: 2 years

[]{#_Toc449619008 .anchor}Table 30

  **Wireless Siren**
  -------------------------------------------------------------------------------------
  Wireless Radio: Z-Wave
  Power Supply: AC 110V \~ 220V, Power Frequency: 50 \~ 60 Hz
  Alarm Volume: 90 dB
  Backup Battery: 3.7 V 600mAh rechargeable
  Alarm current: ⩽ 100mA, Static current: ⩽ 13mA
  Wireless Transmission Range: ⩽ 100m in open area
  Relative humidity: ⩽ 85%, Operation Condition: -15°C\~55°C
  Battery life: for at least 30 minutes of siren operation under power cut situation.

[]{#_Toc449619009 .anchor}Table 31

a.  System Description

The B.one system combine wirelessly a Smart hub with different devices
and sensors in your house in order to create a secure and enjoyable
environment. The doors and windows sensor, for example, alert the main
unit if any anomaly occur and you can see it or control it through your
phone app. The same way work with your house security cameras or your
wireless doorbell. Also the B.one hub use a “Tap-to Pair” function that
allows you to pair and manage any media device so you can create a smart
intelligent wireless entertainment center. All these features controlled
in the palm of your hand by an easy to use phone app.

-   Picture:

![](media/image9.png){width="3.526042213473316in"
height="2.0997090988626423in"}

[]{#_Toc449618952 .anchor}Figure 8 - B.One Smart Hub

-   Block Diagram:

![](media/image10.png){width="5.046875546806649in"
height="2.882677165354331in"}

[]{#_Toc449618953 .anchor}Figure 9

***Conclusion***

If we were to make a fundraising, a good idea will be to promote our
project on social media. Also, to affiliate or register to a website
like Kickstarter where you can show your progress and persuade the users
to help you make your project a reality, by giving you funds. Another
way to get funds for our project is to find investors that are willing
to support our project.

I.  []{#_Toc449618892 .anchor}RISK ANALYSIS

On this section we will be analyzing the risks we could have with this
project in the different categories shown below and how minimize those
risks.

A.  []{#_Toc449618893 .anchor}*Types of Feasibility*

<!-- -->

1.  **Technical**

<!-- -->

a.  How much Technical Risk is there?

Our project can face some technical risk, one of them could be that the
microphones in the house do not capture a voice command. Another
technical issue will be that some light circuits in the house could
exceed our maximum load capability.

1.  **Resource**

<!-- -->

a.  How much Resource Risk is there?

One resource risk could be that a component fails in our design and we
could not find a replacement. Our Project has a low resource risk. Since
the parts that we use for our design are easy to find. We can work in
different areas of our design without affecting the others, and then
assemble the unit as one. Also we can simulate different scenarios
before connect a real load to the system.

1.  **Economic**

<!-- -->

a.  How much Economic Risk is there?

An economic risk that we could face is that we surpass our budget making
the system more expensive that what we have planned.

1.  **Schedule**

<!-- -->

a.  How much Schedule Risk is there?

A schedule risk could be that one components of our design fail and the
replacement take more time than usual to arrive.

1.  **Cultural**

<!-- -->

a.  How much Cultural Risk is there?

Sometimes older people present problems to adapt their lives to new
technology. Time needs to pass for them to get used to it.

1.  **Legal**

<!-- -->

a.  How much Legal Risk is there?

The project have a low legal risk, the fourth amendment could question
our project. However, it is our Policy to respect the privacy of the
individuals that use our product. Also, we will not collect information
or share any, completely respecting people’s privacy in their homes.

1.  **Marketing**

<!-- -->

a.  How much Marketing Risk is there?

A marketability risk could be that the end-user do not know how the
system could be installed or where could be installed in the house.

A.  []{#_Toc449618894 .anchor}*Risk Assessment*

***Fault Tree Analysis***

![](media/image11.png){width="5.6303291776028in"
height="6.76744094488189in"}

[]{#_Toc449618954 .anchor}Figure 10

A.  []{#_Toc449618895 .anchor}*Exposure Matrix*

                         Likelihood of Occurrence   Legend
  ---------------------- -------------------------- ---------- ---------- ------------ --------------
                         Very Likely                Possible   Unlikely   
  Undesirable Outcomes   Class IV                                          
                         Class III                             E1, C1     S1
                         Class II                              T1, M1      
                         Class I                                          T2, R1, L1

[]{#_Toc449619010 .anchor}Table 32 - Exposure Matrix

  **Actions**
  ------------- -------------------------------------------------------------------------
  T2, R1, L1    None
  T1, S1, M1    Test system before selling it
  E1, C1        Support line needs to be created to help the end-user with any problems
                System should be change

[]{#_Toc449619011 .anchor}Table 33

***Conclusion***

Every project in its developing stage has its risks, and ours is not the
exception. However we did not find any critical risk that could affect
our project making it impossible to build; but we do believe that we
need to have a continuous risk management. The first step of the risk
management is to identify the specific risks our project has. The list
we produced includes risks in every aspect of our project such as the
Technical risks, the Resource Risks, the Economic Risks, the Schedule
Risks, the Cultural Risks, the Legal Risks, and the Marketing risks.
Each of this risks has a different level of acceptance, none of our
risks made it to a level IV meaning that none of the risks exceeded the
risk acceptance threshold making it safe to start work in the project.
Some of our risks do have a severe level of risk which is level III,
this level of risk requires constant management, and we believe that
creating support lines to help the end users with their problems and
questions will mitigate the risks. Those risks that are in this category
are the economic risk that is something we as the developers need to
manage to be able to remain within the budget. Also the cultural risk is
a level III risk that could affect our sales if some of the intended end
users refuses to make changes in their lives, especially accepting new
technology like the system we are creating; this we can mitigate, making
demonstrations on how easy will be to use the system and showing the
intended users how much better their lives will be with our system
especially the elderly and people with physical impediments that will be
able to take advantage of the voice command aspect of our system, giving
them some independence. Lastly, the schedule risk is also in the level
III risk table, it is severe since it will be out of our hands if a
component takes longer than usual to arrive in case of a replacement
needed. In order to mitigate this risk is to always have backup modules
in case one fails, just in case, even if they never do. Among our risks
we also have level II risks that are risks that are accepted within the
threshold and no constant management is needed. This moderate risks in
our project holds a technical risks which is that the microphones in the
house may not capture a voice command, in order to mitigate this risk we
need test the systems before putting them out in the market, to make
sure every single component is working properly at high ranges. The
other risk that lies in a level II is the marketing risk, this risk
consists on the end user not knowing where in the house to install the
system. However, it is our job to market the system well enough to
answer all of the questions the end user may have and give the ideas
they need to make sure they know where they can place and install the
system to enjoy it at its maximum performance. The rest of our risks
fell on category level I, which do not require any active management. In
this category we have a technical risk which is that the light circuits
of the house could exceed our maximum load, which is very unlikely
because our system will be equipped with a Triac board that can handle
16 Amps, while a house only requires 15 Amps breakers. Also the resource
risk is part of this category, since it is very unlikely that if a
module of our system fails not to find a replacement part, since all
these units and modules are very easy to find in the market. Lastly, the
legal risk, which is not something that we need to worry about, since we
are not going to infringe the fourth amendment, it is one of our
policies to respect the privacy of the individuals that uses the
product, also, we will not collect any information or share any,
completely respecting people’s privacies in their homes.

I.  []{#_Toc449618896 .anchor}OPERATING ENVIRONMENT

Design a device that can withstand the daily environmental hazards may
be the key of success in a project, so is very important to analyze our
system operating environment. Our system will be mainly installed inside
the house in a closet or attic. In a worst case scenario the users will
install the unit outside the house and the system is going to be expose
to heavy rains, sun and dust. Since the system will be installed and
attached to the infrastructure of the house, the unit should not suffer
high drops. Another condition to take into consideration is the
temperature of operation. The system will be most likely installed in
attics what makes the temperature around 90° F. Finally, in these
locations the system may be exposed to small animals or insects, so the
system need to be in a box.

I.  []{#_Toc449618897 .anchor}INTENDED USER(S) AND INTENDED USE(S)

<!-- -->

A.  []{#_Toc449618898 .anchor}*Intended User(s)*

Nowadays, people loves technology and demand good products. Smartphone
and tablet dominate the market and almost everything is controlled by
phone applications. That is why we will include a smartphone app where
the user can interact with the system. Also, people like to be in touch
and available everywhere, so our system needs to be capable of making
calls to the user’s contacts. In addition, older people that are not
familiar with new technology and smartphones need to be able to use our
system, so we are going to integrate a voice command feature that will
make their lives easier.

A.  []{#_Toc449618899 .anchor}*Intended Use(s)*

In our system the voice command will be one of the features with more
use, so the voice command module need to be equipped with long range
Mics to ensure a better quality. Also, since the system will monitor the
doors and windows, the unit will need magnetic contact switches. In
addition, a phone application is need to have control over the system
which will be manage though a Wi-Fi module. Light control will be
another feature with a lot of use. For these attribute we are going to
use a Triac board with at least four entries that allows the system to
control different area lights. The system will also manage the garage
door through a relay and the user will also be able to make phone calls
using a phone module. Finally, in order to integrate the system to the
house, the unit will be enclosed in an electric box that protect and
ensure a safe connection.

I.  []{#_Toc449618900 .anchor}BACKGROUND

Upon searching of competing products that are already in the market.
Listed below are three products with their respective manufacturers and
synopsis, giving a simple glimpse of what the current state of the art
on smart home automation control systems.

A.  []{#_Toc449618901 .anchor}*VOCCA*

<!-- -->

a.  Project Summary

The VOCCA is an available technology developed by a team from Tel Aviv,
Israel integrated by: Erez Nimrod, Ori Indursky, Vladislav Serebnik, Adi
Malik, Ofer Masamy, Maggi Yovov, and Nir Dvash \[4\]. VOCCA is a smart
lighting system which does not required Wi-Fi, professional setup, or
installation since it is a simple plug and play voice activated bulb
adapter. The way VOCCA is set up is very simple; any light bulb can be
simple screw into the adapter and then connect it into the light socket.
There are two versions of the product, one is the standard model which,
after the VOCCA is installed, turns off or on the lights when the user
said “the magic words” “Go VOCCA Light.” This is already for sale and
the prices start at \$39.70 per unit, but there are discounts available
if the customer purchases more than one. The other version of the
product is the customizable advanced model, named VOCCA Pro. This type
uses Bluetooth connectivity with an app which can be obtained free of
charges, it can be downloaded either for iPhone or Android. The
differences with the standard version are that this one allows the users
to record their own voice trigger and they can be up to 5 different
triggers simultaneously, in that way they can use any language, and they
can have different people using different triggers; it also allows set a
specific time for the lights to turn on or off. This advanced version is
not in the market yet but according with the official website it will be
available for purchase soon.

a.  Technology Overview

VOCCA system at a simple look seems to be a regular socket or light bulb
adapter, but inside it has all the technology to turn a common bulb into
a smart bulb. It has a small microphone inside connected to the voice
recognition device from Sensory Inc., this part of the system is
searching 24/7 for the trigger phrase to commands the relay to transfer
the power from the mains to the light bulb. The power is handle by a
common AC to DC converter, and in the case of the VOCCA Pro a Bluetooth
system is used for communication with the Smartphone app.

-   Main characteristics

  **VOCCA**
  ------------------------------------------------------------------------------------------------------------
  Item Weight: 0.3 ounces
  Product Dimensions: 4.4 x 3.4 x 2.7 in
  Power Source: AC (It works on both 120/240 AC systems)
  Wattage: consumes less than 0.25W
  Voice recognition technology: from Sensory Inc. (the world's leading voice recognition technology company)
  Bluetooth Specifications: TobyRich Bluetooth Smart and Bluetooth Low Energy (BLE) app design.

[]{#_Toc449619012 .anchor}Table 34

a.  System Description

The VOCCA developed team had as their number one purpose to make life
easier and simpler, reason for what they created this voice activated,
easy-to-use device. Because it requires no Wi-Fi, no hub and no
configuration, anyone can install VOCCA. The regular light switch still
works when VOCCA is connected so habits don't need to change. It is a
product for life as users don't need to buy a new one when the bulb
dies. VOCCA is based on voice recognition technology from Sensory Inc.
and it is on 24/7 in search of the trigger phrase. Once found, it
commands its relay to transfer the power from the mains to the light
bulb and there is light (or darkness). VOCCA Pro uses TobyRich Bluetooth
Smart and Bluetooth Low Energy (BLE) app design. The VOCCA app has a
very simple interface which is very convenient in order to be used by
anyone. It allows customizing VOCCA Pro, with a built in fail-safe
system and creates the user's own triggers. This app also allows setting
VOCCA to automatically switch on when users want to wake up, or turn off
at bedtime, and manually controls all VOCCA’s devices in the house from
the Smartphone. In order for VOCCA to works the light switch have to be
in the on position. The distance required between the device and the
person who said the trigger depends on how much background noise is
present in the room. The optimal distance is between 10 to 15ft, but
with low level of noise the distance could be extended up to
approximately to 30 ft.

a.  Block Diagram:

![](media/image12.png){width="4.679792213473315in"
height="2.727011154855643in"}

[]{#_Toc449618955 .anchor}Figure 11

a.  Picture:

![](media/image13.png){width="2.2820833333333335in"
height="3.843028215223097in"}

[]{#_Toc449618956 .anchor}Figure 12

A.  []{#_Toc449618902 .anchor}*Homey*

<!-- -->

a.  Project Summary

Homey is a voice-controlled home automation technology that allows you
to talk to your room. It was developed by a large team from Enschede,
Netherlands of over 15 members (Athom) \[5\]. Homey is described as a
personal assistant that will help make a home more personal, since it is
designed to control “from lights to music, from climate to TV.” The
possibilities of this device are many, especially combining functions;
for example, it is able to sync the light and the coffee machine with
the alarm clock, making the user’s morning an incredible experience, it
made seem like the house is alive. It can be controlled by voice
commands when the user is inside the house or by an app (available for
either an iPhone or an Android phone) to easily control your whole house
when the user is outside the house. Homey is multilingual; it currently
understand and speaks 5 languages (English, Spanish, French, German, and
Dutch), by the developer team is working to expand the availability to
more languages. Because the voice commands are the easy way to give
Homey orders, anyone (since kids to elderly) can use it; the trigger is
its name of the device “Homey”, but the name can be change to anything.
Homey will need Internet connection in order to work properly since the
voice recognition just works with online access, and with the app access
it will only works if the Smartphone is in the same Wi-Fi; therefore, it
will still work offline but with a lot of limitations. It can be
obtained at the official website for €299, and no shipping cost, to
anywhere in the world. Homey had reached several achievements, among
them, it was a semifinalist in the PHILIPS Innovation Award and it was
in the top 5 in the Accenture Innovation Award as well.

a.  Technology Overview

Homey is a complex system that has in total 8 radio modules, which are
accessible through a high-level JavaScript API:

> • Wi-Fi 802.11b/g/n
>
> • Bluetooth 4.0
>
> • NFC
>
> • ZigBee
>
> • Z-Wave
>
> • 433.92 MHz
>
> • nrf24l01+
>
> • Infrared

These are all connected to a Raspberry Pi Compute Module, which runs the
custom software, but for the consumer product this will be replaced by
its industrial variant, the compute module. Homey runs on a node.js
server, so developers can make use of the easy-to-learn JavaScript
language. Homey works with a 12V adapter and an adapter to plug. The
sphere is 11 cm (4.3") in diameter. In the middle you will find a
multi-colored LED ring that empowers apps to give feedback to the user,
and the small circle on top is for the Infrared Power-LED to shine
through the casing. The Homey Smartphone App is available for iPhone and
Android users. Users of other operating systems can use their browser to
access and configure Homey on the go.

a.  System Description

Homey start working when its name is called and, in dependence of the
command, it can communicate with the user giving her/his feedback or it
can communicate with the appliance to obey the command. As of now it is
able to communicate with devices through 8 different radio technologies:

![](media/image14.jpeg){width="4.111111111111111in"
height="2.111111111111111in"}

[]{#_Toc449618957 .anchor}Figure 13

Since the user plugs it in, Homey starts working with most of the
devices of the house that have one of the previous radio technologies.
It not just only connects with the house appliances, but also with the
user’s entertainment systems and online accounts. Homey already works
with:

![](media/image15.jpeg){width="6.0in" height="2.5972222222222223in"}

[]{#_Toc449618958 .anchor}Figure 14

The system includes 8 wireless modules that work on various frequencies
and protocols, all integrated together in an intelligent and easy-to-use
device with state-of-the-art speech recognition that activates Homey
when it identifies the trigger command by a microphone.

Homey is made in an open platform, works with apps written in
JavaScript, so everyone can develop for it and contribute. Initially the
speech recognition used was a hybrid between Microsoft's and Google's,
combined with a display for visual feedback. But finally Node.js is used
with Google's speech recognition.

Homey uses a powerful and energy efficient ARM chipset (same technology
that Smartphone) which means that it does not use much energy; therefore
it will not increase the electricity bill of the house.

Homey does not stores any conversation, since it will be active only
after its name is called, the commands are saved in the command history
but can be deleted at all time.

Homey presents limitations; most of the appliance of the house can be
controlled with one Homey, mainly if they are connected through Wi-Fi,
but if the appliance is controlled by for infrared light, it will need
be in the same room of the Homey. Also, since the Homey has the
microphone inside, the user needs to be in the same room in order to
give a voice command; if the user is in a different room, he/she can
still give Homey commands through the app, but for the appliance that
are not in range the solution will be hook multiple Homeys in the house
(which will raise the price of the technology), and they will work
together.

a.  Block Diagram:

![](media/image16.jpeg){width="6.0in" height="3.3194444444444446in"}

[]{#_Toc449618959 .anchor}Figure 15

a.  Picture:

![](media/image17.jpeg){width="5.304748468941383in"
height="3.651162510936133in"}

[]{#_Toc449618960 .anchor}Figure 16

A.  []{#_Toc449618903 .anchor}*NEEO*

<!-- -->

a.  Project Summary

NEEO, the Thinking Remote is a revolutionary remote that allows home
automation by hand recognition. It was co-founded by Raphael Oberholzer
(CEO) and Oliver Studer (CTO) of NEEO Inc \[6\]. NEEO is a smart home
automation system that connects and controls the devices of the house in
very simple way. Instead of having a control remote for every device,
this technology enables the user to have only one control for all of
them. It is compatible with all major products from the last 10 years to
the newest in the market. NEEO does not require technical installation;
once it is set up, it gets all the devices with just one button press.
NEEO is also very easy to use; therefore it can be used for everyone in
the house. This system is integrated by two main parts, the Remote and
the Brain. The NEEO Remote is the interface to control the AV
(Audio/Video) devices and smart home gadgets; it allows the user to
access everything instantly in one single place. And if the user loses
the remote in the house, it can be easily find by NEEOs SOS feature. The
other part of the system, the Brain, is the one which commands the smart
devices and gadgets. The NEEO Combo (Remote and Brain) can be obtained
for \$319; the price for the Brain itself is \$219; and the price for
just the Remote is \$119. NEEO has won two design awards in 2015: “iF
Design Award 2015” and the “reddot award 2015.”

a.  Technology Overview

NEEO is integrated by 2 main parts, the Remote and the Brain. The Remote
is made by a very solid long lasting anodized aluminum which protects
against damage and resists fingerprints. It has a 291 ppi display (more
than Apple’s iPad Retina standard). It is simple, just a few buttons and
a touch screen for browsing and control. The Remote is also very
personal since it works with hand recognition technology for personal
profiles and this allows parental control and guest profile for
unrecognized hands. The body of the Brain is made of aluminum for a
lightweight rigid structure, and the top and the bottom are made of a
specially manufactured acrylic glass. It can receive the information in
order to command the device from the NEEO Remote or the app for the
Smartphone. It is wireless, it utilizes the major protocols as Wifi,
Bluetooth, ZigBee and Z-Wave among others. The Brain also has a 360º
infrared blaster design. The system is complemented by the NEEO App
which commands the brain and all the devices from one single app. It is
available for iOS® and Android® phones.

-   Main characteristics

**The Remote**

  **Size & Weight**
  -----------------------------------------------
  Height: 7.1 inches (182mm)
  []{#RANGE!A4 .anchor}Width: 1.9 inches (48mm)
  Depth: 0.36 inch (9.2mm)
  Weight: 0.17 pound (80g)

[]{#_Toc449619013 .anchor}Table 35

  **System**
  ---------------------------------------
  ARM® Cortex® M4 single-core at 168MHz
  Running extremely efficient NEEO OS
  Intelligent power management
  32MB RAM

[]{#_Toc449619014 .anchor}Table 36

  **System Requirements**
  ---------------------------------------------------------------------------
  10/100BASE-T Ethernet network for initial setup
  Wi-Fi (802.11 b, g, or n) wireless network (to operate device wirelessly)
  Min. iOS 8 or Android 4+ for the NEEO App
  1 or more NEEO Brains
  NEEO Account (free)

[]{#_Toc449619015 .anchor}Table 37

  **Display**
  ------------------------------------------------------------------------------------
  Ultra-thin bezel display
  3 inches (diagonal) LED-backlit widescreen multi-touch display with IPS technology
  480-by-800-pixel resolution at very high density of 291 ppi
  Fingerprint-resistant coating
  Fully laminated display
  Unique NEEO multilayer design for thin bezels

[]{#_Toc449619016 .anchor}Table 38

  **Ports & Interfaces**
  -------------------------------------------------------------------
  Wi-Fi (802.11b/g/n)
  IEEE 802.15.4 dual antenna (6LowPAN and ready for Thread, ZigBee)
  Accelerometer
  NEEO Palm Sensor (BETA)
  Capacitive sensors
  Charging connector (gold plated)

[]{#_Toc449619017 .anchor}Table 39

  **Compatibility**
  -------------------------------------------------------------------------------------
  TV, Sonos®, Apple® TV, Roku®, and Philips® Hue support
  Supports cable boxes - including Cablevision®, Verizon®, Time Warner®, and Comcast®
  Supports satellite systems from Dish® and DirectTV®
  over 30,000 supported devices

[]{#_Toc449619018 .anchor}Table 40

  **Power**
  ----------------------------------------------
  1200mAH Li-Ion battery (replaceable)
  External 10W charger (included)
  Charging via NEEO Docking Station (included)

[]{#_Toc449619019 .anchor}Table 41

  **Environmental requirements**
  ----------------------------------------------------
  Operating temperature: 32° to 95° F (0° to 35° C)
  Storage temperature: -4° to 113° F (-20° to 45° C)
  Avoid direct sunlight

[]{#_Toc449619020 .anchor}Table 42

**The Brain**

  **Size & Weight**
  ----------------------------------------------
  []{#RANGE!A2 .anchor}Height: 0.9 inch (24mm)
  Diameter: 4.1 inches (106mm)
  Weight: 0.2 pound (95g)

[]{#_Toc449619021 .anchor}Table 43

  **System**
  ----------------------------
  1,2Ghz dual-core ARM A7
  4GB flash storage
  1GB RAM
  Fan-less, low power design

[]{#_Toc449619022 .anchor}Table 44

  **System Requirements**
  ---------------------------------------------------------------------------
  10/100BASE-T Ethernet network for initial setup
  Wi-Fi (802.11 b, g, or n) wireless network (to operate device wirelessly)
  Min. iOS 8 or Android 4 for the NEEO app
  NEEO account (Free)

[]{#_Toc449619023 .anchor}Table 45

  **Ports & Interfaces**
  ------------------------------------------------------------------------------------------------------------
  Wi-Fi (802.11b/g/n)
  Bluetooth 4.0
  Z-Wave Plus (500 series / US, EU Version)
  IEEE 802.15.4 dual antenna (6LowPAN and ready for Thread, ZigBee)
  10/100BASE-T Ethernet
  Built-in IR receiver (learning mode)
  Unique internal 360° IR blaster design (just works)
  3.5mm jack IR output (for included 360° extender, allows operation of devices inside and outside cabinets)
  HDMI CEC (for future use)
  Capacitive button

[]{#_Toc449619024 .anchor}Table 46

  **Compatibility**
  -------------------------------------------------------------------------------------
  TV, Sonos®, Apple® TV, Roku®, and Philips® Hue support
  Supports cable boxes - including Cablevision®, Verizon®, Time Warner®, and Comcast®
  Supports satellite systems from Dish® and DirectTV®
  over 30’000 supported devices

[]{#_Toc449619025 .anchor}Table 47

  **Power**
  --------------------------------------
  External 10W power supply (included)

[]{#_Toc449619026 .anchor}Table 48

  **Environmental requirements**
  -------------------------------------------------------------------
  Operating temperature: 32° to 95° F (0° to 35° C)
  Storage temperature: -4° to 113° F (-20° to 45° C)
  Avoid direct sunlight (might reduce infrared emitter performance)

[]{#_Toc449619027 .anchor}Table 49

a.  System Description

The setup is very easy, the Remote allows the user to add devices by
just typing the name, and then NEEO automatically find it and the user
can assign a room to it; this can be also done by the NEEO app. When the
user grabs the sensors in the Remote recognizes the hand and
automatically match it with the user’s profile and display the
playlists, films, and favorites. Then the user just needs to search the
devices which already have an assigned room and command an order. Then
the Brain receives the command and communicates with the house devices
via wireless systems as Wi-Fi for example and via its 360° IR design; in
that way it can be place in any room of the house for the user
convenience. The system has over 30,000 supported devices and related to
thermostats, it supports Nest 1st generation and Nest Thermostat 2nd
generation. The Remote has a range of approximately 50 m (160 ft.), but
it also depends on site specifications and individual device
capabilities; and it the battery lasts for more than a month without
re-charge. NEEO is not just for a house, it can be also uses for
offices.

a.  Block Diagram:

![](media/image18.png){width="6.0in" height="1.9479166666666667in"}

[]{#_Toc449618961 .anchor}Figure 17

a.  Picture:

![](media/image19.jpeg){width="6.0in" height="4.027777777777778in"}

[]{#_Toc449618962 .anchor}Figure 18

I.  []{#_Toc449618904 .anchor}INTELLECTUAL PROPERTY

The following three patents are relevant and appear on the United States
Patent & Trademark Organization when ‘*home automation*’ is searched on
the site’s engine. The first patent, Automation Control of Electric
Devices, comes from Utah by W. E. Smith and J. R. Gist; followed by
Voice Control Device and Voice Control Method by Guo-Feng Zhang of
Shanghai China and finally, Actuator for Electric Blinds invented by
Masanori Kobayashi, Niigata, Japan.

A.  []{#_Toc449618905 .anchor}*Automation Control of Electronic Devices,
    US 9,152,139 B2* \[7\]

<!-- -->

a.  Summary

“A sensor lighting control system automatically controls lighting on a
***home automation*** network without creating unnecessary network
traffic. A sensor module uses the light level to determine when a
command to turn the light ON should be resent over the network” \[7\].\
This patent claims a complete home remote control automation system of
varying electronic devices from DVD players to lights and etc… Although
our system was to be able control some different aspects of the home
there are similarities in the way the devices interface with each other.
There are the exact means of communications intended to be use in this
proposed project.

An automation controller will be able to access the electronic devices
for a remote control system via a network. Allowing for Analog and
Digital video/audio signals to be transmitted with a coupled automation
controller.

![](media/image20.png){width="4.095446194225722in"
height="4.209379921259843in"}

[]{#_Toc449618963 .anchor}Figure 19

a.  Claims Summaries

    “An automation control system for control of electronic devices,
    comprising: an automation controller comprising a communications
    port configured to provide control signals to control electronic
    devices via a network, wherein the electronic devices comprise
    lights and a video device…”\[7\] Having a separate automation
    controller and an analog receiver to have a control interface from
    the automation controller. Allowing control options for the lights
    i.e. dimming and turning on and off lights.

b.  Non-Infringement

    At first glance, the patent seems to broad so ‘Morse v. O’Reilly’
    can be used since the idea of having a patent controlling analog
    and/or digital devices through an RC or WIFI, does that mean that
    controlling laptops through SSH on a Wi-Fi home network violate this
    patent? If it’s just limited to the electronic devices listed, like
    VHS, DVD, etc. Then we shall focus on implementing other day to day
    electronic devices in our patent or consider licensing until we can
    show the patent is too broad and recover any lost profits.

<!-- -->

A.  []{#_Toc449618906 .anchor}*Voice Control Device and Voice Control
    Method US 9,153,232 B2* \[8\]

<!-- -->

a.  Summary

    With a device that receives voice commands, “The voice control
    device includes a sound receiver, a sound converter, a voice
    identifier, and a central processing unit (CPU).”\[8\] Receiver
    picks up the sound in analog and passes to the converter which
    converts to digital. The identifier compares the signal with a
    reference signal and sends to verify. Once verified it sends a wake
    up signal. After receiving the wake up signal the CPU leaves it is
    idle state, makes another comparison and takes the input.

![](media/image21.png){width="5.406944444444444in"
height="2.848611111111111in"}

[]{#_Toc449618964 .anchor}Figure 20

a.  Claims Summaries

    “A voice control device, comprising: a sound receiver, receiving a
    first sound signal; a sound converter, coupled to the sound
    receiver, and converting the first sound signal from analog signal
    to digital signal; a voice identifier, coupled to the sound
    converter…” \[8\] Identifier identifies the first voice signal from
    the first sound signal it receives and performs a comparison of the
    signal with a reference voice signal, sending a wake-up signal in
    response to the matching of the signals. A CPU coupled to the
    system, where the CPU receives the wake-up signal and begins
    working. CPU also performs a second comparison, the CPU takes the
    voice input from the sound receiver and the sound converter.

b.  Non-Infringement

    The voice identifier that is a specific embodiment in the patent
    will not be used in the Project, allowing anyone on the network to
    access the system or just limit voice to only through smart phone
    interfaces, i.e. Siri.

<!-- -->

A.  []{#_Toc449618907 .anchor}*Actuator for Electric Blinds, US
    4,773,464 \[9\]*

<!-- -->

a.  Summary

    “Herein disclosed is an actuator for actuating a vertical blind or
    curtain of electric type to be mounted on a mounting support
    face.”\[9\] To stop deformities like torsions of rods and ensure
    their rotations by driving it with the torques of a pair of motors.
    The tension can be adjusted to the rod by fastening the threaded rod
    connected to the traverse rod. Rotation unit is held in a pivotal
    position.

    ![](media/image22.png){width="6.5in" height="2.4895833333333335in"}

[]{#_Toc449618965 .anchor}Figure 21

a.  Claims Summaries

    “ In an electric blind to be mounted on a mounting support face,
    comprising: a generally elongated casing frame having a pair of
    longitudinally extending guide rails”\[9\] Having a long rod
    translates to rotatable in the frame; the runners which rotate and
    run one after another on the rails when the system drives them.

b.  Non-Infringement

    For the blind system, there will be an improvement to allow for
    mechanical hand use along with electric motor and allowed to be
    controlled by an automation controller through a network.

The Alfred trademark, is dead, abandoned on October 6, 2015.\
Serial Number 86599812 \[10\]

I.  [[]{#_Toc449618908 .anchor}]{#_Toc436921991 .anchor}STANDARDS
    CONSIDERATIONS

These following standards published by the IEEE will be our guides when
developing our system. From how to interface the different devices in
the system, to protecting them from the various hazardous conditions of
the world, to the methodology of the development.

1.  IEEE Std 1905.1a-2014 - IEEE standard for a convergent digital home
    network for heterogeneous technologies

<!-- -->

a.  This standard applies a level of abstraction so that multiple
    technologies have a common interface to network on.

b.  We will be incorporating IEEE 1905.1a-2014 when we use the TAP
    interface (simulates layer 2 data link), which is one of the virtual
    networks in Linux. With no need for IP addresses, just shuttling
    packets back and forth, our system can take advantage of multiple
    different devices with different protocols.

<!-- -->

1.  IEEE Std. 1872-2015 - IEEE Standard Ontologies for Robotics and
    Automation

<!-- -->

a.  These Ontologies for Robotics and Automation are developed to be a
    methodology for knowledge, a unified way. Providing definitions and
    allowing for transfer of knowledge unambiguously.

b.  We will be using this methodology; with all its conventions and
    definitions for automation for our local coordinate systems.

<!-- -->

1.  IEEE Std. C62.36-2014 - IEEE Standard Test Methods for Surge
    Protectors Used in Low-Voltage Data, Communications, and Signaling
    Circuits

<!-- -->

a.  This standard was originally developed to establish methods for
    testing characteristics and for identifying criteria that determine
    the end of life for surge protectors used in low-voltage data,
    communications, and signaling circuits. This edition of the standard
    is a major rewrite of the 2000 edition. It has two main changes from
    the previous edition. One is reformatted test clauses so that each
    test clause now has sub clauses covering background, purpose,
    equipment to be used, protector states to test, a step-by-step test
    procedure, alternative tests (if any), suggested test data,
    requirements (if any), and comments (if any). The second is
    reorganized tests by characteristics and ratings, rather than by
    non-surge performance tests and active performance tests.

b.  We will be incorporating IEEE Std. C62.36-2014 to properly test our
    implementation of surge protection to avoid possible problems that
    could ruin the system.

In conclusion, there will most likely be more standards to be
incorporated as progress is made; these first few are a glimpse into
what other standards might be applicable to our system. We will be
including:

-   IEEE Std 1905.1a-2014

-   IEEE Std. 1872-2015

-   IEEE Std. C62.36-2014

I.  [[]{#_Toc449618909 .anchor}]{#_Toc436921992 .anchor}GLOBALIZATION

We believe that our voice command smart home system will be a successful
product and people around the world will love it. This system has been
designed not only thinking in bring you an innovative and revolutionary
smart solution to your home. It is designed to be a worldwide product
that will meet the needs of the market nowadays complying with all the
required standards and regulations. Our system will not harm the
environment and safety is a priority in all aspects of our design. Also,
this voice command smart home system is made having in mind different
countries and cultures opinion that helps to guarantee a high quality
end product with a positive global acceptance. The result is a product
with a competitive affordable price, safe, easy to use, that people
simply will love it.

A.  [[]{#_Toc449618910 .anchor}]{#_Toc436921993 .anchor}*World Trade
    Organization*

The World Trade Organization comes from the Uruguay Round Negotiations
(1986-1994) and it was established on January 1, 1995. The organization
comprises 161 countries as of April 2015; it is established in Geneva,
Switzerland and had Roberto Azevêdo as Director. \[11\] “WTO is the only
global international organization dealing with the rules of trade
between nations. At its heart are the WTO agreements, negotiated and
signed by the bulk of the world’s trading nations and ratified in their
parliaments. The goal is to help producers of goods and services,
exporters, and importers conduct their business, while allowing
governments to meet social and environmental objectives.”\[12\] The main
function of the world trade organization is that trade flows as
smoothly, predictable and freely as possible. In order to achieve that,
the WTO offer forums for trade negotiations, handling trade disputes and
monitor national trade policies. Also, they offer technical assistance
and training for developing countries, and cooperation with other
international organizations. In addition, the WTO ensure that all
organizations, companies and government know that the rules are
worldwide and give them the confident that there will be no sudden
changes of policy. Below are some of the rules or agreements that The
World Trade Organization stands for:

1.  Non-discrimination.

> A country should not discriminate between its trading partners and
> between its own and foreign products, services or nationals.

1.  More open trade.

> Encouraging trades by lowering trade barriers like customs duties or
> tariffs.

1.  Predictable and transparent.

> Trade barriers should not be raised arbitrarily, a more predictable
> and transparent trade given the business a clear view to their future
> opportunities.

1.  More competitive.

> This rule stands against unfair practices like dumping products at
> below cost to gain market and how government can respond by applying
> additional charges.

1.  More beneficial for less developed countries.

> These countries have more time and flexibility to adjust to the WTO
> provisions.

1.  Protect the environment.

> WTO permits members to take measures to protect the environment,
> public health, animal health and plant health. All in a fair way that
> include national and foreign business.

To conclude, The World Trade Organization deals with the rules of trade
between nations. It’s a forum for governments to negotiate trade
agreements. It is a set of rules for international commerce. And, it
helps to settle disputes.

A.  [[]{#_Toc449618911 .anchor}]{#_Toc436921994 .anchor}*Importance of
    Eliminating the Barriers to Trade*

    In this section we will talk about the importance of eliminating
    barriers to trade, but what are trade barriers? Let us take a look
    at this particular definition “Trade barriers are measures that
    governments or public authorities introduce to make imported goods
    or services less competitive than locally produced goods and
    services”\[13\] From this definition we can appreciate that
    eliminating these barriers could make the difference in our design’s
    global acceptance. These barriers could have a technical or
    administrative nature and they are generally classified as;
    Import policies reflected in tariffs and other
    import charges, quotas, import licensing, and customs practices.
    Standards, testing, labeling and various types of certifications.
    Lack of copyright protection. Restrictions on franchising and
    restrictions on foreign direct investment.

    One of the best ways to elaborate a high quality product that had a
    global acceptance is to comply with the required regulations and
    standards. This ensures public safety and drive market development.
    Also, guarantees that your product can be accepted in a foreign
    country. For example, these are some of the standards applicable to
    our system, IEEE Std 1905.1a-2014 -IEEE standard for a convergent
    digital home network for heterogeneous technologies. IEEE Std.
    1872-2015 -IEEE Standard Ontologies for Robotics and Automation, and
    IEEE Std. C62.36-2014 -IEEE Standard Test Methods for Surge
    Protectors Used in Low-Voltage Data, Communications, and Signaling
    Circuits. More standards will be incorporated as progress is made,
    always looking forward to eliminate barriers to trade.

B.  [[]{#_Toc449618912 .anchor}]{#_Toc436921995 .anchor}*Collaboration
    Tools*

Design a successful project involves collaboration, planning and
coordination between all the team members. Fail to comply with the
project schedule and due dates could end in a delayed product. We live a
busy life and sometime is hard to find the right time to meet and share
ideas or documents. Our team, in order to avoid those situations, have
been used some collaboration tools that help us to keep in touch and
focus on our project goals. Google Drive, for example, is a great tool
that let you create a folder and share the documents in there with your
team members. Later on with Google Docs any of us can work on those
documents over the Internet, even all at the same time, so in that way
we can be on track and work in the project from home. Although, this is
a great set of tools, stay in contact and meet frequently is a necessity
for planning and coordinating the project. We use phone applications
like ooVoo and GoToMeeting that help us a lot to stay in contact. With
these apps we can do video conferences, share files and ideas in real
time, like we were in a meeting room. These tools were very useful for
us in term of collaboration during our project and helped us to
eliminate the lack of communication when we were travelling or in
different locations.

A.  [[]{#_Toc449618913 .anchor}]{#_Toc436921996 .anchor}*Perspective of
    our product in different countries and cultures*

    We believe that our voice command smart home system design will be
    accepted and will have a good perspective in other countries and
    cultures. For example, Raynel Díaz Santos, electrical engineer and
    professor in the faculty of electrical at Instituto Superior
    Politécnico José Antonio Echeverría (CUJAE) told us that the idea
    was excellent and innovative for a country like Cuba that right now
    is on the search of new technologies. He thinks that the product
    will be accepted and people will love it. On the other hand, insert
    the product in the construction models available in the island will
    be a challenge and a gradual process. Raynel explained that the
    country is experiencing substantial changes in their usual
    construction style, induced by the influence of new cultures. This
    should be good for our design he said, since the old houses
    structures are made of concrete and the electrical system is almost
    impossible to change or modify. Now with new construction styles the
    system will be a great idea. Also, Internet is a topic in
    development in Cuba, but since the system can work without an
    Internet connection, no monthly fees are present and the system will
    be a perfect option. Samuel Beltran, a computer engineer from
    Colombia told us that the idea is good, but he believes that the
    people who can afford a smart home system do not live in houses but
    in apartments, therefore the voice command to open the garage door
    will not be needed. Helbert Quevedo a policeman who works in small
    towns and have seen smart homes, he helped us to realize that in
    Colombia there are companies that will go to your house and change
    all of the electrical systems to make your home smart; it is not
    like here United States, where we can buy every component and change
    it ourselves if we want, also they have to pay for a monthly service
    fee. This monthly fee does not make the system affordable, since the
    user not only have to pay for the actual system, but also for the
    set up and add a monthly fees. To sum up, if we take into
    consideration these different ideas and opinions, we can design a
    successful product with a great acceptance in different cultures.

    In conclusion we believe that if we make our system affordable,
    molded to the needs of different cultures, easy to use and complying
    with the corresponding standards and regulations, we can have an end
    product that will meet the needs of our clients, the needs of the
    market, with a global acceptance and with the less trade barriers
    possible.

<!-- -->

I.  [[]{#_Toc449618914 .anchor}]{#_Toc436921997 .anchor}HEALTH AND
    SAFETY

In this section we are going to explain how our team will follow
practices and procedures that will protect not only our health and
safety, but the end users as well. Also we will show that we care about
liability and make use of foreseeability.

As engineers our main goal is to design a product that does not affect
our health or the health of the users in any aspect, that is why safety
is a priority in or design. As a team, we avoid wearing metallic object
when we are working with electricity. Always try to work together so no
one is alone in case of an accident. Also, we try to avoid working with
hot circuits and with broken electric components. In term of the design,
our product will be enclosed in an electrical box with the proper wiring
connections, labels and precautions in order to protect the user from
electroshocks. The product follows all the safety design rules that
includes using copper wire with their respective size per amps showing
in the National Electrical Code table 310.16. Furthermore, the device is
well grounded using the correct wire size that match the outlet
over-current protection. In addition, conductors with more than 14 volts
DC are not exposed in our product. The design will not contribute to
increase the amount of electronics waste in the planet, since we avoid
the use of batteries and other electronic parts that can damage our
environment and our health. In addition, this is a product designed for
a long useful-life period. Liability is another aspect that our team is
concerned about. We believe that our costumer’s satisfaction is a
measure of our success. In order to warranty the success, our product
has been designed with different construction layers that make it easy
to repair and / or replace, that way the relationship costumer-vendor is
more fluent. Finally, our team spends time analyzing every manner in
which our product might be used or misused because we understand that it
is our responsibility to anticipate the different failures that our
product could present when it leaves the factory.

[[]{#_Toc437294357 .anchor}]{#_Toc437281058 .anchor}To conclude, we
believe that our product has been designed having in mind the safety and
health of our costumes. Our team applied foreseeability and take into
consideration the different responsibilities with the end user.

I.  []{#_Toc449618915 .anchor}ENVIROMENTAL CONSIDERATIONS

In this section we will cover the various materials of the parts that we
are looking to use in our project. Since our design mostly consist of
electronic components, there will be a sharp discretionary focus on said
materials to eliminate as much E-waste as possible. The following is an
overview of some of available pieces in the market, ready to be shot
onto a printed circuit board, and the different materials inside; there
will be exceptional consideration to make sure that it is compliant to
the Restriction of Hazardous Substances Directive, WEEE directive, and
what other standards may apply.

The Atmega 2560

Atmel microcontroller unit, the Atmega 2560, which is featured in many
devices including the popular Arduino developer board, is RoHS
compliant. It contains no lead, cadmium, or other problematic materials.

60/40 Rosin-Core Solder

Although it has solder with a leaded rosin flux core, it allows for
easier disassembly. It has been used in demonstration builds but special
consideration is being considered to use a lead free alternative even
though it is of lower quality.

A small LCD screen

The system is to work upon commands via voice instruction or cellular
phone but there might be benefits to the user if a small screen was made
available to display important information to the user on the base
system. The liquid crystal display won’t be the burden that televisions
are but it still of a toxic substance. It would be ideal to possibly get
away with a screen smaller than 4” but special consideration should be
taken for those with troublesome vision that would use the product.

With each different component, material, and substance comes the
responsibility that we have to planet and all the creatures in which we
co-exist with. Our aim is to be as energy efficient as possible with our
design and have the customers breathe a sigh of relief when realizing
the lack of maintenance needed to upkeep the system providing long
lasting use.

I.  []{#_Toc449618916 .anchor}SUSTAINABILITY CONSIDERATIONS

In this section we will explain how our team is planning to design a
long-term value product, having in mind the idea of a sustainable
future.

As electronics continue to advance and increase in numbers, they also
increase in challenge in guarding human health and the environment from
potentially harmful effects when misused or improperly disposed of. This
team seeks to stay clear as much as possible of these chances and to
provide an effective way to manage these risks. Throughout its life
stages of manufacturing, use, storage, and disposal; there shall be
direct methods to make sure that the product remains sustainable.

With all AVR solutions, from 8 bit to 32 bit high performance
microcontroller, Atmel’s atmega328p which shall be used in this project
is the most code efficient architecture for C and assembly programming.
The 2560 also has the added bonus of reprogramming and the ability to
tune system parameters throughout the entire life cycle of the product,
adding to the recyclability and ease of maintenance to the design. One
of the benefits of the Atmel ATmega2560 is that the EEPROM has a
lifespan 100,000 write/erase cycles. Although it’s not confirmed that
this Microcontroller will be a definite feature in the product, a
similar microcontroller unit with about equivalent write/erase cycles
will be used.

To conclude, we think that our design will be a long-term product that
will suit the necessities of futures generations. Not only for the easy
recycling, but because it will be a reliable product, in which the user
can trust.

I.  []{#_Toc449618917 .anchor}MANUFACTURABILITY CONSIDERATIONS

In this section we are going to discuss the importance of making the
right choice in the early stages of our project, as well as the
particular principles that we will emphasize in our design.

Time is an important aspect to consider when we are planning a project.
Making the right decision in an early stage of our design could save us
a lot of money in a future production and even the success of our
product

![Macintosh HD:Users:arielromero:Desktop:Screen Shot 2015-12-06 at
11.29.03 PM.png](media/image23.png){width="3.1194444444444445in"
height="3.451447944006999in"}

[]{#_Toc449618966 .anchor}Figure 22

The image above can give us a better understanding of the situation. “By
the time a product has been designed, only 8% of the total product
budget has been spent. By that time, the design has determined 80% of
the cost of the product!  The design determines the manufacturability,
which determines a significant part of the introduction and production
cost (the 80%) of the product. Once this cost is locked in, it is
difficult for manufacturing to remove it. Note that the concept or
architecture alone determines 60% of the cost!”\[14\]

Another aspect to take into consideration is manufacturability. Nowadays
with the advantages in technology and automation, design for
manufacturability is very important in order for a project to be
successful. When you optimize manufacturing functions like fabrication,
assembly, test and repair, you assure the best cost, quality and
reliability in your product. Design for manufacturability is not always
easy, our team evaluate different options to accomplish this in our
design. For example, simplify the design and reduce the number of parts.
This principle ensures a more perfect product, reduce the cost of
fabrication and assembly, and the automation process become easier and
less expensive. Another point to consider is standardize and use common
parts and materials to facilitate design activities. With the use of
common parts we reduce the inventory, resulting in lower cost and higher
quality. Design for easy fabrication is another principle that brings a
lot of benefits to our project. For example, our product requires an
electrical box that will hold the system inside and provide the required
connection access points. In order to facilitate his machinability
process we will avoid sharp corners, undercuts that require special
operations, and hard material that difficult the fabrication process. In
addition we will avoid unnecessary parts that involve extra effort or
complex tooling. Mistake proof is another technique that assure a fast
production, here we design our components in such a manner that they can
only be assembled in one way. Finally, Design circuit printed boards for
assembly could be a good approach for our design, since we will minimize
soldering, use standard boards and panel size minimizing component
variety and standardizing component packaging, which together will
contribute to a fast production.

To conclude, we observed in this section that when planning a project is
essential to make decisions on time in early stages of our design, this
could save or sink our project. Also, we analyzed manufacturability and
emphasized in the different principles that comprise our design.

I.  []{#_Toc449618918 .anchor}ETHICAL CONSIDERATIONS AND SOCIAL IMPACT

<!-- -->

A.  [[]{#_Toc449618919 .anchor}]{#_Toc436921998 .anchor}*Ethical
    Considerations*

When the team starts developing the idea of our Smart Home System
“Alfred”, one of the first objectives that comes to our mind was the
desire of improving the quality of life of elderly and disable people.
But we were aware that the use of human interfaces in the design of the
smart home system could present several ethical issues, even more if the
system is meant to be also used by people with any kind of disability of
restriction (physical, cognitive, or sensorial). Therefore we were
extremely careful with the design of the system; we develop the
interface having in mind that all type of people could be accessing to
the system, in that way we treat fairly all persons regardless of such
factors as race, religion, gender, disability, age, or national origin.
In the process of the design we also sought and accepted honest
criticism of our technical work; we acknowledged and corrected errors,
and credited the contributions of others. As new developers of
technology, the assistance of our mentor was essential to achieve an
improved project.

> *After a meticulous ethical analysis of our project and taking into
> consideration that an ethical issue is everything that can affect the
> wellness of others, we realize that we could face a complex ethical
> dilemma in our way to the acceptance of our project. Where do people
> feel safer than at home? Most people feels their home as the safer and
> more comfortable place in the world; therefore, they, especially the
> elderly, can considered a smart technology as an intruder in their
> home, they can be afraid of losing control since smart home may use
> systems that could affect the privacy and the autonomy of users.
> Saying this, we had to be clear about the advantage of the smart home
> system to those people versus the discomfort that it may create in
> their lives, and decided how to implement the system in a way that do
> not take them out of their comfort zone. *

Once we had identified the ethical issue, we concentrate in how to
resolve the issue leading to the widely acceptance of our project. We
realize that we need to create a system that had to be destined for
extremely varied users and that needed to consider the habits of the
intended users. We decide that those people who could feel uncomfortable
with the smart home system should not be force to accept it because that
could direct them to a total rejection of the technology. On the
contrary they should be first informed, educated, and trained about all
the advantage of the system, how it works, and all the benefits that it
could bring them, because the acceptance of a product depends on the
customer’s understanding of its functionality, utility, and advantages.

All this examination takes us to realize that the ethical analysis in
every project is crucial and that we need to be aware of how the
development of some ideas which lead to the production of new technology
can have side effects, personal or social, over some of the intended
users. The solution is recognizing the ethical issue, understand the
perspective of the affected people and resolve the problem focused in
the greatest benefit for the greatest number.

A.  [[]{#_Toc449618920 .anchor}]{#_Toc436921999 .anchor}*Social Impact*

Smart Home Systems have been in the mind of people for many years, but
it was just science fiction coming from movies and books until it
actually became real. In the last few years, not only became real a
systems that the user can manage to improve the quality of their lives
by making homes a more comfortable place, but also its use around the
world has become a trend that only lead to a more increasing use every
year.

Last year the global smart homes market was valued at \$20.38 billion;
with the current trending to upgrade homes to smart homes in the
majority of the developed countries, the market is expected to growth at
an estimated compound annual growth rate (CAGR) of 17% between 2015 and
2020, consequently the estimated size for the market by 2020 is \$58.68
billion.

![](media/image24.png){width="6.5in" height="3.6625in"}

[[]{#_Toc449618967 .anchor}]{#_Toc436922427 .anchor}Figure 23

a.  Local Culture

If for local culture we took our country, we can said that we are in the
right place to develop a project like this, because, as can be seen in
Figure 23, United States leads the use of smart home systems, and it is
expected to continue being like this for the next years.

a.  Global Culture

Although not to the same rate of in United States, the global growth of
the utilization of smart home systems is also expected to increase in
the coming years. The estimates suggest approximately 26 billion of
smart homes by 2020 across the world. Of course this number is not
evenly distributed, the majority of the smart homes will be in North
America, follow by Europe (mainly United Kingdom, France and Germany),
and by Asia (mainly China, Japan, and India). In the other hand, there
will be regions in which the utilization of smart home systems will be
scarce or null; for example, in the majority of the countries of Africa,
Central and South America.

For a revolutionary idea to be successful it not just needs to be great;
it also needs people to be ready to accept it and embrace it, and the
global community has been anxious for the integration of technology and
services through home networking for a better quality of living. Our
project is something that people is actually waiting to hear from.

I.  [[]{#_Toc449618921 .anchor}]{#_Toc436922000 .anchor}CONCEPT
    DEVELOPMENT

    Our objective is to create a smart home system that can be mange
    though voice commands as well as a smartphone application, make
    phone calls, check the security of the users’ house and alert them
    if there is any door or window open, and the system must also be
    able to turn on and off the lights of at least four areas of the
    house as well as opening and closing the garage door. The system
    must be affordable, easy to use, user friendly for every age,
    especially for elders, and those not so acquainted with technology.

***Concept Fan***

The following concept fan will help us see the option we have available
to design our Smart Home system, and implement the best concept for our
design. The design chosen must keep us with in our objectives, budget
and time.

[[]{#_Toc449618968 .anchor}]{#_Toc436922428 .anchor}Figure 24

A.  [[]{#_Toc449618922 .anchor}]{#_Toc436922001 .anchor}*Concept
    Combination 1*

  Voice Recognition
  ------------------------------------------------------------------------------------------------------------------------------ ------ ----------------- -- ---------------------------- -- ----------------------- -- ------------------------ -- ------------------------------
  **------------------------------------------------------------------------------------------------------------------------**
  EasyVR Shield
  BitVoicer

[[]{#_Toc449619028 .anchor}]{#_Toc436922606 .anchor}Table 50

*Advantages:*

This option allows the system to not only have a one user but many since
the BitVoicer will not have a voice recognition but a command
recognition. The WiFi Module – ESP8260 allows the Arduino to connect to
the internet, the relay will allow the system to control AC lights, and
the Triac board will allow the system to control the garage door.

*Disadvantages:*

If a BitVoicer is use in the system anyone that comes into the house
will be able to control the system and will not have much security for
the user, since it does not have a voice recognition but a command
recognition, the Relay will not support a high load from lights, and the
Triac board will be too expensive just to handle the opening and closing
of garage door.

A.  [[]{#_Toc449618923 .anchor}]{#_Toc436922002 .anchor}*Concept
    Combination 2*

  Voice Recognition
  --------------------------------------------------------------------------------------------------------------------------------------------- ------ ----------------- -- ---------------------------- -- ----------------------- -- ------------------------ -- ------------------------------
  **---------------------------------------------------------------------------------------------------------------------------------------**
  EasyVR Shield
  BitVoicer

[[]{#_Toc449619029 .anchor}]{#_Toc436922607 .anchor}Table 51

*Advantages:*

This option allows the system to not only have a one user but many since
the BitVoicer will not have a voice recognition but a command
recognition. The Wi-Fi Module – ESP8260 allows the Arduino to connect to
the internet, and the Triac will allow a high load from lights to be
manage, and the Relay board will allow us to manage the load of the
garage door.

*Disadvantages:*

If a BitVoicer is use in the system anyone that comes into the house
will be able to control the system and will not have much security for
the user, since it does not have a voice recognition but a command
recognition, the Wi-Fi Module – ESP8260 is not as reliable as other
modules or shields in the market, and the Triac is more expensive than
the Relay.

A.  [[]{#_Toc449618924 .anchor}]{#_Toc436922003 .anchor}*Concept
    Combination 3*

  Voice Recognition
  --------------------------------------------------------------------------------------------------------------------------------------------- ------ ----------------- -- ---------------------------- -- ----------------------- -- ------------------------ -- ------------------------------
  **---------------------------------------------------------------------------------------------------------------------------------------**
  EasyVR Shield
  BitVoicer

[[]{#_Toc449619030 .anchor}]{#_Toc436922608 .anchor}Table 52

*Advantages:*

This option allows the system to have the security of voice recognition,
and not everyone coming to the house will be able to use the system but
only the house owner. The Dragino Yun Shield allows the Arduino to
connect to the internet and it is reliable, and the Triac will allow to
control the lights and not have and overload, the relay for the garage
door will not be expensive for only one load.

*Disadvantages:*

The Triac board is more expensive than a Relay board.

A.  [[]{#_Toc449618925 .anchor}]{#_Toc436922004 .anchor}*Concept
    Selection*

                              **Sound Quality**   **Easy to Use**   **Good Phone Connection**   **Security**   **Accuracy**   **Low Cost**
  --------------------------- ------------------- ----------------- --------------------------- -------------- -------------- --------------
  **Sound Quality**           1                   3                 1                           7              3              3
  **Easy to Use**             1/3                 1                 3                           5              5              3
  **Good Phone Connection**   1/1                 1/3               1                           3              3              3
  **Security**                1/7                 1/5               1/3                         1              1              3
  **Accuracy**                1/3                 1/5               1/3                         1/1            1              1
  **Low Cost**                1/3                 1/3               1/3                         1/3            1/1            1

[[]{#_Toc449619031 .anchor}]{#_Toc436922609 .anchor}Table 53

                              **Sound Quality**   **Easy to Use**   **Good Phone Connection**   **Security**   **Accuracy**   **Low Cost**   **G. Mean**   **w**
  --------------------------- ------------------- ----------------- --------------------------- -------------- -------------- -------------- ------------- -------
  **Sound Quality**           1                   3                 1                           7              3              3              2.395577915   0.32
  **Easy to Use**             0.33                1                 3                           5              5              3              2.053573307   0.28
  **Good Phone Connection**   1.00                0.33              1                           3              3              3              1.44224957    0.19
  **Security**                0.14                0.20              0.33                        1              1              3              0.552911122   0.07
  **Accuracy**                0.33                0.20              0.33                        1.00           1              1              0.530230348   0.07
  **Low Cost**                0.33                0.33              0.33                        0.33           1.00           1              0.480749857   0.06
                                                                                                                              **Total**      7.455292119   

[[]{#_Toc449619032 .anchor}]{#_Toc436922610 .anchor}Table 54

The above tables allows us to see which the most important objectives
are for our Smart Home System. By calculating the G. Mean and the weight
we will be able to choose the best option available for us to build our
system.

                                                  **Option 1**   **Option 2**   **Option 3**
  --------------------------------------- ------- -------------- -------------- -------------- ------- --- -------
  **Constrains**                                                                
  **Operable by Voice**                           Yes            Yes            Yes
  **Phone Application**                           Yes            Yes            Yes
  **Small to Fit in a Closet or Attic**           Yes            Yes            Yes
                                                                                
  **Objectives**                          **w**                                 
  **Sound Quality**                       0.32    4              1.285          4
  **Easy to Use**                         0.28    3              0.826          3
  **Good Phone Connection**               0.19    5              0.967          5
  **Security**                            0.07    2              0.148          2
  **Accuracy**                            0.07    3              0.213          3
  **Low Cost**                            0.06    4              0.258          3
                                                                 3.699          

[[]{#_Toc449619033 .anchor}]{#_Toc436922611 .anchor}Table 55

After the calculations are made comparing each of the three options we
have available, the best option is option number three with a result of
4.871 which is the highest one we have available. We will be using a
EasyVR Shield for our voice recognition, for phone calls FONA 800
Shield, for the Windows and Doors Security we need to connect to the
Arduino Mega 2560 directly and the use if the Wi-Fi Module to connect
the system to the smartphone application for our best option we will be
using the Dragino Yun Shield, and to have the system control the lights
we will be using a Triac Board and the garage door will be open and
close through a Relay.

I.  [[]{#_Toc449618926 .anchor}]{#_Toc436922005 .anchor}END PRODUCT
    DESCRIPTION AND OTHER DELIVERABLES

Having now a clear path to follow thanks to the calculations made on the
concept development section of this document. We can explain on more
detail each of the modules that are to be used in our Smart home system.
As we concluded on the previous section our best option to create our
Smart Home System with all of the functionality have planned is to
follow the path of the concept combination table 3; although, in the
development of the hardware and software of the system things may
change. To build our smart home system we will make our main unit an
Arduino Mega 2560, which will be the brain of the operation, this device
will manage the functionalities of the system; which are a voice
recognition system, make phone calls, check the status of doors and
windows in the house weather they are open or close, and it will be able
to control the light of the house as well as the garage door.

A.  [[]{#_Toc449618927 .anchor}]{#_Toc436922006 .anchor}*End Product
    Description*

In our end product description of our proposal, we will provide
information about how our product will work in different levels, also it
will describe the systems functionality. Each of this section will give
more light on what type of modules and boards of existing technology we
will be using to provide the functionality to the Smart Home System.

***Level 0***

[[]{#_Toc449618969 .anchor}]{#_Toc436922429 .anchor}Figure 25

  ------------------------------------------------------------------------------------
  **Module**          **Smart Home System / Arduino**
  ------------------- ----------------------------------------------------------------
  **Inputs**          - Power: 7 to 12V DC

  ** **               - Audio Input: Mic Sensitivity - 38dB (0dB = 1V/Pa at 1KHz)

  ** **               - Load Impedance 2.2K

  ** **               - Operating Voltage 3V

  ** **               - Almost Flat Frequency response in the range of 100Hz - 20kHz
                      
                      - Magnetic contact switches

  ** **               - App Control: Software (User Interface)

  **Outputs**         - Triac board / Control lights

  ** **               - Relay board / Garage door control

  ** **               - Audio output: 8 Ω speakers

  ** **               - WiFi Module
                      
                      - Magnetic contact switch status

  **Functionality**   Main unit that will manage the whole smart home system
  ------------------------------------------------------------------------------------

[[]{#_Toc449619034 .anchor}]{#_Toc436922612 .anchor}Table 56

The above graph and table, is depicting the Smart Home system with its
input and outputs, without specifying what is inside the box. As it is
observed, the expected inputs are the power that could have a range from
7 to 12 V DC. Also, an audio input which will be done by using a
microphone with the correct gain allowing the user to give commands to
the system form at least 3 meters, the microphone will have a
sensitivity of at least -38dB, a load impedance of 2.2k, an operating
voltage 3V and almost flat frequency response in the range of 100Hz to
20kHz. Finally, the smart phone application, which will allow the user
to interact with the system without the voice command if it is so
desired, this application will be connected to the system through the
Wi-Fi module.

The system’s outputs will be seen in it functionalities which are to
allow the user to control the lights of the home, the garage door, the
system will also allow the user to know that is listening waiting for a
command by giving a short sound through the speaker, and for the phone
functionality the speaker will allow the user to hear the other person
on the other side of the call, also the system will send a status to the
user of the magnetic contacts placed at the windows and doors, to let
him know if the windows or doors are open or close.

The system’s main devise that will be use and will control the input and
outputs through the correct channels will be an Arduino Mega 2560, which
is compatible with the rest of the modules to be use in the complete
system.

***Level 1 - Smart Home System***

![C:\\Users\\Ximena\\Downloads\\Block Diagram figura
26.jpg](media/image25.jpeg){width="6.193627515310586in"
height="3.2852012248468943in"}

[[]{#_Toc449618970 .anchor}]{#_Toc436922430 .anchor}Figure 26

  -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  **Module**          **Smart Home System Modules**
  ------------------- -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  **Inputs**          - Power: 7 to 12V DC

  ** **               - Audio Input: Easy Shield: Mic Sensitivity - 38dB (0dB = 1V/Pa at 1KHz)

  ** **               - Load Imp2.2K

  ** **               - Operating Voltage 3V

  ** **               - Almost Flat Frequency response in the range of 100Hz - 20kHz
                      
                      - Magnetic door switches

  ** **               - WiFi – Dragino Yun Shield user interface with phone application

  **Outputs**         - FONA 800 audio output from calls

  ** **               - Arduino Mega 2560 will send the status of the magnetic door switches

  ** **               - Triac board: turn on and off lights
                      
                      - Relay board: opens and closes garage door

  **Functionality**   The system will send information to the user letting them know if the windows are open or close. The FONA 800 allows the user to make phone calls and hear the person on the other line. The Wi-Fi module will allow the smartphone application to interact with the system. The Triac will allow the user to control the lights and the Relay board will control de garage door.
  -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

[[]{#_Toc449619035 .anchor}]{#_Toc436922613 .anchor}Table 57

On the Level One graph and functionality table we can observe the system
in more detail, the inputs to the system depend on the voice commands
given by the user or the phone application that the user can also use.
If the home owner uses the voice command the input will be receive
through the EasyVR Shield which will send the command to the Arduino
Mega 2560 and the Arduino will decide which interface will be the one
performing the action. The other input received by the system is through
the smartphone application which will send the command to the Arduino
through the Wi-Fi – Dragino Yun Shield, the Arduino will also receive a
signal from the Magnetic door switches to let the system know the status
of each door and window that has one, weather they are open or close.

The system uses modules to send the output signals and perform the
command the user requires. Through the Wi-Fi – Dragino Yun Shield the
system will be sending the status of the doors and windows of the house
to the user’s phone app, through the FONA 800 the system will be able to
make phone calls and by using 8Ω speaker connected to this module it
will allow the user to hear the person on the other line. The other
important output the system has is done through the Triac Board, which
will allow the lights of the house to turn on and off, finally the
garage door will be open and close by the system through a Relay Board.

Following we will go through the level two graphs and tables of each
module that is used in the system to give functionality needed by the
user.

***Level 2 - EasyVR Shield***

[[]{#_Toc449618971 .anchor}]{#_Toc436922431 .anchor}Figure 27

  **Module**          **EasyVR Shield**
  ------------------- -----------------------------------------------------------------------------------------------------------------
  **Inputs**          - 3.3V DC form Arduino Mega 2560
  ** **               - Audio Input: Voice command form user
  **Outputs**         - Data command to Arduino
  ** **               - Audio tone to confirm the command to the user, through speakers
  **Functionality**   Convert voice command input to digital data and send it to the Arduino unit, also to confirm the voice command.

[[]{#_Toc449619036 .anchor}]{#_Toc436922614 .anchor}Table 58

The EasyVR Shield is a module that is compatible to the Arduino Mega
2560 and will allow the Arduino to receive voice command from the user,
this module is being powered by the 3.3 Volts supplied by the Arduino
boar. Once the command is recognized the EasyVR Shield will give a tone
through the speaker to let the user know that the command was received
and will be perform. The voice recognition will give the facility to the
user to only have to speak and the system will do what the command says,
this functionality is being implemented for the users that do not have
the ability to use smart phones and its applications or simply because
they have a type of disability that will give them the advantage to
interact with the system.

***Level 2 - FONA 800***

[[]{#_Toc449618972 .anchor}]{#_Toc436922432 .anchor}Figure 28

  **Module**          **FONA 800**
  ------------------- -------------------------------------------------------------------------------
  **Inputs**          - 3.3V DC form Arduino Mega 2560
  ** **               - Audio Input: Microphone: Microphone Sensitivity -38dB (0dB = 1V/Pa at 1kHz)
  ** **               - Load Impedance 2.2k
                      - Operating Voltage 3V
                      - Almost flat frequency response in the range of 100Hz to 20kHz
  **Outputs**         - External 8 Ω speaker
  **Functionality**   Make and receive phone calls

[[]{#_Toc449619037 .anchor}]{#_Toc436922615 .anchor}Table 59

The system will also be able to make phone calls and this will be done
using the FONA 800 Module, this module is compatible with the Arduino
Mega 2560. The FONA 800 will be power by the 3.3V DC supplied by the
Arduino Mega 2560, also, the module will be receiving the command to
make a phone call prom the Arduino and receive an audio input from the
microphone once a phone call is in line. The output of the FONA 800 is
through the speakers while the user is in a phone call.

***Level 2 – Magnetic Door Switches***

![C:\\Users\\Ximena\\Downloads\\Magnetic
switch.png](media/image26.png){width="3.9722222222222223in"
height="1.8611111111111112in"}

[]{#_Toc449618973 .anchor}Figure 29

  **Module**          **Magnetic Door Switches**
  ------------------- -----------------------------------------------------------
  **Inputs**          - Digital Pin 3V from Arduino unit
  ** **               - Arduino Ground
  **Outputs**         - Switch status
  **Functionality**   Send status of windows and doors to the Arduino Mega 2560

[]{#_Toc449619038 .anchor}Table 60

One of the functions of our system is to check the security status at
the user’s home. This will be able to be done through a Magnetic Door
Switches connected to the Arduino board. The Arduino Mega 2560 will send
a signal of 3V to the contact switches and corroborate if the switches
are open or closed.

***Level 2 - WiFi Module – Dragino Yun Shield***

[]{#_Toc436922433 .anchor}![C:\\Users\\Ximena\\Downloads\\Figure
29.png](media/image27.png){width="6.5in"
height="3.0509831583552054in"}**Figure 30**

  ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  **Module**          **WiFi Module – Dragino Yun Shield**
  ------------------- -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  **Inputs**          - 3.3V DC from Arduino Mega 2560

                      - User interface (phone Application)

  **Outputs**         - Send message command from phone application to the Arduino
                      
                      - Send the status of the doors and windows to the phone for the user to check.

  **Functionality**   Receive commands from the user’s phone app to send it to the Arduino allowing the user to interact with the system. It also allows the user to check the status of the doors and windows.
  ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

[[]{#_Toc449619039 .anchor}]{#_Toc436922616 .anchor}Table 61

With the Wi-Fi Module – Dragino Yun Shield the system will have the
ability to connect to the Wi-Fi to implement other functions the system
needs to perform. The Dragino Yun Shield is compatible with the Arduino
Mega 2560 and allows the Arduino to send information and receive
commands through the Wi-Fi module. In our system the Wi-Fi module will
interact with the user interface which in our case is the phone
application. Once the Module receives any of the inputs it will send the
information to the Arduino which will process the information and decide
what is the next step depending on the input. If the Arduino wants to
send information to the phone application like the status of the
magnetic switches to let the user know if a window or door is open then
it will send the information through the Dragino Yun Shield.

***Level 2 - Triac Board***

![C:\\Users\\Ximena\\Downloads\\Triac
.png](media/image28.png){width="6.175926290463692in"
height="1.6729166666666666in"}

[[]{#_Toc449618974 .anchor}]{#_Toc436922434 .anchor}Figure 31

  **Module**          **Triac Board**
  ------------------- ------------------------------------------------------------
  **Inputs**          - 5 V DC from Arduino
  ** **               - Command from Arduino
  ** **               - 120V AC that feeds the loads
  **Outputs**         - 120V AC lights
  **Functionality**   Manage different loads controlled by the Arduino Mega 2560

[[]{#_Toc449619040 .anchor}]{#_Toc436922617 .anchor}Table 62

One of the most important functions of our system is to turn on and off
lights at the user’s home. This will be able to be done through a Triac
Board which allows us to control high loads though the Arduino Mega
2560. The Triac board is be power by the 5V DC supplied by the Arduino,
it will also receive commands from the Arduino to know which load will
be turn on, off. Also, the board requires a 120V AC input that will feed
all the loads that are connected to it. Once the inputs for the Triac
Board are met, the loads that in this case are the will be able to be
controlled by the user through the Arduino Mega 2560.

***Level 2 - Relay Board – KY-019***

![C:\\Users\\Ximena\\Downloads\\Relay.png](media/image29.png){width="4.879861111111111in"
height="2.3240737095363078in"}

[]{#_Toc449618975 .anchor}Figure 32

  --------------------------------------------------------------------------
  **Module**          **Relay Board – KY-019**
  ------------------- ------------------------------------------------------
  **Inputs**          - 5 V DC from Arduino

  ** **               - Command from Arduino – Digital Pin

  ** **               - Arduino ground

  **Outputs**         - Normally Open
                      
                      - Normally Close

                      - Common

  **Functionality**   Allows the system to open and close the garage door.
  --------------------------------------------------------------------------

[]{#_Toc449619041 .anchor}Table 63

One of the functions of our system is to open and close the garage door.
This will be able to be done through a Relay Board which allows us to
control high loads though the Arduino Mega 2560. The Relay board is
powered by the 5V DC supplied by the Arduino, it will also receive
commands from the Arduino to know when to open or close the garage door.
Once the inputs for the Relay Board are met, the load that in this case
is the garage door motor will be able to be controlled by the user
through the Arduino Mega 2560.

The previews graphs and tables provides more information on how the
hardware of the system is interconnected.

I.  [[]{#_Toc449618928 .anchor}]{#_Toc436922007 .anchor}PLAN OF ACTION

    A good plan of action is very important in order to deliver a
    successful end product design. In this section we are going to use
    "Open Workbench", a planning software tool that gives you the
    facility to organize your project phases and tasks, We will also
    assign team members to different tasks and define milestones.

Below we can see the required phases and tasks to obtain our design and
the responsible team members and other resources related to them.

[]{#_Toc436922618 .anchor}![C:\\Users\\Ximena\\Downloads\\Task chart 0
table 62.png](media/image30.png){width="3.5384109798775154in"
height="8.033333333333333in"}

[]{#_Toc449619042 .anchor}Table 64 – Proposed Task Chart

![C:\\Users\\Ximena\\Downloads\\Task chart last
.png](media/image31.png){width="3.6328674540682413in"
height="8.491666666666667in"}

[]{#_Toc449619043 .anchor}Table 65 – Final Task Chart

On the final task chart the only things that change from the proposed
project to the final was the unit that is being used for the Wi-Fi,
originally we were going to use a ESP8260 but we decided to use the
Dragino Yun Shield. The other thing that changed was that we were only
going to use a Triac board, but decided to use a Triac board for the
lights and a relay for the garage due to the difference in voltage.

![](media/image32.png){width="7.98125in" height="3.9784722222222224in"}
Below there is the Gantt Charts from our planning software Open
Workbench.

[]{#_Toc449619044 .anchor}Table 66 – Proposal Gantt Chart

[]{#_Toc436922619 .anchor}![C:\\Users\\Ximena\\Downloads\\Gantt chart
Last.png](media/image33.png){width="7.893530183727034in"
height="3.091666666666667in"}

[]{#_Toc449619045 .anchor}Table 67 – Completed Project Gantt Chart

As the development of the project started, there were many things that
changed along the way, as it can be observe on tables 65 and 66. These
tables show the proposed Gantt Chart and the Gantt Chart we ended up
with at the end of the project. The milestones and tasks did not change,
the major changes we had were in the time that took to complete each
task. The project took longer to finish than what was originally
expected, originally the project was going to be finished by
mid-February of 2016 but instead it lasted until mid-April 2016. Even
though the task did not change, a module that was going to be used did
changed, which is the WiFi module.

PERT diagrams that show the dependency of our phases and tasks.

![C:\\Users\\Ximena\\Downloads\\PERT Chart last figura
31.png](media/image34.png){width="7.074627077865267in"
height="3.086392169728784in"}

[[]{#_Toc449618976 .anchor}]{#_Toc436922435 .anchor}Figure 33 – PERT
Diagram

***Work Breakdown Structure***

![](media/image35.png){width="6.5in" height="3.7659328521434823in"}

[]{#_Toc449618977 .anchor}Figure 34 – WBS Proposed

![C:\\Users\\Ximena\\Downloads\\Figure
32.jpg](media/image36.jpeg){width="6.5in" height="3.764478346456693in"}

[]{#_Toc449618978 .anchor}Figure 35 – WBS Final

The Work Breakdown Structure has the same weight in each task. However
the WiFi module change from ESP8266 to the Dragino Yun Shield, and to
the 1.6 task we were only going to use a Triac board for the lights and
the garage door, we decided to use a Triac board for the lights and a
relay board for the garage door.

***Documenting WBS***

**Phase 1.1 –Research**

-   Objectives: To determine the tasks that the system will be
    > performing for the end user and how it will be done; what hardware
    > and software will be used to be able to perform each task required
    > by the client and end user.

-   Approach: Client interview, survey to intended end users, online
    > research to determine the best hardware to be used.

-   Expected Results: Obtain list of objectives and modules to be used
    > in the construction and programming of the system.

**This phase will consist of the following tasks:**

-   Research

**Phase 1.2 -Power Supply Design**

-   Objective: To construct a 12 volt DC power supply capable to feed
    the Arduino unit and the different modules.

-   Approach: Since the Arduino unit can work in a voltage range between
    7v to 12v a variable Power supply can be built and will feed the
    different modules independently if it would be necessary.

-   Expected Result: Power Supply capable to handle all modules load.

**This phase will consist of the following tasks:**

-   Theoretical Design

-   Power Supply Construction

-   Power Supply Testing

**Phase 1.3 - Voice Recognition Design**

-   Objective: Implement a voice recognition module in order to make the
    system capable to execute voice commands.

-   Approach: We will use an EasyVR shield coupled with the Arduino
    unit, implementing input and output range.

-   Expected Results: The users will be able to communicate with the
    system with their voice.

**This phase will consist of the following tasks:**

-   EasyVR Shield Connection/Implementation with Arduino

-   Voice Tables Construction

-   Microphone Range Test/Implementation

-   Audio Output Test/Implementation

**Phase 1.4 - Phone Module Design**

-   Objective: To make the system able to communicate with a user’s
    built-in contact list and make calls.

-   Approach: We are going to use a FONA 800 module implemented with
    options for Sim card.

-   Expected Results: System able to make phone calls.

**This phase will consist of the following tasks**:

-   FONA 800 Connection with Arduino

-   FONA 800 Module Testing/Implementation

**Phase 1.5 - Wi-Fi Module Design**

-   Objective: To implement a Wi-Fi module in order to communicate the
    system with the smart phone app.

-   Approach: We will use a Module Dragino Yun Shield that will be
    implemented for work with the Arduino unit.

-   Expected Results: Strong Wi-Fi connection.

**This phase will consist of the following tasks:**

-   Wi-Fi Module Dragino Yun Shield Connection/Implementation

-   Wi-Fi Module and smartphone application communication

-   Test Connections

**Phase 1.6 - Triac and Relay Board Design**

-   Objective: A Triac board capable of handling considerable high
    loads. A Relay board capable of handling a high load.

-   Approach: We are going to design or implement an existing Triac
    board to be able to control at least four areas of lights and
    implement a Relay board to control a garage door. From the Arduino
    unit.

-   Expected Results: Triac board that communicates with the Arduino
    unit and controls the different lights of the house. Relay that
    communicates with the Arduino unit and controls the garage door of
    the house.

**This phase will consist of the following tasks:**

-   Triac Board Implement/Connect with Arduino

-   Triac Board Testing with Different Loads

-   Relay Board Implement/Connect with Arduino

-   Relay Board Testing with a load

**Phase 1.7 - Application Design**

-   Objective: An application that connects the user with the system
    through their phone or tablet.

-   Approach: Explore different programming methods.

-   Expected Results: Easy to use and functional app.

**Milestones:**

-   **Power Supply Ready**

    This is our first milestone, now we can test our design with its own
    power supply.

-   **Testing Prototype without real load.**

    In this stage we are ready to test our system and see how the voice
    recognition works, if everything works fine then the project is
    ready for the next milestone.

-   **Triac Board Ready/ Testing with Load**

    Here we will test our system with real loads.

-   **App Design Ready/Demonstration**

    At this point our system is ready to work as a unit.

To conclude, we think that the use of Open Workbench to plan our design
path was very helpful. If we follow our Work Breakdown Structure chart
we will finish our project on time.

I.  [[]{#_Toc449618929 .anchor}]{#_Toc436922008
    .anchor}MULTIDISCIPLINARY ASPECTS

Although we come from similar fields, it is in the concentrations,
employment, and extracurricular activities that we identify the various
aspects of multiple disciplines that will contribute to this project.
Below are those aspects.

1.  Angela Layne

-   Dual majored in Electrical and Computer Engineering.

-   Prior research and analysis experience on non-traditional security
    threats.

-   Familiarity with medical design.

-   Currently working in the aerospace industry.

1.  Ariel Romero

-   Former Electrician

-   Electrical Engineer

-   Proven leader while developing thermoelectric flashlight, using the
    > palm as a power source to heat power the flashlight

1.  Patricia Rodriguez

-   Electrical Engineer

-   Integrated Nanotechnology

-   Bio-Engineering

-   Proven leader while developing a permanent magnet generator with a
    > micro air turbine

1.  Roy Lara

-   Computer Engineer

-   Proven aptitude in computer programming and mathematics through
    > various intercollegiate programming competitions.

-   Displays charismatic showmanship.

-   Tinker of embedded systems.

During the break as to not let up we shall try to meet as often as
possible to work on the system so as to not have to hit the ground
running.

In closing, we are versed in a motley sort of virtues that will
contribute to the excellence that will be our final product.

I.  [[]{#_Toc449618930 .anchor}]{#_Toc436922009 .anchor}PERSONNEL

<!-- -->

A.  [[]{#_Toc449618931 .anchor}]{#_Toc436922010 .anchor}*Roy Lara*

**Education:** Florida International University, Miami, FL

**Bachelor of Science in Computer Engineering**

Concentrations: Computer Science & Embedded Systems

GPA: 3.00/4.0 Graduation: Spring 2016

**Related Courses: **

  ------------------------------------------------------------
  -   Computer Science              -   Operating Systems
                                    
  --------------------------------- --------------------------
  -   Programing Embedded Systems   -   Communication System
                                    

  -   Algorithm Techniques          
                                    
  ------------------------------------------------------------

**Leadership / Community Involvement:**

17^th^ ACM ICPC USA Southeast Regional 2013

Learning Assistant – Calculus I, Tebou 2013

-   Met with students regularly and upon request

**Membership:**

Institute of Electrical and Electronics Engineers

Current President of Panther Linux User Group

**Multidisciplinary Aspects:**

-   Computer Engineer

-   Proven aptitude in computer programming and mathematics through
    various intercollegiate programming competitions.

-   Displays charismatic showmanship.

-   Tinker of embedded systems.

A.  [[]{#_Toc449618932 .anchor}]{#_Toc436922011 .anchor}*Angela Layne*

**Education:** Florida International University, Miami, FL

**Bachelor of Science in Electrical Engineering and Computer
Engineering**

Concentrations: Integrated Nano-Technology, Communications,
Bio-Engineering & Embedded Systems

GPA: 3.00/4.0 Graduation: Spring 2016 in Electrical Engineering,
continuing Computing engineering

**Related Courses: **

  ----------------------------------------------------------------------------------------------
  -   Electronics I                         -   Medical Instrumentation Design
                                            
  ----------------------------------------- ----------------------------------------------------
  -   Electronics II                        -   Computer Application in Electrical Engineering
                                            

  -   Introduction to Solid State Devices   -   Programing Embedded Systems
                                            
  -   Communication System                  -   Embedded Computing
                                            
  -   Introduction to DSP                   
                                            
  ----------------------------------------------------------------------------------------------

**Relevant Projects: **

*Research Assistant, Applied Research Center at FIU* 2011 - 2012    
         

-   Western Hemisphere Information Exchange Program (WHIX);
    Environmental Security Research Projects, providing research and
    analysis on non-traditional security threats, and developing viable
    solutions involving natural resources and the environment. (Medical
    tent where for disasters or wars that can be used for surgery with
    the latest technology and is powered by solar, and wind energy).
          

**Multidisciplinary Aspects:**

-   Dual majored in Electrical and Computer Engineering.

-   Prior research and analysis experience on non-traditional security
    threats.

-   Familiarity with medical design.

-   Currently working in the Aerospace industry.

A.  [[]{#_Toc449618933 .anchor}]{#_Toc436922012 .anchor}*Patricia
    Sopena*

**Education:** Florida International University, Miami, FL

**Bachelor of Science in Electrical Engineering **

Concentrations: Integrated Nano-Technology & Bio-Engineering

GPA: 3.80/4.0 Graduation: Spring 2016

**Related Courses: **

  ------------------------------------- ----------------------------------------
  -   Power Systems I                   -   Communication Systems
                                        

  -   Electronics II                    -   Intro to DSP
                                        

  -   Integrated Circuits and Systems   -   Telecommunication Network Security
                                        
  ------------------------------------- ----------------------------------------

**Relevant Projects **

*Permanent Magnet Generator powered by a Micro Air Turbine Project*
Spring 2015

-   Lead a team of 5 to develop a permanent magnet generator (PMG) using
    an air-pressured turbine to power an LED.

<!-- -->

-   Our project consisted of two main components, a Micro Air Turbine
    and a Permanent Magnet Generator; both were entire build by the
    team.

*Finger Pulse Display Module (Photoplethysmographer)* Fall 2014

-   Participated with a team of biomedical engineering students building
    a finger pulse display module.

-   We used an LED light source and a phototransistor light receiver to
    create an electrical signal that indicates the pulse motion of blood
    through the fingertip with each heartbeat. This signal was processed
    to produce a display of that pulse on a 10-LED bar graph.

**Multidisciplinary Aspects:**

-   Electrical Engineer

-   Integrated Nanotechnology

-   Bio-Engineering

-   Proven leader while developing a permanent magnet generator with a
    micro air turbine

A.  [[]{#_Toc449618934 .anchor}]{#_Toc436922013 .anchor}*Ariel Romero*

**Education:** Florida International University, Miami, FL

**Bachelor of Science in Electrical Engineering**

Concentrations: Integrated Nano-Technology & Network Engineering

GPA: 3.13/4.0 Graduation: Spring 2016

**Related Courses: **

  ----------------------------------------------------------------
  -   Electrical Design in Buildings I   -   Logic Design
                                         
  -------------------------------------- -------------------------
  -   Electronics II                     -   Fields & Waves
                                         

  -   Power Systems I                    -   Integrated Circuits
                                         
  ----------------------------------------------------------------

**Relevant Projects: **

*Thermoelectric Flashlight* Spring 2015

-   Led a team of 4 to build a thermoelectric flashlight. Led the
    research to be able to get the correct parts like the DC-DC
    converter and Peltier tiles.

-   Was able to create enough heat from the palm of a hand to be able to
    boost more than 2 Volts to power a few LED’S.

**Multidisciplinary Aspects:**

-   Former Electrician

-   Electrical Engineer

-   Proven leader while developing thermoelectric flashlight, using the
    palm as a power source to heat power the flashlight

I.  [[]{#_Toc449618935 .anchor}]{#_Toc436922014 .anchor}BUDGET

Every development project needs to have an analysis of all expenses that
it could have during the concept design, testing, and production; in
other words a deep look into the budget. The budget includes every
single expense: charges for team members’ work, the use of labs, and the
cost of all components. The budget shouldn’t be obtained by intuition;
it has to be a result of the use of a project planning software. After
entering all the information in the software used (Open Workbench), we
obtained the estimated budget needed in order to bring our project to
live. The results are shown in Table 69.

![](media/image37.png){width="6.1830850831146105in"
height="7.966666666666667in"}

[[]{#_Toc449619046 .anchor}]{#_Toc436922620 .anchor}**Table 68 –
Proposed Budget**

![C:\\Users\\Ximena\\Downloads\\Cost chart
0.png](media/image38.png){width="3.849009186351706in"
height="8.523673447069116in"}

[]{#_Toc449619047 .anchor}Table 69 – Final Budget

The budget change in the price of some of the materials acquired for the
project. Originally the units we were going to use for the voice
recognition system was the Arduino Uno, but instead we used the Arduino
Mega 2560 which has a price difference of \$3.00 USD. Another unit that
changed was the Wi-Fi Module which originally was going to be an ESP8266
that had a cost of \$6.95 USD and we ended up using a Dragino Yun Shield
that costs \$60.00 USD. In our proposed budget we were going to spend
\$6,488.80 USD in total, but we ended up spending \$6,544.85 USD.

I.  []{#_Toc449618936 .anchor}RESULTS EVALUATION

In this section our team will reemphasize the different objectives to be
meet, the constraints to be satisfied, standards that our product will
comply with, and patents not to infringe. In addition we are going to
explain how these results will be evaluated at the end of our Senior
Design II.

**During Senior Design I we were promising the following: **

***Objectives***

The objective of this project is to create an affordable smart home
system using existing technology that will make life easier, not only
for those who use the application on a smart phone, but also to those
who are not so adept to technology. The system should be able to perform
some basic functions like turning on and off lights via voice command or
smart phone, among other objectives listed below.

The main objectives of the project are:

1.  The system should be able to control lights from a variety of areas.

2.  The system should be able to control the garage door.

3.  The system should be able to check the doors and windows status.

4.  The system should be able to make calls.

5.  The system should have a moderate grade of installation difficulty.

    ***Constraints***

Our smart home system has constraints that could create limitations on
it. However, those limitations will not make it impossible to build it
and are only challenges to overcome. The constraints that we believe we
are going to be encounter in the development of our system are listed
below.

The constraints of the project are:

1.  The system should be operable by voice, phone application and
    regular switches.

2.  The system should be small enough to fit in a closet or attic.

3.  The system should be one device.

4.  The system should not use too much data.

[]{#_Toc449618937 .anchor}*Standards Consideration *

[[]{#_Toc437294382 .anchor}]{#_Toc437281083 .anchor}These following
standards published by the IEEE will be our guides when developing our
system.

1.  IEEE Std. 1905.1a-2014

2.  IEEE Std. 1872-2015

3.  IEEE Std. C62.36-2014

***Patents not to infringe***

The following three patents are relevant and appear on the United States
Patent & Trademark Organization when ‘*home automation*’ is searched on
the site’s engine. The first patent, Automation Control of Electric
Devices, comes from Utah by W. E. Smith and J. R. Gist; followed by
Voice Control Device and Voice Control Method by Guo-Feng Zhang of
Shanghai China and finally, Actuator for Electric Blinds invented by
Masanori Kobayashi, Niigata, Japan***.***

A.  *Automation Control of Electronic Devices, US 9,152,139 B2*

B.  *Voice Control Device and Voice Control Method US 9,153,232 B2*

C.  *Actuator for Electric Blinds, US 4,773,464*

***\
***

***Specifications***

  **Device**                     **Specification**
  ------------------------------ ----------------------------------
  **Arduino**                    Uno
  Input Voltage                  120 Volt
  DC Operating voltage           5 Volt
  DC Current per I/O pin         20 mA
  **Voice Recognition module**   EasyVR Shield 3.0
  Mic                            Horn EM9745P-382
  Sensitivity                    -38dB (0dB=1V/Pa @1KHz)
  Distance                       3 Meters
  Sound output method            3.5mm jack, and/or 8 ohm speaker
  **Door Sensor **               Magnetic contact switch
  Rated current                  100 mA max
  Rated voltage                  200 VDC max
  Distance                       15mm max
  **Phone Shield **              FONA 800 Shield
  Band                           Quad-band 850/900/1800/1900MHz
  Input                          Electret Mic (Horn EM9745P-382)
  Output                         External 8Ω speaker
  **Unit case**                  JBH-4965-KO
  Tentative Dimensions           6” width x 8” Height x 4” Depth

[]{#_Toc449619048 .anchor}Table 70

Senior Design II will be a period of construction and engineering for
our team. We are going to be working in constant contact with our client
and experienced engineers to assure that our project meet all the
requirements mentioned before. Besides that, at the end of the semester
we will meet with our client in order to test and analyze our product.
Our team will measure the different inputs and outputs in order to
compare them with the initial promises. Finally we are planning to meet
with different engineers to discuss the accomplishment of our standards
and the patents that were promised not to infringe.

**During Senior Design II we accomplish the following: **

***Objectives***

The objective of this project was to create an affordable smart home
system using existing technology that will make life easier, not only
for those who use the application on a smart phone, but also to those
who are not so adept to technology. The system is able to perform some
basic functions like turning on and off lights via voice command or
smart phone, among other objectives listed below. All of these
objectives have been accomplish.

The main objectives of the project are:

1.  The system is able to control lights from a variety of areas.

2.  The system is able to control the garage door.

3.  The system is able to check the doors and windows status.

4.  The system is able to make calls.

5.  The system has a moderate grade of installation difficulty.

    ***Constraints***

Our smart home system has constraints that created limitations on it.
However, those limitations did not make it impossible to build it and
were only challenges to overcome. The constraints that we overcame in
the development of our system are listed below.

The constraints of the project are:

1.  The system needed operable by voice, phone application and regular
    switches.

2.  The system needed to be small enough to fit in a closet or attic.

3.  The system needed to be one device.

4.  The system does not use too much data.

[]{#_Toc449618938 .anchor}*Standards Consideration *

These following standards published by the IEEE were our guides when
developing our system.

1.  IEEE Std. 1905.1a-2014

2.  IEEE Std. 1872-2015

3.  IEEE Std. C62.36-2014

***Patents not to infringe***

The following three patents are relevant and appear on the United States
Patent & Trademark Organization when ‘*home automation*’ is searched on
the site’s engine. The first patent, Automation Control of Electric
Devices, comes from Utah by W. E. Smith and J. R. Gist; followed by
Voice Control Device and Voice Control Method by Guo-Feng Zhang of
Shanghai China and finally, Actuator for Electric Blinds invented by
Masanori Kobayashi, Niigata, Japan***.***

A.  *Automation Control of Electronic Devices, US 9,152,139 B2*

B.  *Voice Control Device and Voice Control Method US 9,153,232 B2*

C.  *Actuator for Electric Blinds, US 4,773,464*

***\
***

***Specifications***

  **Device**                     **Specification**
  ------------------------------ ----------------------------------
  **Arduino**                    Mega 2560
  Input Voltage                  120 Volt
  DC Operating voltage           5 Volt
  DC Current per I/O pin         20 mA
  **Voice Recognition module**   EasyVR Shield 3.0
  Mic                            Horn EM9745P-382
  Sensitivity                    -38dB (0dB=1V/Pa @1KHz)
  Distance                       3 Meters
  Sound output method            3.5mm jack, and/or 8 ohm speaker
  **Door Sensor **               Magnetic contact switch
  Rated current                  100 mA max
  Rated voltage                  200 VDC max
  Distance                       15mm max
  **Phone Shield **              FONA 800 Shield
  Band                           Quad-band 850/900/1800/1900MHz
  Input                          Electret Mic (Horn EM9745P-382)
  Output                         External 8Ω speaker
  **Unit case**                  JBH-4958-KO
  Tentative Dimensions           8” width x 10” Height x 4” Depth

[]{#_Toc449619049 .anchor}Table 71

Senior Design II was a period of construction and engineering for our
team. We worked in constant contact with our client to assure that our
project meet all the requirements mentioned before. Before the final
presentation we met our client to present the final product, and our
client showed great satisfaction. Now that the project is done, our team
can state that the objectives of the project were met even though there
were some changes on the units that we were going to originally use to
build the system.

I.  []{#_Toc449618939 .anchor}LIFE LONG LEARNING

Life Long Learning is a section in which we will talk about our
experiences in this Senior Design project. Also, we are going to explain
our plan to keep us active in this topic, as well as the required
actions to maintain our product in the market.

This Senior Design project has been a great Life Long Learning
experience for each of us in every aspect. We worked together and
individually in different tasks and phases of our project that makes us
gain a lot of experience working in a time schedule. In addition, for
most of us it was the first time designing for a client where we had to
meet certain objectives and constrains. In this semester we also used
planning tools like Open Workbench to create a work plan scenario where
we define our project’s phases, tasks and milestones. Design within a
budged was another experience, as well as designing around patents to
not infringe and manufacturability.

To keep ourselves current in the topic, we will have to continue
studying and improve our knowledge. Knowing that technology advances
every day and we cannot be left behind, especially as engineers. If we
keep ourselves informed of the advances in technology we will be able to
not only improve our design but this will also help us to be qualified
for better engineering jobs.

For a project to be kept in the market, it needs to be improved in
technology and also be competitive with prices. The system, which in
this case is a Smart Home System with Voice Commands, should be able to
perform more tasks than the original design, with good accuracy keeping
the system simple and manageable to every user; having in mind that the
original idea was to make the system approachable to those who are not
so acquainted with technology. Also the materials use for the system
must always be of good quality, making the system durable for many
years, since it need to be install by a professional.

[]{#_Toc437294384 .anchor}To conclude, our Senior Design project was a
great experience in our life. It gives us the tools and skills to
perform better jobs as engineers. In this topic, we express our idea of
continuing studying in order be able to understand and work with new
technologies. Finally, we analyzed the different aspects that will keep
our product in the market.

I.  []{#_Toc449618940 .anchor}CONCLUSION

Eight months ago our team met to come up with an innovative idea for a
project, which needed to be good enough to draw the attention of the
potential users in order to become feasible and successful. The idea of
our smart home system was initially intended to facilitate and to make
the lives of the disable and elderly easier with the possibility of
control of some home utilities as lights or emergency call with just
voice commands. Since that day has been a long way with several changes
of the initial idea.

The project remains with the same foundations, a smart home system with
voice commands; but after we interviewed to our mentor, got the results
of the survey and started our research, we began modifying some
characteristics of the initial idea. Now, users, besides the possibility
of controlling lights, garage doors, and making phone calls (not just
emergency calls), among others functionalities with voice commands, they
are going to be able to operate the system and do the same actions
through a smart phone application. By adding this to the original idea,
the intended users also are extended to everyone since nowadays the love
for technology is widespread to all ages. From the survey we could
realize that the idea of having a smart home has been in the mind of
many people for a long time with much demand in the market. Therefore,
the social impact has never been a major concern in our way. Of course,
there are people that usually are reluctant to change and they won’t
probably love the system, or at the very least not initially, but we
believe that with the appropriate information and education of the
system features, they will eventually realize all the benefits and
accept of our smart home system. “Alfred” is not just a system that
people are going to accept; it is the home system that people are
waiting for; it could be the future of many technology lovers’ homes
around the world.

After all researches and the advance work in the actual system, we have
been able to put in practice and demonstrate knowledge that we have
acquired in all this years of study, beyond the theory. This project has
also showed us how to work with many sources, taking in consideration
not only our ideas but also the most feasible option. Now that we are at
the end of the project cycle we not only are more prepare engineers, but
also comprehensive professionals since we took care of all the aspect of
the project, not only the technical; we have been involve with
everything related to a product that its purpose is to be sold. Finally
we are confident that we have selected the ideal project for us, it has
contributed to our formation as more prepare engineers, and we strongly
believe that our objectives were met.

[]{#_Toc449618941 .anchor}APPENDIX A

  -----------------------------------------------------------------------------
  **TEAM CONTRACT**
  
  As a member of the
  
    **Team \#**    20          **Team Name**    The Owls
    -------------- ----------- ---------------- ----------
    **Semester**   Fall 2015   **Class Time**   12:30 PM
  
  We hereby agree to the following conditions:
  
  1\. I will demonstrate great interest to participate in class, share my
  ideas and discuss them openly with other team members.
  
  > 2\. I agree to follow rules and guidelines that have been attained and
  > established by the team in a “majority of votes” decision.
  >
  > 3\. I am solely responsible for any assigned material by the team. I will
  > submit my work on time and in good shape.
  >
  > 4\. In case of an unforeseen absence it is my responsibility to promptly
  > contact my team members and learn of any new material. An announced and
  > anticipated absence is greatly appreciated.
  >
  > 5\. My performance is regularly reviewed and openly shared by the team.
  > In case of a negative performance (decided by majority of votes) I will
  > be issued a written warning.
  >
  > 6\. The team holds the right to release me after the third (3^rd^)
  > warning (decided by majority of votes), I am thereof entitled to file an
  > appeal to the class professor and request arbitration.
  >
  > 7\. Reason(s) to issue a warning may be but are not restricted by the
  > following reasons:
  
  1.  Unable to submit an assignment on time.
  
  2.  Lack of team participation.
  
  3.  Obscene and improper conduct.
  
  <!-- -->
  
  1.  I am not allowed to abandon my team under any circumstances.
  
    **Team Leader Name**   **Signature**   **Date**     **Roles**
    ---------------------- --------------- ------------ ---------------------
    Ariel Romero                           10/15/2015   Over all designer
    **Team Member Name**   **Signature**   **Date**     **Roles**
    Roy Lara                               10/15/2015   Programmer
    Angela Layne                           10/15/2015   Hand on developer
    Patricia Sopena                        10/15/2015   Electronic designer
  

  []{#_Toc449618942 .anchor}APPENDIX B
  
  **IP CONTRACT**
  
  We hereby agree to the following conditions:
  
  > 1\. Roy Lara, Angela Layne, Patricia Sopena, Ariel Romero are considered
  > co-inventors, to the extent that each team member has its own
  > responsibilities in the creation and assembly of the project.
  >
  > 2\. Dr. Gustavo Roig is consider the mentor and client of team number 20.
  >
  > 3\. Roy Lara is considered the spokesmen of team number 20.
  >
  > 4\. Profit will be split on the basis of work contributed to the project.
  >
  > 5\. We agree that the intellectual property decision making will be based
  > on the knowledge and strengths of each member, knowing that every
  > decision needs to be made as a group to shape the process of the
  > project. Having into account that each member needs to be actively
  > participation in the process, otherwise the member will not be entitled
  > to participate in the decision making process and will no longer be
  > considered a co-inventor, even if some of the ideas given at some point
  > in the project are being used in the final product.

    **Team Leader Name**   **Signature**   **Date**     **Roles**
    ---------------------- --------------- ------------ ---------------------
    Ariel Romero                           10/15/2015   Over all designer
    **Team Member Name**   **Signature**   **Date**     **Roles**
    Roy Lara                               10/15/2015   Programmer
    Angela Layne                           10/15/2015   Hand on developer
    Patricia Sopena                        10/15/2015   Electronic designer
  
  -----------------------------------------------------------------------------

[]{#_Toc449618943 .anchor}APPENDIX C

**Survey**

1.  Do you watch comic book movies? If so, do you like the idea of a
    Smart home system like JARVIS in the Iron Man movies?

> Yes No

2\. Do you like to control the lights of your house with your

> Voice Smartphone Both
>
> 3\. Which rooms (lights) do you like to control with the smart home
> system
>
> Bedroom Living Room Kitchen Bathroom All
>
> No see it? Add it \_\_\_\_\_\_\_\_\_\_
>
> 4\. Do you use dimmers in these rooms or regular switches?
>
> Dimmers Switches
>
> 5\. If the system were able to make phone calls, how often would you use
> this service?
>
> Always Sometimes Rarely Never
>
> 6\. What other things from your house would you like to control with the
> smart home system besides the lights.
>
> Example: Garage door
>
> 7\. How much are you willing to pay for a smart home system that allows
> you to control through your smartphone, tablet and through voice
> recognition; the lights of your house and to make calls from your house
> phone in case of emergencies and to your favorite contacts? Have in mind
> that systems like this from INSTEON or Apple can cost around \$500.
>
> \$150.00 \$300.00 \$400.00
>
> 8\. If the system can control other things in your house would you pay
> more for the system?
>
> Yes No
>
> 9\. Would you be willing to contact a licensed electrician if you don’t
> want to install the system?
>
> Yes No No, I can do it myself

**Survey Results:**

> 1\. Yes 92.31 %

No 7.69 %

2\. Voice 23.08 %

Smartphone 7.69 %

Both 69.23 %

3\. Bedroom 92.31 %

Living room 76.92 %

Kitchen 69.23 %

Bathroom 53.85 %

Others 23.08 % (Yard, Garage, Outside lights)

4\. Dimmers 23.08 %

Switches 76.92 %

5\. Always 30.77 %

Sometimes 30.77 %

Rarely 38.46 %

Never 0 %

6\. Heater, Washer machine, Air conditioner, Blinds, Alarm, Audio-video
doorbell, Doors, Garage door and light, Patio lights. Others electronics
devices that turn them off when I am not at home.

7\. \$150.00 23.08 %

\$300.00 61.54 %

\$400.00 15.38 %

8\. Yes 100 %

No 0 %

9\. Yes 100 %

No, 0 %

No, I can do it myself 0%

[]{#_Toc449618944 .anchor}BIBLIOGRAPHY

\[1\] Kickstarter, 'Domus Affordable Smart Home Automation Solution',
2015. \[Online\]. Available:
https://www.kickstarter.com/projects/smartgears/domus/description.
\[Accessed: 02- Nov- 2015\].

\[2\]“As Seen On.” Web. 7 Oct. 2015
&lt;https://www.kickstarter.com/projects/smartgears/domus/description&gt;

\[3\] Kickstarter, 'The Future of Smart Homes - B.One', 2015.
\[Online\]. Available:
https://www.kickstarter.com/projects/b-one/the-future-of-smart-homes-bone/description.
\[Accessed: 02- Nov- 2015\].

\[4\] Voccalight.com, 'VOCCA Smart Light', 2015. \[Online\]. Available:
http://voccalight.com/. \[Accessed: 02- Nov- 2015\].

\[5\] Athom.com, 'Homey, by Athom | The team', 2015. \[Online\].
Available: https://www.athom.com/the-team/. \[Accessed: 02- Nov- 2015\].

\[6\] NEEO, 'Home', 2015. \[Online\]. Available: https://neeo.com/.
\[Accessed: 02- Nov- 2015\].

\[7\] Smith, W. Eric, and James R. Gist. Automation Control of
Electronic Devices.

Control4 Corporations, Salt Lake City UT (US), assignee. Patent 9125139.
6 Oct. 2015. Print.

\[8\]Zhang, Guo-Feng. Voice Control Device and Voice Control Method. VIA
Technologies, Inc. (New Taipei, TW), assignee. Patent 9,153,232. 6 Oct.
2015. Print.

\[9\]Masanori, Kobayashi;. Actuator for Electric Blinds. Kuron
Corporation (JP), assignee. Patent 4,773,464. 27 Sept. 1988. Print.

\[10\] ALFRED. (APPLICANT) Alfred Labs Inc. CORPORATION DELAWARE 814
Mission Street, 6F San Francisco CALIFORNIA 94103, assignee. Patent
86599812. 16 Apr. 2015. Print.

\[11\] Wto.org, 'WTO | About the organization', 2015. \[Online\].
Available: https://www.wto.org/english/thewto\_e/thewto\_e.htm.
\[Accessed: 23- Nov- 2015\]

\[12\] As seen on
https://www.wto.org/english/thewto\_e/whatis\_e/whatis\_e.htm

\[13\] As seen on http://um.dk/en/tradecouncil/barriers/what-is/

\[14\] As seen on Npd-solutions.com, 'DESIGN FOR MANUFACTURABILITY /
ASSEMBLY GUIDELINES', 2015. \[Online\]. Available:
http://www.npd-solutions.com/dfmguidelines.html. \[Accessed: 07- Dec-
2015\].

Table \[1\] Amazon.com, 'Lutron P-BDG-PKG2W Caseta Wireless Smart
Lighting In-Wall Dimmer Kit, HomeKit-enabled - - Amazon.com', 2015.
\[Online\]. Available:
http://www.amazon.com/Lutron-P-BDG-PKG2W-Wireless-Lighting-HomeKit-enabled/dp/B00XPW6824/ref=sr\_1\_5?ie=UTF8&qid=1444770565&sr=8-5&keywords=apple+home+automation+kit.
\[Accessed: 15- Oct- 2015\]. insteon.com, 'Products', 2015. \[Online\].
Available: http://www.insteon.com/products/. \[Accessed: 15- Oct-
2015\].

[]{#_Toc449618945 .anchor}SIGNING PAGE

  Name              PID       E-mail Address       Phone Number
  ----------------- --------- -------------------- -----------------
  Roy Lara          4267659   <Rlara018@fiu.edu>   \(305) 283-3697
  Angela Layne      1886523   <Alayn001@fiu.edu>   \(786) 366-3399
  Ariel Romero      4954459   <Arome089@fiu.edu>   \(305) 619-4849
  Patricia Sopena   5319793   <Psope002@fiu.edu>   \(786) 290-3250

                 PRINT              SIGNATURE   DATE
  -------------- ------------------ ----------- -----------
  Group Leader   Ariel Romero                   4/29/2016
  Team Member    Roy Lara                       4/29/2016
  Team Member    Angela Layne                   4/29/2016
  Team Member    Patricia Sopena                4/29/2016
                                                
  Mentor         Dr. Gustavo Roig               4/29/2016
                                                


