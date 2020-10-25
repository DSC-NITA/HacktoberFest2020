# Auto-Email Script Using SMTP Library

This file uses CSV file provided via path and takes its values to send emails to the receivers.

### Steps to Run:

1. Head to the following URL:
```
https://myaccount.google.com/lesssecureapps
```
and turn On **Allow Less Secure Apps**

2. Prepare CSV file of receivers in which the first column contains **Emails** & Second contains **Names** of the receiver.

3. Edit Email address, password, subject and the body.

4. Check Whether python is installed or not by following command
```
python -V
```

5. Run the script using Python
```
python email-script.py
```