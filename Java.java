public class Cuenta {
 
    //Atributos
    private String titular;
    private double cantidad;
 
    //Constructores
    public Cuenta(String titular) {
        this(titular, 0); //Sobrecarga
    }
 
    public Cuenta(String titular, double cantidad) {
        this.titular = titular;
        //Si la cantidad es menor que cero, lo ponemos a cero
        if (cantidad < 0) {
            this.cantidad = 0;
        } else {
            this.cantidad = cantidad;
        }
    }
 
    //Metodos
    public String getTitular() {
        return titular;
    }
 
    public void setTitular(String titular) {
        this.titular = titular;
    }
 
    public double getCantidad() {
        return cantidad;
    }
 
    public void setCantidad(double cantidad) {
        this.cantidad = cantidad;
    }
 
    /**
     * Ingresa dinero en la cuenta, solo si es positivo la cantidad
     */
    public void ingresar(double cantidad) {
        if(cantidad > 0){
            this.cantidad += cantidad;   
        }
    }
 
    /**
     * Retira una cantidad en la cuenta, si se quedara en negativo se quedaria en cero
     */
    public void retirar(double cantidad) {
        if (this.cantidad - cantidad < 0) {
            this.cantidad = 0;
        } else {
            this.cantidad -= cantidad;
        }
    }
 
    /**
     * Devuelve el estado del objeto
     */

    public String toString() {
        return "El titular " + titular + " tiene " + cantidad + " pesos en la cuenta";
    }
 
}
