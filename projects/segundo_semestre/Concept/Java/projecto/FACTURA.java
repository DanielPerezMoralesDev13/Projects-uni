package projecto;

import java.awt.Color;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.text.DecimalFormat;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.ArrayList;

import javax.swing.BorderFactory;
import javax.swing.ButtonGroup;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JDialog;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTable;
import javax.swing.JTextField;
import javax.swing.table.DefaultTableModel;

public class FACTURA extends JFrame implements ActionListener
{   
    LIBRERIA libreria = new LIBRERIA();
    FICHERO fichero = new FICHERO();
    String monto;
    DecimalFormat formatoNum = new DecimalFormat("##0.00"); // patron para decimal
    JLabel label_titulo,label_direccion,label_documento,label_telefono,label_departamento,lab1,lab2,label_nombre,label_numero_factura,label_fecha,label_numero_de_factura_contador,label_fecha_hoy,jlabel_subtotal,jlabel_subtotal_numero,jlabel_descuento,jlabel_iva,jlabel_iva_numero,total_facutura,total_factura_numero,label_total_valor_descontado,label_total_valor_descontado_numero;
    JLabel label_codigo_producto;
    JTextField textfield_codigo_producto;
    JLabel label_dialog_nombre,label_dialog_cantidad,label_dialog_valor,label_añadir_producto_dialog;
    JLabel label_realizada_con_exito;
    JLabel label_listado_factura_dialog,label_seleccione_dialog;
    JButton  button_finalizar_factura,button_limpiar,button_eliminar_factura,button_añadir_factura,button_lista_factura;
    JButton button_dialog_agregar,button_dialog_cerrar,button_dialog_aceptar;
    JButton button_listado_de_facturas_eliminar,button_listado_de_facturas_imprimir;
    JTextField textfield_label_dialog_nombre,textfield_label_dialog_cantidad,textfield_label_dialog_valor;
    JTextField label_textfield_direccion,label_textfield_documento,label_textfield_nombre,label_textfield_telefono,jlabel_textfield_descuento_numero;
    ButtonGroup buttongroup;
    JCheckBox checkbox_button_descuento;
    
    public static LocalDate fecha_actual = LocalDate.now(); // devuelve la fecha actual del sistema.
    public static DateTimeFormatter formatear = DateTimeFormatter.ofPattern("dd/MM/yyyy"); // que permite formatear la fecha
    public static String fecha_del_sistema = fecha_actual.format(formatear);
    
    //JComboBox buttoncombobox;
    public static DefaultTableModel modelo,modelo_listado_factura;
    public static JTable tabla,tabla_listado_factura;
    public static JScrollPane jstabla,jstabla_listado_factura;
    JPanel jpanel_color_celeste_superior,jpanel_color_celeste_inferior,jpanel_datos_del_cliente,jpanel_datos_de_factura,jpanel_listado_de_facturas_añadir_eliminar;
    JPanel jpanel_color_celeste_superior_dialog,jpanel_color_celeste_inferior_dialog;
    JPanel jpanel_lista_factura_color_celeste_superior_dialog,jpanel_lista_factura_color_celeste_inferior_dialog;
    JPanel contenidoDialog_lista_de_factura,contenidoDialog_lista_de_factura_eliminar_e_imprimir;
    JDialog dialog_añadir_producto,dialog_factura_realizada_con_exito,dialog_lista_de_factura;
    JPanel contenidoDialog;
    int numero_factura = 1;
    int numero_factura_dato = 1;  // Esta variable es la que vamos a utilizar como variable controladora
    double numero_subtotal = 0.0,numero_iva = 0.0,numero_total_descontado=0.0,numero_total_factura=0.0;
    double descuento;
    double descuento_dato;
    boolean verificar_radio_button = false;
    // lista donde almacenamos los productos
    // [0] codigo producto
    // [1] Nombre producto
    // [2] Cantidad
    // [3] Valor
    // [4] Subtotal
    // Total 4 indices
    public static ArrayList<ArrayList<String>> lista_codigo_producto = new ArrayList<ArrayList<String>>();
    public static ArrayList<ArrayList<String>> lista_nombre_producto = new ArrayList<ArrayList<String>>();
    public static ArrayList<ArrayList<String>> lista_cantidad_producto = new ArrayList<ArrayList<String>>();
    public static ArrayList<ArrayList<String>> lista_valor_producto = new ArrayList<ArrayList<String>>();
    public static ArrayList<ArrayList<String>> lista_subtotal_producto = new ArrayList<ArrayList<String>>();
    public static ArrayList<ArrayList<String>> lista_descuento_producto = new ArrayList<ArrayList<String>>();
    

    ArrayList<String> lista_codigo_respaldo = new ArrayList<String>();

    public static ArrayList<String> lista_nombre = new ArrayList<String>();
    public static ArrayList<String> lista_telefono = new ArrayList<String>();
    public static ArrayList<String> lista_direccion = new ArrayList<String>();
    public static ArrayList<String> lista_documento = new ArrayList<String>();

    public static ArrayList<String> lista_subtotal = new ArrayList<String>();
    public static ArrayList<String> lista_valor_descontado = new ArrayList<String>();
    public static ArrayList<String> lista_iva = new ArrayList<String>();
    public static ArrayList<String> lista_total_factura = new ArrayList<String>();

    
    public void limpiar()
    {
        // System.exit(0);
        // limpiamos todos los campos
        
        // Esto limpiará todas las filas de la tabla
        modelo.setRowCount(0);
        /*lista.remove(numero_factura_dato-1); //eliminamos fila
        lista.add(new ArrayList<String>()); //añadimos fila*/
        jlabel_textfield_descuento_numero.setEnabled(true);
        checkbox_button_descuento.setEnabled(true);

        descuento = 0.0;
        jlabel_textfield_descuento_numero.setText(String.valueOf(descuento)); 

        label_textfield_documento.setText("");
        label_textfield_direccion.setText("");
        label_textfield_nombre.setText("");
        label_textfield_telefono.setText("");

        numero_subtotal = 0;
        jlabel_subtotal_numero.setText(String.valueOf(numero_subtotal));

        numero_iva = 0;
        jlabel_iva_numero.setText(String.valueOf(numero_iva));

        numero_total_factura = 0;
        total_factura_numero.setText(String.valueOf(numero_total_factura));

        numero_total_descontado = 0;
        label_total_valor_descontado_numero.setText(String.valueOf(numero_total_descontado));
        verificar_radio_button = false;

        checkbox_button_descuento.setSelected(false);
    }
    public void agregar_datos_ala_matriz()
    {
        for (int columnas = 0;columnas<modelo.getColumnCount();columnas++)
        {
            for (int filas = 0;filas<modelo.getRowCount();filas++)
            {
                String dato = (String) tabla.getValueAt(filas,columnas);
                if (columnas == 0)
                {
                    lista_codigo_producto.get(numero_factura_dato-1).add(dato);
                } 
                else if (columnas == 1)
                {
                    lista_nombre_producto.get(numero_factura_dato-1).add(dato);            
                }        
                else if (columnas == 2)
                {
                    lista_cantidad_producto.get(numero_factura_dato-1).add(dato);            
                }        
                else if (columnas == 3)
                {
                    lista_valor_producto.get(numero_factura_dato-1).add(dato);            
                }       
                else if (columnas == 4)
                {
                    lista_descuento_producto.get(numero_factura_dato-1).add(dato);
                }
                else if (columnas == 5)
                {
                    
                    lista_subtotal_producto.get(numero_factura_dato-1).add(dato);
                }
                /*System.out.println(dato);*/
            }
        }
    }
    public void mensaje(String palabra)
    {
        dialog_factura_realizada_con_exito = new JDialog(this,"Informacion",true);
        dialog_factura_realizada_con_exito.setSize(400, 200);
        dialog_factura_realizada_con_exito.setLocationRelativeTo(this);
        dialog_factura_realizada_con_exito.setLayout(null);
        dialog_factura_realizada_con_exito.setResizable(false);
        
        label_realizada_con_exito = new JLabel("  "+palabra);
        label_realizada_con_exito.setFont(new Font("Italic",3,17));
        label_realizada_con_exito.setBounds(10,60,500,30);
        label_realizada_con_exito.setIcon(new ImageIcon(getClass().getResource("informacion.png")));
        dialog_factura_realizada_con_exito.add(label_realizada_con_exito);

        button_dialog_aceptar = new JButton("Aceptar");
        button_dialog_aceptar.setBounds(160,110,80,30);
        button_dialog_aceptar.addActionListener(this);
        dialog_factura_realizada_con_exito.add(button_dialog_aceptar);

        dialog_factura_realizada_con_exito.setVisible(true);
    }
    public void recolectar_datos_del_producto()
    {
        //System.out.println("hola soy daniel");
        String palabra = jlabel_textfield_descuento_numero.getText(); 
        palabra = libreria.VerSiHaySignoNumeroFlotante(palabra);
        if (palabra == "numero flotante corto" || palabra == "numero flotante invalido")
        {
            mensaje("El descuento que ingreso no es valido");
        }
        else if (palabra == "numero flotante valido")
        {
            /*Pedimos los datos del producto al usuario */
            dialog_añadir_producto = new JDialog(this, "", true);
            dialog_añadir_producto.setSize(450, 300);
            dialog_añadir_producto.setLocationRelativeTo(this);

            // Crear un panel de contenido general para el JDialog
            contenidoDialog = new JPanel();
            contenidoDialog.setLayout(null);            


            // Configura el tamaño y la ubicación del panel superior con fondo celeste
            jpanel_color_celeste_superior_dialog = new JPanel();
            
            jpanel_color_celeste_superior_dialog.setBounds(0, 0, 450, 35); // Establecer la altura a 30 para la barra superior
            jpanel_color_celeste_superior_dialog.setBackground(new Color(0, 102, 153));
        
            jpanel_color_celeste_inferior_dialog = new JPanel();
            jpanel_color_celeste_inferior_dialog.setBounds(0, 250, 450, 135); // Establecer la altura a 30 para la barra superior
            jpanel_color_celeste_inferior_dialog.setBackground(new Color(0, 102, 153));

            label_añadir_producto_dialog = new JLabel("Añadir nuevo producto");
            label_añadir_producto_dialog.setFont(new Font("Italic",3,15));
            //label_dialog_nombre.setBounds(2,5,80,30);
            label_añadir_producto_dialog.setForeground(Color.white);
            jpanel_color_celeste_superior_dialog.add(label_añadir_producto_dialog);

            // Agrega el jpanel_color_celeste_superior_dialog y el jpanel_color_celeste_inferior_dialog al panel de contenido contenidoDialog
            contenidoDialog.add(jpanel_color_celeste_superior_dialog);
            contenidoDialog.add(jpanel_color_celeste_inferior_dialog);

            label_codigo_producto = new JLabel("Codigo: ");
            label_codigo_producto.setFont(new Font("Italic",3,15));
            label_codigo_producto.setBounds(25,50,80,30);
            //label_dialog_nombre.setForeground(Color.white);
            contenidoDialog.add(label_codigo_producto);

            textfield_codigo_producto = new JTextField();
            textfield_codigo_producto.setFont(new Font("Italic",3,15));
            textfield_codigo_producto.setBounds(105,50,200,30);
            //label_dialog_nombre.setForeground(Color.white);
            contenidoDialog.add(textfield_codigo_producto);

            label_dialog_nombre = new JLabel("Nombre:");
            label_dialog_nombre.setFont(new Font("Italic",3,15));
            label_dialog_nombre.setBounds(25,90,80,30);
            //label_dialog_nombre.setForeground(Color.white);
            contenidoDialog.add(label_dialog_nombre);

            textfield_label_dialog_nombre = new JTextField();
            textfield_label_dialog_nombre.setFont(new Font("Italic",3,15));
            textfield_label_dialog_nombre.setBounds(105,90,200,30);
            //label_dialog_nombre.setForeground(Color.white);
            contenidoDialog.add(textfield_label_dialog_nombre);

            label_dialog_cantidad = new JLabel("Cantidad:");
            label_dialog_cantidad.setFont(new Font("Italic",3,15));
            label_dialog_cantidad.setBounds(25,130,80,30);
            //label_dialog_nombre.setForeground(Color.white);
            contenidoDialog.add(label_dialog_cantidad);

            textfield_label_dialog_cantidad = new JTextField();
            textfield_label_dialog_cantidad.setFont(new Font("Italic",3,15));
            textfield_label_dialog_cantidad.setBounds(105,130,200,30);
            //label_dialog_nombre.setForeground(Color.white);
            contenidoDialog.add(textfield_label_dialog_cantidad);


            label_dialog_valor = new JLabel("Valor:");
            label_dialog_valor.setFont(new Font("Italic",3,15));
            label_dialog_valor.setBounds(25,170,80,30);
            //label_dialog_nombre.setForeground(Color.white);
            contenidoDialog.add(label_dialog_valor);

            textfield_label_dialog_valor = new JTextField();
            textfield_label_dialog_valor.setFont(new Font("Italic",3,15));
            textfield_label_dialog_valor.setBounds(105,170,200,30);
            //label_dialog_nombre.setForeground(Color.white);
            contenidoDialog.add(textfield_label_dialog_valor);

            button_dialog_agregar = new JButton();
            button_dialog_agregar = new JButton("Agregar");
            button_dialog_agregar.setFont(new Font("Italic",3,15));
            button_dialog_agregar.setBounds(100,220,100,25);
            button_dialog_agregar.addActionListener(this);
            contenidoDialog.add(button_dialog_agregar);

            button_dialog_cerrar = new JButton();
            button_dialog_cerrar = new JButton("Cerrar");
            button_dialog_cerrar.setFont(new Font("Italic",3,15));
            button_dialog_cerrar.setBounds(210,220,100,25);
            button_dialog_cerrar.addActionListener(this);
            contenidoDialog.add(button_dialog_cerrar);


            // Configura el panel de contenido como el contenido del JDialog
            dialog_añadir_producto.setContentPane(contenidoDialog);

            // Hacer visible el JDialog
            dialog_añadir_producto.setVisible(true);
        }

        
        


    }
    public void agregar_productos_tabla()
    {
        
        //int indice = tabla.getSelectedRow();
        //System.out.println("agregar_productos_tabla");
        String fila[] = new String[6];
        
        int cantidad = Integer.valueOf(textfield_label_dialog_cantidad.getText());
        double valor = Double.valueOf(textfield_label_dialog_valor.getText());
        double descuento = Double.valueOf(jlabel_textfield_descuento_numero.getText()) / 100 * cantidad * valor;
        double resultado = cantidad * valor - descuento;
        /*System.out.println("cantidad " + cantidad);
        System.out.println("valor " + valor);
        System.out.println("descuento " +descuento);*/
        
        fila[0] = textfield_codigo_producto.getText(); // codigo
        fila[1] = textfield_label_dialog_nombre.getText(); // nombre producto
        fila[2] = textfield_label_dialog_cantidad.getText(); // unidades producto
        fila[3] = String.valueOf(Double.valueOf(textfield_label_dialog_valor.getText())); // precio
        fila[4] = String.valueOf(Double.valueOf(jlabel_textfield_descuento_numero.getText())); // Descuento
        fila[5] = String.valueOf(resultado); // subtotal
        
        modelo.addRow(fila);
        int numero_de_filas = tabla.getRowCount();
        double numero_subtotal = 0;
        double numero_iva = 0;
        String descuento_;
        double numero_total_descontado = 0;
        double numero_total_factura = 0,numero_total_factura_=0;
        String cantidad_;
        String valor_;
        double resultado_de_la_multiplicacion;
        for (int iterable = 0; iterable < numero_de_filas; iterable++) 
        {
            cantidad_ = (String) tabla.getValueAt(iterable, 2);
            valor_ = (String) tabla.getValueAt(iterable, 3);
            descuento_ = (String) tabla.getValueAt(iterable, 4);
            resultado_de_la_multiplicacion = Double.valueOf(cantidad_) * Double.valueOf(valor_);
            descuento = Double.valueOf(descuento_) / 100 * resultado_de_la_multiplicacion;
            // multiplicamos todos las columnas y se lo agregamos al subtotal
            numero_subtotal = numero_subtotal + resultado_de_la_multiplicacion - descuento;

            // variable aparte
            numero_total_factura_ = numero_total_factura_ + resultado_de_la_multiplicacion;
        }

        monto = formatoNum.format(numero_total_factura_);
        jlabel_subtotal_numero.setText(String.valueOf(monto));

        numero_iva = 0.19 * numero_total_factura_;

        monto = formatoNum.format(numero_iva);
        jlabel_iva_numero.setText(String.valueOf(monto));
        

        descuento_dato = Double.valueOf(jlabel_textfield_descuento_numero.getText());
        descuento = descuento_dato / 100 * numero_total_factura_;
        
        /*if (verificar_radio_button == true) {
            // Descuento del 5%
            
        }*/

        numero_total_descontado = descuento;
        monto = formatoNum.format(numero_total_descontado);
        label_total_valor_descontado_numero.setText(String.valueOf(monto));
        //xd
        numero_total_factura = numero_total_factura_ + numero_iva - descuento;
        monto = formatoNum.format(numero_total_factura);
        total_factura_numero.setText(monto);

                        
    }
    
    public void eliminar_productos_tabla()
    {
        int indice = tabla.getSelectedRow();
        if (indice == -1)
        {
            mensaje("Selecciona una fila para eliminar");
        }
        else
        {
            modelo.removeRow(indice);
            int numero_de_filas = tabla.getRowCount();
            double numero_subtotal = 0;
            double numero_iva = 0;
            String descuento_;
            double numero_total_descontado = 0;
            double numero_total_factura = 0,numero_total_factura_=0;
            String cantidad_;
            String valor_;
            double resultado_de_la_multiplicacion;
            for (int iterable = 0; iterable < numero_de_filas; iterable++) 
            {
                cantidad_ = (String) tabla.getValueAt(iterable, 2);
                valor_ = (String) tabla.getValueAt(iterable, 3);
                descuento_ = (String) tabla.getValueAt(iterable, 4);
                resultado_de_la_multiplicacion = Double.valueOf(cantidad_) * Double.valueOf(valor_);
                descuento = Double.valueOf(descuento_) / 100 * resultado_de_la_multiplicacion;
                // multiplicamos todos las columnas y se lo agregamos al subtotal
                numero_subtotal = numero_subtotal + resultado_de_la_multiplicacion - descuento;

                // variable aparte
                numero_total_factura_ = numero_total_factura_ + resultado_de_la_multiplicacion;
            }

            monto = formatoNum.format(numero_total_factura_);
            jlabel_subtotal_numero.setText(String.valueOf(monto));

            numero_iva = 0.19 * numero_total_factura_;
            monto = formatoNum.format(numero_iva);
            jlabel_iva_numero.setText(String.valueOf(monto));

            descuento_dato = Double.valueOf(jlabel_textfield_descuento_numero.getText());
            descuento = descuento_dato / 100 * numero_total_factura_;
            
            /*if (verificar_radio_button == true) {
                // Descuento del 5%
                
            }*/

            numero_total_descontado = descuento;
            monto = formatoNum.format(numero_total_descontado);
            label_total_valor_descontado_numero.setText(String.valueOf(monto));

            numero_total_factura = numero_total_factura_ + numero_iva - descuento;
            monto = formatoNum.format(numero_total_factura);
            total_factura_numero.setText(String.valueOf(monto));

                        
        }   
        
    }
    
    public void agregar_factura_tabla()
    {
        //System.out.println("agregar_productos_tabla");
        String fila_listado_factura[] = new String[3];
        fila_listado_factura[0] = String.valueOf(numero_factura);
        fila_listado_factura[1] = label_textfield_nombre.getText();
        fila_listado_factura[2] = fecha_del_sistema;
        
        modelo_listado_factura.addRow(fila_listado_factura);
        

    }
    
    
    public void eliminar_factura_tabla()
    {
        int indice_listado_factura = tabla_listado_factura.getSelectedRow();
        
        //System.out.println(indice_listado_factura);
        if (indice_listado_factura == -1)
        {
            // No hacemos nada por que no hay fila seleccionada si es -1
            mensaje("Seleccione una fila para eliminarla");
        }
        else
        {
            /*modelo.removeRow(tabla.getSelectedRow());*/
            mensaje("Factura #" + indice_listado_factura + " eliminada");
            modelo_listado_factura.removeRow(indice_listado_factura);
        }
    }
    public FACTURA()
    {
        // creamos una fila al arreglo
        lista_codigo_producto.add(new ArrayList<String>());
        lista_nombre_producto.add(new ArrayList<String>());
        lista_cantidad_producto.add(new ArrayList<String>());
        lista_valor_producto.add(new ArrayList<String>());
        lista_subtotal_producto.add(new ArrayList<String>());
        lista_descuento_producto.add(new ArrayList<String>());
        this.setLayout(null);

        // Titulo de la ventana
        this.setTitle("Projecto final de Java (Conceptos de Programacion)");

        /* para establecer la ubicacion al ejecutar el codigo */
        this.setLocation(50,50);
        
        this.setSize(650, 670);
        
        this.setUndecorated(true);
        // Para maximar la ventana de ambos lados
        //this.setExtendedState(JFrame.MAXIMIZED_BOTH); 
        
        // Bloquea que el usuario pueda redimensionar la ventana
        this.setResizable(false);

        jpanel_color_celeste_superior = new JPanel();

        jpanel_color_celeste_superior.setLayout(null);

        // establecemos la cordenadas del jpanel_color_celeste_superior 
        jpanel_color_celeste_superior.setBounds(0,0,650,100);

        // Le ponemos un fondo celeste
        jpanel_color_celeste_superior.setBackground(new Color(0,102,153));

        // añadimos ala ventana principal
        this.add(jpanel_color_celeste_superior);


        jpanel_color_celeste_inferior = new JPanel();
        jpanel_color_celeste_inferior.setLayout(null);
        jpanel_color_celeste_inferior.setBounds(0,645,650,30);
        jpanel_color_celeste_inferior.setBackground(new Color(0,102,153));
        this.add(jpanel_color_celeste_inferior);

        lab1 = new JLabel("Factura en Java - NetBeans - Arraylist y POO");

        // Cordenadas de la etiqueta lab1
        lab1.setBounds(20,10,700,50);

        // Fuente de la etiqueta lab1
        lab1.setFont(new Font("Italic",3,28));

        // Diseño del color de la etiqueta lab1
        lab1.setForeground(Color.white);

        // Diseño del color de la etiqueta lab1
        jpanel_color_celeste_superior.add(lab1);
        // Añadiendo al panel jpanel_color_celeste_superior
        
        lab2 = new JLabel("[Sin Bases de datos]");

        // Cordenadas de la etiqueta lab2
        lab2.setBounds(20,50,200,50);

        // Fuente de la etiqueta lab2
        lab2.setFont(new Font("Italic",3,20));
        // Diseño de la fuente de la etiqueta lab2

        lab2.setForeground(Color.white);
        // Diseño del color de la etiqueta lab2

        jpanel_color_celeste_superior.add(lab2);
        // Añadiendo al panel jpanel_color_celeste_superior


        label_titulo = new JLabel("Datos Personales");
        label_titulo.setFont(new Font("Italic",3,30));
        label_titulo.setBounds(10,5,600,30);
        this.add(label_titulo);

        /* se utiliza para que la ventana se cierre 
        cuando el usuario hace clic en el botón de cierre de la ventana.
        Esto asegura que la aplicación finalice de manera adecuada cuando 
        el usuario intenta cerrar la ventana. */
        this.setDefaultCloseOperation(EXIT_ON_CLOSE);
        

        jpanel_datos_del_cliente = new JPanel();
        jpanel_datos_del_cliente.setLayout(null);

        // establecemos la cordenadas del jpanel_color_celeste_superior 
        jpanel_datos_del_cliente.setBounds(10,120,600,120);

        // Le ponemos un titulo jpanel_datos_del_cliente 
        jpanel_datos_del_cliente.setBorder(BorderFactory.createTitledBorder("Datos del cliente"));

        // añadimos ala ventana principal
        this.add(jpanel_datos_del_cliente);

        label_documento =  new JLabel("Documento");
        label_documento.setBounds(50,30,80,30);
        jpanel_datos_del_cliente.add(label_documento);

        label_textfield_documento =  new JTextField();
        label_textfield_documento.setBounds(130,30,150,30);
        jpanel_datos_del_cliente.add(label_textfield_documento);

        label_direccion =  new JLabel("Direccion");
        label_direccion.setBounds(50,70,60,30);
        jpanel_datos_del_cliente.add(label_direccion);

        label_textfield_direccion =  new JTextField();
        label_textfield_direccion.setBounds(130,70,150,30);
        jpanel_datos_del_cliente.add(label_textfield_direccion);
        
        label_nombre =  new JLabel("Nombre");
        label_nombre.setBounds(350,30,80,30);
        jpanel_datos_del_cliente.add(label_nombre);
        
        label_textfield_nombre =  new JTextField();
        label_textfield_nombre.setBounds(420,30,170,30);
        jpanel_datos_del_cliente.add(label_textfield_nombre);

        label_telefono =  new JLabel("Telefono");
        label_telefono.setBounds(350,70,80,30);
        jpanel_datos_del_cliente.add(label_telefono);
        
        label_textfield_telefono =  new JTextField();
        label_textfield_telefono.setBounds(420,70,170,30);
        jpanel_datos_del_cliente.add(label_textfield_telefono);



       jpanel_datos_de_factura = new JPanel();
       jpanel_datos_de_factura.setLayout(null);

        // establecemos la cordenadas del jpanel_datos_de_factura 
        jpanel_datos_de_factura.setBounds(10,250,600,80);

        // Le ponemos un titulo jpanel_datos_de_factura
        jpanel_datos_de_factura.setBorder(BorderFactory.createTitledBorder("Datos de factura"));

        // añadimos ala ventana jpanel_datos_de_factura
        this.add(jpanel_datos_de_factura);

        label_numero_factura =  new JLabel("N° Factura:");
        label_numero_factura.setBounds(50,30,80,30);
        jpanel_datos_de_factura.add(label_numero_factura);
        
        /* String.valueOf(numero_factura) convierte el valor
         del entero numero_factura en una cadena y 
         se lo asigna al JLabel */
        label_numero_de_factura_contador =  new JLabel(String.valueOf(numero_factura));
        label_numero_de_factura_contador.setFont(new Font("Bold",3,15));
        label_numero_de_factura_contador.setBounds(130,30,80,30);
        jpanel_datos_de_factura.add(label_numero_de_factura_contador);

        label_fecha = new JLabel("Fecha:");
        label_fecha.setBounds(300,30,80,30);
        jpanel_datos_de_factura.add(label_fecha);

        label_fecha = new JLabel(fecha_del_sistema); //fechax
        label_fecha.setFont(new Font("Bold",3,15));
        label_fecha.setBounds(350,30,80,30);
        jpanel_datos_de_factura.add(label_fecha);


        jpanel_listado_de_facturas_añadir_eliminar = new JPanel();
        jpanel_listado_de_facturas_añadir_eliminar.setLayout(null);

        // establecemos la cordenadas del jpanel_listado_de_facturas_añadir_eliminar  por momento
        jpanel_listado_de_facturas_añadir_eliminar.setBounds(10,340,600,40);

        // Le ponemos un titulo en este caso ninguno jpanel_listado_de_facturas_añadir_eliminar
        jpanel_listado_de_facturas_añadir_eliminar.setBorder(BorderFactory.createTitledBorder(""));

        // añadimos ala ventana jpanel_listado_de_facturas_añadir_eliminar
        this.add(jpanel_listado_de_facturas_añadir_eliminar);
        

        /*Esta línea crea una nueva instancia de la clase DefaultTableModel, 
        que se utiliza para almacenar y gestionar datos para un JTable */
        modelo = new DefaultTableModel();

        /*Esta línea agrega una columna con la etiqueta
         de encabezado "Producto" al DefaultTableModel */
        modelo.addColumn("Codigo");
        modelo.addColumn("Producto");
        modelo.addColumn("Cantidad");
        modelo.addColumn("Valor");
        modelo.addColumn("Descuento");
        modelo.addColumn("Sub Total");
        // this.add(modelo);
       
        /*Aquí, se crea un JTable (tabla) y se asocia con el DefaultTableModel 
        que se ha creado (modelo). Esta tabla tendrá columnas para 
        "Producto," "Cantidad," "Valor" y "Sub Total." */
        tabla = new JTable(modelo);

        // this.add(tabla);
        

        /*Esta línea crea un JScrollPane (jstabla) y agrega el JTable
         (tabla) a él. Un JScrollPane se utiliza para hacer
          que una tabla sea desplazable en caso de que el contenido 
          supere el área visible*/
        jstabla = new JScrollPane(tabla);        
        jstabla.setBounds(10,390,600,100);
        this.add(jstabla);

        jlabel_subtotal = new JLabel("Subtotal:");
        jlabel_subtotal.setBounds(30,500,80,30);
        this.add(jlabel_subtotal);

        jlabel_subtotal_numero = new JLabel(String.valueOf(numero_subtotal)); // $
        jlabel_subtotal_numero.setFont(new Font("Bold",3,15));
        jlabel_subtotal_numero.setBounds(135,500,80,30);
        this.add(jlabel_subtotal_numero);

        jlabel_descuento = new JLabel("% Descuento:");
        jlabel_descuento.setBounds(30,535,80,30);
        this.add(jlabel_descuento);

        jlabel_textfield_descuento_numero = new JTextField(String.valueOf(descuento)); 
        jlabel_textfield_descuento_numero.setBounds(135,535,80,30);
        this.add( jlabel_textfield_descuento_numero);

        jlabel_iva = new JLabel("IVA 19%:");
        jlabel_iva.setBounds(30,570,80,30);
        this.add(jlabel_iva);
        
        jlabel_iva_numero = new JLabel(String.valueOf(numero_iva)); // $
        jlabel_iva_numero.setFont(new Font("Bold",3,15));
        jlabel_iva_numero.setBounds(135,570,80,30);
        this.add(jlabel_iva_numero);
        
        total_facutura = new JLabel("Total Factura:");
        total_facutura.setBounds(30,605,80,30);
        this.add(total_facutura);

        total_factura_numero = new JLabel(String.valueOf(numero_total_factura)); // $
        total_factura_numero.setFont(new Font("Bold",3,15));
        total_factura_numero.setBounds(135,605,80,30);
        this.add(total_factura_numero);
        
        label_total_valor_descontado = new JLabel("Valor Descontado:");
        label_total_valor_descontado.setBounds(330,535,120,30);
        this.add(label_total_valor_descontado);

        label_total_valor_descontado_numero = new JLabel(String.valueOf(numero_total_descontado)); // $
        label_total_valor_descontado_numero.setFont(new Font("Bold",3,15));
        label_total_valor_descontado_numero.setBounds(470,535,120,30);
        this.add(label_total_valor_descontado_numero);
        
  
        button_finalizar_factura =  new JButton("Finalizar_factura");
        button_finalizar_factura.setBounds(380,600,130,30);
        // añadir evento button_finalizar_factura
        button_finalizar_factura.addActionListener(this);
        this.add(button_finalizar_factura);

        button_limpiar =  new JButton("Limpiar");
        button_limpiar.setBounds(530,600,79,30);
        // añadir evento button_finalizar_factura
        button_limpiar.addActionListener(this);
        this.add(button_limpiar);

        checkbox_button_descuento = new JCheckBox("");
        checkbox_button_descuento.setBounds(239,535,80,30);
        checkbox_button_descuento.addActionListener(this);
        this.add(checkbox_button_descuento);

        button_lista_factura =  new JButton(" Ver listado de facturas");
        button_lista_factura.setBounds(0,0,220,40);
        button_lista_factura.setIcon(new ImageIcon(getClass().getResource("lista.png")));
        button_lista_factura.addActionListener(this);
        jpanel_listado_de_facturas_añadir_eliminar.add(button_lista_factura);

        button_añadir_factura =  new JButton(" Añadir");
        button_añadir_factura.setBounds(290,0,150,40);
        button_añadir_factura.setIcon(new ImageIcon(getClass().getResource("anadir.png")));
        button_añadir_factura.addActionListener(this);
        jpanel_listado_de_facturas_añadir_eliminar.add(button_añadir_factura);

        button_eliminar_factura =  new JButton(" Eliminar");
        button_eliminar_factura.setBounds(450,0,150,40);
        button_eliminar_factura.setIcon(new ImageIcon(getClass().getResource("cerrar.png")));
        button_eliminar_factura.addActionListener(this);
        jpanel_listado_de_facturas_añadir_eliminar.add(button_eliminar_factura);

        /*Esta línea crea una nueva instancia de la clase DefaultTableModel, 
        que se utiliza para almacenar y gestionar datos para un JTable */

        modelo_listado_factura = new DefaultTableModel();

        /*Esta línea agrega una columna con la etiqueta
        de encabezado "Producto" al DefaultTableModel */
        modelo_listado_factura.addColumn("Facutra N°");
        modelo_listado_factura.addColumn("Cliente");
        modelo_listado_factura.addColumn("Fecha");
        // this.add(modelo_listado_factura);
    
        /*Aquí, se crea un JTable (tabla_listado_factura) y se asocia con el DefaultTableModel 
        que se ha creado (modelo_listado_factura). Esta tabla tendrá columnas para 
        "Facutra," "Cliente," "Fecha"*/
        tabla_listado_factura = new JTable(modelo_listado_factura);

        // this.add(tabla);
        

        /*Esta línea crea un JScrollPane (jstabla_listado_factura) y agrega el JTable
        (tabla_listado_factura) a él. Un JScrollPane se utiliza para hacer
        que una tabla sea desplazable en caso de que el contenido 
        supere el área visible*/

        jstabla_listado_factura = new JScrollPane(tabla_listado_factura);        
        jstabla_listado_factura.setBounds(10,160,600,455);
    
        /* 
        

        
        public void eliminarDatos (){
            int indice=tabla.getSelectedRow();
            System.out.println(indice);
            modelo.removeRow(indice);
            
        }

       */
        
        
        
    }
    public static void main(String[] args) 
    {
        FACTURA factura = new FACTURA();
        factura.setVisible(true);
    }
    @Override
    public void actionPerformed(ActionEvent ae)  
    {
        if (ae.getSource() == button_añadir_factura)
        {
            recolectar_datos_del_producto();
        }
        if (ae.getSource() == button_dialog_cerrar)
        {
            // Cerramos la ventana dialog_añadir_producto
            dialog_añadir_producto.dispose();
        }
        if (ae.getSource() == button_dialog_agregar)
        {
            String palabra_codigo = textfield_codigo_producto.getText();
            palabra_codigo = libreria.VerSiHaySignoPalabra(palabra_codigo);
            if (palabra_codigo == "numero corto")
            {
                mensaje("El codigo es muy corto");            
            }
            else if (palabra_codigo == "numero invalido")
            {
                mensaje("El codigo es invalido ingrese nuevamente");            
            }
            else if (palabra_codigo == "numero valido")
            {
                String palabra_nombre_producto = textfield_label_dialog_nombre.getText();
                //System.out.println(palabra_nombre_producto);
                palabra_nombre_producto = libreria.VerProducto(palabra_nombre_producto);
                if (palabra_nombre_producto == "nombre invalido")
                {
                    mensaje("El nombre del producto no es valido");
                }
                else if (palabra_nombre_producto == "nombre valido")
                {
                    String palabra_cantidad =  textfield_label_dialog_cantidad.getText();
                    palabra_cantidad =  libreria.VerSiHaySignoPalabra(palabra_cantidad);
                    if (palabra_cantidad == "numero corto" || palabra_cantidad == "numero invalido")
                    {
                        mensaje("El numero es invalido ingrese nuevamente");
                    }
                    else if (palabra_cantidad == "numero valido")
                    {
                        String palabra_precio = textfield_label_dialog_valor.getText();
                        palabra_precio = libreria.VerSiHaySignoNumeroFlotante(palabra_precio);
                        if (palabra_precio == "numero flotante corto" || palabra_precio == "numero flotante invalido")
                        {
                            mensaje("El valor del producto no es valido");
                            
                        }
                        else if (palabra_precio == "numero flotante valido")
                        {
                            
                            lista_codigo_respaldo.add(textfield_codigo_producto.getText());
                            int contador=0;
                            String codigo_repetido= "codigo unico";
                            String dato=textfield_codigo_producto.getText(),dato_two;
                            //System.out.println(lista_codigo_respaldo);
                            /*codigo unico */
                            for (int iterable_two=0;iterable_two< lista_codigo_respaldo.size();iterable_two++)
                            {
                                dato_two = (String) lista_codigo_respaldo.get(iterable_two);
                                if (dato.equals(dato_two))
                                {
                                    contador++;
                                }
                                if (contador > 1)
                                {
                                    codigo_repetido = "codigo repetido";
                                    break;
                                }
                            }

                            if (codigo_repetido == "codigo repetido")
                            {
                                mensaje("El codigo se repete ingrese otro");
                            }
                            else if (codigo_repetido == "codigo unico")
                            {
                                // Agregamos los productos ala tablas
                                agregar_productos_tabla();

                                // cerramos ventana
                                dialog_añadir_producto.dispose(); 
                            }

                            
                        }
                        
                           
                    }
                    
                }
        
                
            }
            
            
            
        }
        if (ae.getSource()  == button_dialog_aceptar)
        {
            
            // Cerramos la ventana dialog_factura_realizada_con_exito
            dialog_factura_realizada_con_exito.dispose();
          
        }
        
        if (ae.getSource() == button_limpiar)
        {
            limpiar();
           
           
        }
        
        if (ae.getSource() == button_eliminar_factura)
        {
         
            // Eliminamos la factura producto
            eliminar_productos_tabla();
        }
    
        if (ae.getSource() == button_finalizar_factura)
        {
            String palabra = label_textfield_nombre.getText();
            palabra = libreria.VerNombre(palabra);
            if (palabra == "nombre invalido")
            {
                mensaje("El nombre no es valido ingrese nuevamente");
            }
            else if (palabra == "nombre valido")
            {
                String palabra_numero = label_textfield_telefono.getText();
                palabra_numero = libreria.VerSiHayNumeroTelefonico(palabra_numero);
                if (palabra_numero == "numero corto")
                {
                    mensaje("El numero debe contener 8 digitos");
                }
                else if (palabra_numero == "numero invalido")
                {
                    mensaje("El numero de telefono no es valido");
                }
                else if (palabra_numero == "numero valido")
                {
                    String palabra_documento = label_textfield_documento.getText();
                    palabra_documento = libreria.VerDireccionDocumento(palabra_documento);
                    if (palabra_documento == "nombre invalido")
                    {
                        mensaje("El documento no es valido");
                    }
                    else  if (palabra_documento == "nombre valido")
                    {
                        String palabra_direccion = label_textfield_direccion.getText();
                        /*System.out.println("x = " + palabra_direccion);
                        System.out.println("len() = " + palabra_direccion.length());*/
                        palabra_direccion = libreria.VerDireccionDocumento(palabra_direccion);

                        if (palabra_direccion == "nombre invalido")
                        {
                            mensaje("La direccion no es valida");
                        }
                        else if (palabra_direccion == "nombre valido")
                        {
                            int numero_de_filas = tabla.getRowCount();
                            if (numero_de_filas == 0)
                            {
                                mensaje("No hay productos en su lista de compra");
                                
                            }
                            else if (numero_de_filas > 0)
                            {
                                                                
                                // colocamos los datos ala tabla
                                // Agregamos una fila ala tabla
                                
                                //lista.add(new ArrayList<String>());
                                /*

                                lista.add(new ArrayList<String>());
                                lista.get(0).add("Dato 1"); // Agrega una cadena a la fila 0
                                lista.get(0).add("Dato 2"); // Agrega otra cadena a la fila 0 
                                
                                */
                                
                                agregar_datos_ala_matriz();
                                
                                lista_codigo_producto.add(new ArrayList<String>());
                                lista_nombre_producto.add(new ArrayList<String>());
                                lista_cantidad_producto.add(new ArrayList<String>());
                                lista_valor_producto.add(new ArrayList<String>());
                                lista_subtotal_producto.add(new ArrayList<String>());
                                lista_descuento_producto.add(new ArrayList<String>());

                                lista_nombre.add(label_textfield_nombre.getText());
                                lista_telefono.add(label_textfield_telefono.getText());
                                lista_direccion.add(label_textfield_direccion.getText());
                                lista_documento.add(label_textfield_documento.getText());

                                lista_subtotal.add(jlabel_subtotal_numero.getText()); 
                                lista_valor_descontado.add(label_total_valor_descontado_numero.getText()); 
                                lista_iva.add(jlabel_iva_numero.getText());
                                lista_total_factura.add(total_factura_numero.getText()); 
                                
                                // comprobar
                                //System.out.println(lista_total_factura.get(0));

                                agregar_factura_tabla();
                                numero_factura++;
                                numero_factura_dato++;

                                // numero_subtotal = 0;
                                // jlabel_subtotal_numero.setText(String.valueOf(numero_subtotal));

                                // numero_iva = 0;
                                // jlabel_iva_numero.setText(String.valueOf(numero_iva));

                                // numero_total_factura = 0;
                                // total_factura_numero.setText(String.valueOf(numero_total_factura));

                                // numero_total_descontado = 0;
                                // label_total_valor_descontado_numero.setText(String.valueOf(numero_total_descontado));
                                // jlabel_textfield_descuento_numero.setText("");   
                            
                                // //verificar_radio_button = false;
                                // checkbox_button_descuento.setSelected(false);

                                // //jlabel_textfield_descuento_numero.setEnabled(true);
                                // descuento = 0.0;
                                // jlabel_textfield_descuento_numero.setText(String.valueOf(descuento));

                                // //System.out.println(numero_factura);
                                // label_numero_de_factura_contador.setText(String.valueOf(numero_factura));

                                mensaje("La factura se ha realizado con exito");
                                limpiar();
                                modelo.setRowCount(0);
                                
                                
                            }
                            
                        }
                    }
                    
                }
                
            }
            
            
        }
        
        if (ae.getSource() == button_lista_factura)
        {
            // Si presiona este boton se abre un dialogo con los datos del cliente            

            dialog_lista_de_factura = new JDialog(this, "", true);
            dialog_lista_de_factura.setSize(630, 680);
            dialog_lista_de_factura.setLocationRelativeTo(this);
            dialog_lista_de_factura.setResizable(false);

            contenidoDialog_lista_de_factura = new JPanel();
            contenidoDialog_lista_de_factura.setLayout(null);

            jpanel_lista_factura_color_celeste_superior_dialog = new JPanel();
            jpanel_lista_factura_color_celeste_superior_dialog.setBounds(0, 0, 630, 65); // Establecer las cordenadas
            jpanel_lista_factura_color_celeste_superior_dialog.setBackground(new Color(0, 102, 153));

            jpanel_lista_factura_color_celeste_inferior_dialog = new JPanel();
            jpanel_lista_factura_color_celeste_inferior_dialog.setBounds(0, 623, 630, 20); // Establecer las cordenadas
            jpanel_lista_factura_color_celeste_inferior_dialog.setBackground(new Color(0, 102, 153));

            label_listado_factura_dialog = new JLabel("Listado de facturas");
            label_listado_factura_dialog.setFont(new Font("Italic",3,25));
            label_listado_factura_dialog.setForeground(Color.white);
            jpanel_lista_factura_color_celeste_superior_dialog.add(label_listado_factura_dialog);

            
            label_seleccione_dialog = new JLabel("Seleccione una factura del listado para mirar su contenido");
            label_seleccione_dialog.setBounds(30, 80, 630, 20); // Establecer las cordenadas
            label_seleccione_dialog.setFont(new Font("Italic",3,18));
            contenidoDialog_lista_de_factura.add(label_seleccione_dialog);

            contenidoDialog_lista_de_factura_eliminar_e_imprimir = new JPanel();

            contenidoDialog_lista_de_factura_eliminar_e_imprimir.setLayout(null);

            // establecemos la cordenadas del contenidoDialog_lista_de_factura 
            contenidoDialog_lista_de_factura_eliminar_e_imprimir.setBounds(10,110,600,40);

            // Le ponemos un titulo contenidoDialog_lista_de_factura
            contenidoDialog_lista_de_factura_eliminar_e_imprimir.setBorder(BorderFactory.createTitledBorder(""));

            // añadimos ala contenidoDialog_lista_de_factura contenidoDialog_lista_de_factura
            contenidoDialog_lista_de_factura.add(contenidoDialog_lista_de_factura_eliminar_e_imprimir);
    
            contenidoDialog_lista_de_factura.add(jpanel_lista_factura_color_celeste_superior_dialog);
            contenidoDialog_lista_de_factura.add(jpanel_lista_factura_color_celeste_inferior_dialog);


            button_listado_de_facturas_eliminar = new JButton("    Eliminar");
            button_listado_de_facturas_eliminar.setBounds(312,1,140,38);
            button_listado_de_facturas_eliminar.setIcon(new ImageIcon(getClass().getResource("cerrar.png")));
            button_listado_de_facturas_eliminar.addActionListener(this);
            contenidoDialog_lista_de_factura_eliminar_e_imprimir.add(button_listado_de_facturas_eliminar);

            button_listado_de_facturas_imprimir = new JButton("    Imprimir");
            button_listado_de_facturas_imprimir.setBounds(459,1,140,38);
            button_listado_de_facturas_imprimir.setIcon(new ImageIcon(getClass().getResource("imprimir.png")));
            button_listado_de_facturas_imprimir.addActionListener(this);
            contenidoDialog_lista_de_factura_eliminar_e_imprimir.add(button_listado_de_facturas_imprimir);


            contenidoDialog_lista_de_factura.add(jstabla_listado_factura);// lo añadimos la tabla


            // Configura el panel de contenido como el contenido del JDialog
            dialog_lista_de_factura.setContentPane(contenidoDialog_lista_de_factura);

            // Hacer visible el JDialog
            dialog_lista_de_factura.setVisible(true);

            
        }
        if (ae.getSource() == checkbox_button_descuento)
        {
            // actualizamos el valor de esta variable para saber si el radio_button esta activado o no
            String palabra = jlabel_textfield_descuento_numero.getText(); 
            palabra = libreria.VerSiHaySignoNumeroFlotante(palabra);
            if (palabra == "numero flotante corto" || palabra == "numero flotante invalido")
            {
                mensaje("El descuento no es valido");
                checkbox_button_descuento.setSelected(false);
            }
            else if (palabra == "numero flotante valido")
            {
                verificar_radio_button = true;
                checkbox_button_descuento.setSelected(true);
                checkbox_button_descuento.setEnabled(false);
                jlabel_textfield_descuento_numero.setEnabled(false);
                
            }
            
            
        }
        if (ae.getSource() == button_listado_de_facturas_imprimir)
        {
            int indice_fichero = tabla_listado_factura.getSelectedRow();
            //System.out.println("indice = " + indice_fichero);
            
            
            if (indice_fichero == -1)
            {
                // No hacemos nada por que no hay fila seleccionada si es -1
                mensaje("Selecciona una fila para imprimirla");
                
            }
            else
            {
                fichero.crear_fichero(indice_fichero);
            }
            
        }
        
        if (ae.getSource() == button_listado_de_facturas_eliminar)
        {
          //   Eliminamos la factura del cliente final

            eliminar_factura_tabla();
           
        }
       
    }


}
