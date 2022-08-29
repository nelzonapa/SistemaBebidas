#pragma once
#include "AccesoSubject.h"
#include "RealAccesoSubject.h"
#include <string>
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace msclr::interop;

class AccesoProxy : public AccesoSubject
{
private:
    bool Acceso;
	RealAccesoSubject* real_subject_;
    
public:
    AccesoProxy(RealAccesoSubject* real_subject, String^ usuarioInput, String^ passwordInput) {
        this->real_subject_ = real_subject;
        this->Acceso = false;
        if (usuarioInput->Length != 0 && passwordInput->Length != 0) {
            this->Acceso = true;
        }
    }
    ~AccesoProxy() {
        //delete real_subject_;
    }
    bool SolicitudAcceso() override {
        if ((this->Acceso == true) && (this->real_subject_->SolicitudAcceso() == true)) {
            return true;
        }
        else {
            return false;
        }
    }
};


