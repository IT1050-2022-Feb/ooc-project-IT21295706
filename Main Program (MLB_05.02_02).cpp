// *************Main Program************

#include <iostream>
#include "GuestUser.h"
#include "RegisteredUser.h"
#include "Payment.h"
#include "Cart.h"
#include "Card.h"
#include "Cash.h"
#include "Form.h"
#include "Feedback.h"
#include "Submission.h"
int main ()
{
//Guest User Class Object
GuestUser* guestuser;

//Registered User Class Object
RegisteredUser* registereduser;

//Payment Class Object
Payment* payment;

//Cart Class Object
Cart* cart;

//Card Class Object
Card* card;

//Cash Class Object
Cash* cash;

//Form Class Object
Form* form;

//Feedback Class Object
Feedback* feedback;

//Submission Class Object
Submission* submission;

//----------Method Calling------------------
guestuser->registration();
guestuser->cancelRegistration();

registereduser->login();
registereduser->logout();

payment->checkDetails();
payment->confirmDetails();

cart->addItems();
cart->removeItems();

card->addDetails();
card->removeDetails();

cash->displayCash();
cash->remove();

form->addForms();
form->removeForms();

feedback->addFeedback();
feedback->removeFeedback();

submission->addSubmission();
submission->removeSubmission()
}

