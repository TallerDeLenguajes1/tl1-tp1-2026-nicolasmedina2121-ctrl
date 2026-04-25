**Investigar el archivo .gitignore**
**¿Por qué es conveniente incluirlo?**
    Es conveniente incluirlo porque asi nos evitamos que se suban cambios innecesarios al repositorio, manteniendolo mas limpio y menos pesado. Ademas tambien lo podemosutilizar para ignorar archivos confidenciales como credenciales u otros, que no querriamos que esten publicos en nuestro reppositorio.

**¿Cuándo se debe hacer?**
    Se debe hacer al comienzo de un proyecto para que desde un inicio no se guarden dichos archivos, y se debe actualizar si se requiere de alguna regla nueva para un archivo que agreguemos.

**¿Cómo configuraría el archivo .gitignore?**
    Se escriben dentro del archivo, con un editor de texto, reglas que hagan referencia a los arhivos a ignorar, por ejemplo:
    - Si se quiere ignorar un archivo en especifico, se escribe en el .gitignore simplemente el nombre del archivo y su formato: archivo.formato (ej. ignorar.txt).
    - Si se quieren ignorar todos los archivos de un formato dado se hace de la siguiente forma: *.formato (ej. *.txt, se ignoraran todos los archivos .txt).