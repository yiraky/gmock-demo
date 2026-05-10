#include "registration_service.hpp"

RegistrationService::RegistrationService(EmailService* service) : _service(service) {
}

bool RegistrationService::registerUser(const std::string& name, const std::string& email) {
  return _service->sendEmail(email, "Welcome", "Hello " + name);
}
