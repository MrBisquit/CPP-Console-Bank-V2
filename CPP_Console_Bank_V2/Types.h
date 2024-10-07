#pragma once

#include <vector>
#include <string>

#ifndef TYPES_H
#define TYPES_H

static class Types {
public:
	class LoanPayment {
		unsigned __int64 amount = 0;
		unsigned __int16 month = 0; // The month it was paid on
	};
	class Loan {
	public:
		unsigned __int64 amount = 0;
		unsigned __int16 months = 0; // I highly doubt you'll ever have a loan over 1,200 months (100 years)
		unsigned __int64 paid = 0;
		unsigned __int64 due = 0;
		unsigned __int16 current_month = 0;

		std::vector<LoanPayment> payments = std::vector<LoanPayment>();
	};
	class User {
	public:
		unsigned __int64 id = 0;
		std::string password;
		unsigned __int64 balance = 0;
		std::vector<Loan> loans = std::vector<Loan>();
	};

	// Alerts
	enum AlertCriticality {
		Low,
		Medium,
		High,
		Critical
	};
	enum AlertType {
		PaymentDue
	};
	class Alert {
	public:
		unsigned __int64 id;
		Types::AlertType type;
		Types::AlertCriticality criticality;
		Types::User user;
	};

	// Bank info
	class Bank {
	public:
		std::string name;
		unsigned int total_bank = 0;
		std::vector<Alert> alerts = std::vector<Alert>();
	};
};

#endif TYPES_H