#ifndef MENUMEDICAMENTO_H
#define MENUMEDICAMENTO_H

#include <iostream>
#include <string>

#include "archivoMedicamento.h"

class menuMedicamento {
    private:
        std::string opc;
        archivoMedicamento miArchivoMedicamento;

    public:
        menuMedicamento();
        ~menuMedicamento();

        void setOpc(std::string valorOpc);
        std::string getOpc();

        void menu();
        void agregar();
        void eliminar();
        void buscar();
        void importarArchivo();
};

#endif // MENUMEDICAMENTO_H