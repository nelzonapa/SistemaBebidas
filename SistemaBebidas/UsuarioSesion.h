#pragma once
#include <string>

class UsuarioSesion{ //Singleton Pattern
private:
    int id;
    std::string nombres;
    std::string apellidos;
    std::string email;
    std::string usuario;
    std::string password;
    std::string permiso;
protected:
    UsuarioSesion() = default;
public:
    static UsuarioSesion& get_instance() {
        static UsuarioSesion instance;
        return instance;
    }
    //UsuarioSesion();
    //UsuarioSesion(int, std::string, std::string, std::string, std::string, std::string, std::string);
    void setDatosUsuarioSingleton(int id, std::string nombres, std::string apellidos, std::string email, std::string usuario, std::string password, std::string permiso) {
        this->id = id;
        this->nombres = nombres;
        this->apellidos = apellidos;
        this->email = email;
        this->usuario = usuario;
        this->password = password;
        this->permiso = permiso;
    }
    int getId() const;
    std::string getNombres() const;
    std::string getApellidos() const;
    std::string getEmail() const;
    std::string getUsuario() const;
    std::string getPassword() const;
    std::string getPermiso() const;
};
