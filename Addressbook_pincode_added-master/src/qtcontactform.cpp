#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        pincodeField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit())
{

     addRow("<bgcolor = 'pink'></bgcolor><font color = 'blue'>First Name</font><font color ='red'> * </font>", firstNameField);
    addRow("Last Name", lastNameField);
     addRow("<font color = 'blue'>Address</font><font color ='red'>*</font>", addressField);
     addRow("Pincode", pincodeField);
    addRow("Phone Number", phoneNumberField);
    addRow("<font color = 'blue' >Email</font><font color='red'>*</font>", emailField);
}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    pincodeField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
}
