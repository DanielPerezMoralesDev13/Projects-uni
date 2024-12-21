# El mensaje de error indica que Curl no puede verificar la legitimidad del certificado SSL del servidor porque es autofirmado. Esto es común en entornos de desarrollo local donde se utilizan certificados autofirmados

Puedes agregar la opción `-k` o `--insecure` a tu comando Curl para ignorar la verificación del certificado SSL. Sin embargo, ten en cuenta que esto deshabilitará la verificación de SSL y podría exponerte a riesgos de seguridad si estás conectándote a un servidor en un entorno de producción o desconocido.

El comando corregido sería:

```bash
curl -k https://localhost:5000/all
```

Este comando debería permitirte realizar la solicitud HTTP GET a tu servidor local y recibir la respuesta JSON con los datos de todas las actividades. Si tienes alguna otra pregunta o necesitas más ayuda, no dudes en decirme.

sudo apt  install jq
