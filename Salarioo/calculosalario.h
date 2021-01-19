#ifndef CALCULOSALARIO_H
#define CALCULOSALARIO_H

#include <QObject>

class CalculoSalario : public QObject
{
    Q_OBJECT
    Q_PROPERTY(float salario READ salario)
    Q_PROPERTY(float descuento READ descuento)
    Q_PROPERTY(float salarioNeto READ salarioNeto)
private:
    //VARIABLES MIEMBRO
    int m_horas;
    QString m_nombre;
    char m_jornada;
    float m_salario;
    float m_descuento;
    float m_salarioNeto;

    //CONSTANTES
    float const VALOR_HORA_MATUTINO = 5.15;
    float const VALOR_HORA_VESPERTINO = 8.50;
    float const VALOR_HORA_NOCTURNO = 12.65;
    float const PORCENTAJE_DESCUENTO = 9.5;
public:
    explicit CalculoSalario(QObject *parent = nullptr);
    CalculoSalario(QString nombre = " ",
                   int horas = 0,
                   char jornada = 'v');
    void calcular();
    float salario() const;

    float descuento() const;

    float salarioNeto() const;

    QString nombre() const;

signals:

};

#endif // CALCULOSALARIO_H
