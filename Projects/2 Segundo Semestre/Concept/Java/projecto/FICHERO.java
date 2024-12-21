package projecto;

import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;

import javax.swing.JOptionPane;
import javax.swing.JScrollPane;
import javax.swing.JTable;
import javax.swing.table.DefaultTableModel;

public class FICHERO
{
    
    public static void crear_fichero(int indice_fichero)
    {
       
        
        JScrollPane jstabla_listado_factura =  FACTURA.jstabla_listado_factura;
        JTable tabla_listado_factura = FACTURA.tabla_listado_factura;
        DefaultTableModel modelo_listado_factura = FACTURA.modelo_listado_factura;

        ArrayList<String>  lista_telefono = FACTURA.lista_telefono;
        ArrayList<String>  lista_nombre = FACTURA.lista_nombre;
        ArrayList<String>  lista_direccion = FACTURA.lista_direccion;
        ArrayList<String>  lista_total_factura = FACTURA.lista_total_factura;
        ArrayList<String>  lista_iva = FACTURA.lista_iva;
        ArrayList<String>  lista_subtotal = FACTURA.lista_subtotal;
        
        
        ArrayList<ArrayList<String>> lista_codigo_producto = FACTURA.lista_codigo_producto;
        ArrayList<ArrayList<String>> lista_nombre_producto = FACTURA.lista_nombre_producto;
        ArrayList<ArrayList<String>> lista_cantidad_producto = FACTURA.lista_cantidad_producto;
        ArrayList<ArrayList<String>> lista_valor_producto = FACTURA.lista_valor_producto;
        ArrayList<ArrayList<String>> lista_subtotal_producto = FACTURA.lista_subtotal_producto;
        ArrayList<ArrayList<String>> lista_descuento_producto = FACTURA.lista_descuento_producto;
        
        //   Generamos un archivo .txt
        try 
        {
            
            String numero_impresion = (String) tabla_listado_factura.getValueAt(indice_fichero,0);
            //int indice_de_lista=0;
            // Generamos un archivo .txt
            FileWriter fichero = new FileWriter("D:\\Escritorio\\Facturas\\Factura_"+numero_impresion +".txt");
            fichero.write("-----------------------------------------------------------------------------------------------------------------------------\n");
            fichero.write("                                        EMPRESA XD\n");
            fichero.write("                                      NIC. 1234567890\n");
            fichero.write("                                       CALLE UNI-IES\n");
            fichero.write("                                    TELEFONO: 555-55-55\n");
            fichero.write("                                    FACTURA DE VENTA N°: " + numero_impresion + "\n");
            fichero.write("-----------------------------------------------------------------------------------------------------------------------------\n");
            fichero.write("Cliente: " + lista_nombre.get(indice_fichero) + "\n"); 
            fichero.write("Direccion:" + lista_direccion.get(indice_fichero) + "\n");
            fichero.write("Telefono: "  + lista_telefono.get(indice_fichero) +"\n");
            fichero.write("-----------------------------------------------------------------------------------------------------------------------------\n");
            fichero.write("Codigo \t- \tNombre del producto \t- \tCantidad \t- \tValor \t- \tDescuento \t- \tSubtotal"+ "\n");
            // + "\"" + "arroz" + "\"" + " Cantidad: " + "\"" + "2" + "\"" + " Valor:" + "\"" + "102" + "\"" + " Subtotal:" + "\"" + "10221" + "\""
            
            for (int iterable=0;iterable<lista_codigo_producto.get(indice_fichero).size();iterable++) 
            {
                fichero.write(lista_codigo_producto.get(indice_fichero).get(iterable) +"\t\t\t");
                fichero.write(lista_nombre_producto.get(indice_fichero).get(iterable) +"\t\t\t");
                fichero.write(lista_cantidad_producto.get(indice_fichero).get(iterable) +"\t\t\t");
                fichero.write(lista_valor_producto.get(indice_fichero).get(iterable) +"\t\t\t");
                fichero.write(lista_descuento_producto.get(indice_fichero).get(iterable) +"\t\t\t");
                fichero.write(lista_subtotal_producto.get(indice_fichero).get(iterable) +"\n");
                //System.out.println(lista_nombre_producto.get(indice_fichero).get(iterable)); 

                /*
                lista_codigo_producto
                lista_nombre_producto
                lista_cantidad_producto
                lista_valor_producto
                lista_subtotal_producto
                lista_descuento_producto
                    */
                
            }
            // System.out.println(lista.get(indice_fichero).size());
            // lista donde almacenamos los productos
            // [0] Nombre producto
            // [1] Cantidad
            // [2] Valor
            // [3] Subtotal
            // Total 4 indices 
            fichero.write("-----------------------------------------------------------------------------------------------------------------------------\n");
            fichero.write("SUBTOTAL : " + lista_subtotal.get(indice_fichero) +"\n");
            fichero.write("IVA 19%: " + lista_iva.get(indice_fichero) + "\n");
            fichero.write("TOTAL: " + lista_total_factura.get(indice_fichero) + "\n");
            fichero.write("FECHA: " + FACTURA.fecha_del_sistema + "\n");
            fichero.close();
            
            //lista_documento.add(label_textfield_documento.getText());
                
            /*FACTURA.mensaje("Se creo al archivo");*/
            JOptionPane.showMessageDialog(null,"Se creo al archivo");
        } 
        catch (IOException e) 
        {
            JOptionPane.showMessageDialog(null,"Error al crear la factura");
        }
        
        
     
    }
    public FICHERO()
    {
        

    }
    public static void main(String[] args)
    {

    }
}
