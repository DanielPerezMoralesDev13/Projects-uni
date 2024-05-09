package projecto;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JFrame;
import javax.swing.JMenuItem;


public class MAIN extends JFrame 
{
    // Variables globales
    VENTANA_PRINCIPAL ventana_principal = new VENTANA_PRINCIPAL();

    FACTURA factura = new FACTURA();


    
    // Obtener el item_Salir desde la instancia de VENTANA_PRINCIPAL
    JMenuItem itemSalir = ventana_principal.getItemSalir();
    JMenuItem itemFactura = ventana_principal.getItemFactura();
    public MAIN()
    {
        // Configurar la accion para el elemento Salir
        itemSalir.addActionListener(new ActionListener() 
        {
            public void actionPerformed(ActionEvent ae) 
            {
                System.exit(0); // cerramos el programa
            }
        });
        
        itemFactura.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent ae)
            {
                factura.setVisible(true);
            }
        });
    }

    public static void main(String[] args) 
    {
        
        MAIN ventana_inicio = new MAIN();
        
    }
}
