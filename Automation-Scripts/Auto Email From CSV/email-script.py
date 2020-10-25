import smtplib
import csv
import os

with smtplib.SMTP('smtp.gmail.com', 587) as smtp:

    smtp.ehlo()

    smtp.starttls()
    smtp.ehlo()

    smtp.login("<SENDER'S EMAIL>", "SENDER'S PASSWORD>")

    mail_from = "<SENDER'S EMAIL>""

    subject = '<SUBJECT OF THE EMAIL>'

    c = 0

    with open('status_22.csv') as csv_file:  # Replace CSV file with your own

        csv_reader = csv.reader(csv_file)

        for row in csv_reader:
            c += 1

            try:

                # First Column contains Emails of the Receiver
                mail_to = [row[0]]
                # Second Column contains Names of the Receiver
                receiver = row[1]

                print(mail_to, receiver)

                # Dynamically Add your Receiver's name here and simmilarly other variables if required
                body1 = f"Hello {receiver}, \n \n"

                body2 = "Add your Email body here"

                # + body3 + body4 + body5 + body6 + body7 + body8 + body9 + body10 + body14 + body15 + body16 +body17
                body = body1 + body2

                # Add your body and contents and make final body

                # Complete Email creation using components
                msg = f"Subject:{subject}\n\n{body}"

                smtp.sendmail(mail_from, mail_to, msg)

            except:
                print("ERROR")
                break

    print(c)

    smtp.close()
