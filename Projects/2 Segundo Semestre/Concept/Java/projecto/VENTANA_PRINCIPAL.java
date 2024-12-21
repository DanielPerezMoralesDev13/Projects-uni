package projecto;

import java.awt.Font;

import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;

public class VENTANA_PRINCIPAL extends JFrame
{
    JLabel foto;
    JMenuBar barraMenu;
    JMenu menuArchivo;
    JMenuItem itemFactura,itemSalir;

    // En la clase VENTANA_PRINCIPAL
    public JMenuItem getItemSalir() 
    {
        return itemSalir;
    }

    public JMenuItem getItemFactura()
    {
        return itemFactura;
    }
    public VENTANA_PRINCIPAL()
    {
        // Crear un marco (ventana)
        this.setLayout(null);

        // Titulo de la ventana
        this.setTitle("Projecto final de Java (Conceptos de Programacion)");

        /* para establecer la ubicacion al ejecutar el codigo */
        //this.setLocation(50,50);
        
        //this.setSize(650, 700);

        // Para maximar la ventana de ambos lados
        this.setExtendedState(JFrame.MAXIMIZED_BOTH); 
        
        // Bloquea que el usuario pueda redimensionar la ventana
        //this.setResizable(false);
        JLabel foto = new JLabel();
        foto.setBounds(540, 80, 800, 800);
        // D:\Escritorio\JAVA\projecto\Logo_UNI.jpg
        foto.setIcon(new ImageIcon("projecto\\Logo_UNI.jpg"));
        this.add(foto);
        JLabel texto = new JLabel("Instituto de Estudios Superiores | Educación en Ciencia y Tecnología");
        texto.setFont(new Font("BOLD",3,25));
        texto.setBounds(450, 300, 1000, 800);
        this.add(texto);


        
        // Crear una barra de menú
        barraMenu = new JMenuBar();

        // Crear menús
        menuArchivo = new JMenu("Productos");

        // Crear elementos de menú
        itemFactura = new JMenuItem("Factura");
       
        itemSalir = new JMenuItem("Salir");

        // Agregar elementos al menú Archivo
        menuArchivo.add(itemFactura);

        menuArchivo.addSeparator(); // Separador
        menuArchivo.add(itemSalir);

        // Agregar menús a la barra de menú
        barraMenu.add(menuArchivo);

         

        // Configurar la barra de menú en el marco
        this.setJMenuBar(barraMenu);

        // Hacer visible el marco
        this.setVisible(true);
    }
    public static void main(String[] args) 
    {
        VENTANA_PRINCIPAL ventana_inicial = new VENTANA_PRINCIPAL();
        ventana_inicial.setVisible(true);
    }
    
    
}
