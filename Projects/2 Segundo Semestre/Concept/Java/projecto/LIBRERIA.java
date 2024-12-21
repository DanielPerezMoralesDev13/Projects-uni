package projecto;

public class LIBRERIA
{
    
    public static String VerProducto(String label)
    {
        String numero_signo = "!\\\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~";
        if (label.length() == 0)
        {
            label = "nombre invalido";
            return label;
        }
        for (int iterable=0;iterable<label.length();iterable++) 
        {
            for (int iterable_two=0;iterable_two<numero_signo.length();iterable_two++)
            {
                if (label.charAt(iterable) == numero_signo.charAt(iterable_two))
                {
                    label = "nombre invalido";
                    return label;
                }
            } 
            
        }

        label = "nombre valido";
        return label;
    }


     public static String VerDireccionDocumento(String label)
    {
        String numero_signo = "!\\\"#$%&'()*+-/:;<=>?@[\\]^_`{|}~";
        if (label.length() == 0)
        {
            label = "nombre invalido";
            return label;
        }
        for (int iterable=0;iterable<label.length();iterable++) 
        {
            for (int iterable_two=0;iterable_two<numero_signo.length();iterable_two++)
            {
                if (label.charAt(iterable) == numero_signo.charAt(iterable_two))
                {
                    label = "nombre invalido";
                    return label;
                }
            } 
            
        }

        label = "nombre valido";
        return label;
    }

    public static String VerNombre(String label)
    {
        String numero_signo = "0123456789!\\\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~";
        if (label.length() == 0)
        {
            label = "nombre invalido";
            return label;
        }
        for (int iterable=0;iterable<label.length();iterable++) 
        {
            for (int iterable_two=0;iterable_two<numero_signo.length();iterable_two++)
            {
                if (label.charAt(iterable) == numero_signo.charAt(iterable_two))
                {
                    label = "nombre invalido";
                    return label;
                }
            } 
            
        }

        label = "nombre valido";
        return label;
    }

    public static String VerSiHaySignoNumero(String label)
    {
        String numero_signo = "0123456789!\\\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~ ";
        if (label.length() == 0)
        {
            label = "nombre corto";
            return label;
        }
        for (int iterable=0;iterable<label.length();iterable++) 
        {
            for (int iterable_two=0;iterable_two<numero_signo.length();iterable_two++)
            {
                if (label.charAt(iterable) == numero_signo.charAt(iterable_two))
                {
                    label = "nombre invalido";
                    return label;
                }
            } 
            
        }
        label = "nombre valido";
        return label;
    }

    public static String VerSiHaySignoPalabra(String label)
    {
        String numero_signo = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZÑñ!\\\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~ ";
        if (label.length() == 0)
        {
            label = "numero corto";
            return label;
        }
        for (int iterable=0;iterable<label.length();iterable++) 
        {
            for (int iterable_two=0;iterable_two<numero_signo.length();iterable_two++)
            {
                if (label.charAt(iterable) == numero_signo.charAt(iterable_two))
                {
                    label = "numero invalido";
                    return label;
                }
            } 
            
        }
        label = "numero valido";
        return label;
    }

    /**
     * @param label: String
     * @return String
     */
    public static String VerSiHaySignoNumeroFlotante(String label)
    {
        String numero_signo = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZÑñ!\\\"#$%&'()*+,-/:;<=>?@[\\]^_`{|}~ ";
        int contador = 0,indice_punto;
        if (label.length() == 0)
        {
            label = "numero flotante corto";
            return label;
        }
        if (label.charAt(0) == '.')
        {
            label = "numero flotante invalido";
            return label;
        }
        for (int iterable=0;iterable<label.length();iterable++) 
        {
            if (contador >= 2)
            {
                label = "numero flotante invalido";
                return label;
            }
            
            if (label.charAt(iterable) == '.')
            {

                indice_punto = iterable + 1;
                contador++;
                try 
                {
                    // codigo aqui si el caracter no es un digito
                    if (!Character.isDigit(label.charAt(indice_punto))) 
                    {
                        label = "numero flotante invalido";
                        return label;
                    }
                } 
                catch (StringIndexOutOfBoundsException e) 
                {
                    // Manejar la excepcion
                    label = "numero flotante invalido";
                    return label;
                }                
            }            
        }
            
        for (int iterable=0;iterable<label.length();iterable++) 
        {
            for (int iterable_two=0;iterable_two<numero_signo.length();iterable_two++)
            {
                if (label.charAt(iterable) == numero_signo.charAt(iterable_two))
                {
                    label = "numero flotante invalido";
                    return label;
                }
            } 
            
        }
        label = "numero flotante valido";
        return label;
    }
    
    public static String VerSiHayNumeroTelefonico(String label)
    {
        String numero_signo = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZÑñ!\\\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~ ";
        if (label.length() < 8)
        {
            label = "numero corto";
            return label;
        }
        if (label.length() > 8)
        {
            label = "numero invalido";
            return label;
        }
        for (int iterable=0;iterable<label.length();iterable++) 
        {
            for (int iterable_two=0;iterable_two<numero_signo.length();iterable_two++)
            {
                if (label.charAt(iterable) == numero_signo.charAt(iterable_two))
                {
                    label = "numero invalido";
                    return label;
                }
            } 
            
        }
        label = "numero valido";
        return label;
    }

    public static String VerSiHaySigno(String label)
    {
        String numero_signo = "!\\\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~ ";
        if (label.length() == 0)
        {
            label = "palabra corto";
            return label;
        }
        for (int iterable=0;iterable<label.length();iterable++) 
        {
            for (int iterable_two=0;iterable_two<numero_signo.length();iterable_two++)
            {
                if (label.charAt(iterable) == numero_signo.charAt(iterable_two))
                {
                    label = "palabra invalido";
                    return label;
                }
            } 
            
        }
        label = "palabra valido";
        return label;
    }
    public LIBRERIA()
    {

    }
    public static void main(String[] args)
    {
        /*String x = new String("1234567");
        x = VerSiHayNumeroTelefonico(x);
        System.out.println(x);*/
    }
}
