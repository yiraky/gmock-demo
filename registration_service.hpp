#pragma once

#include <string>

#include "email_service.hpp"

class RegistrationService {
 public:
  explicit RegistrationService(EmailService* service);

  bool registerUser(const std::string& name, const std::string& email);

 private:
  EmailService* _service;
};
