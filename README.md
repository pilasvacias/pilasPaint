pilaspaint
==========

###Descargas:
* [Git](http://git-scm.com/download/win)
* [Git Source Control - VS2012 Addin](http://gitscc.codeplex.com)
* [Github para windows](http://windows.github.com)
* [SFML 2.0 y wxWidgets 2.9.4](http://www.mediafire.com/?3uiprc7jba23oq2)

###Instalación

  <table>

  <tr>
  <td> __Git__ </td>
  <td> Instalación básica. </td>
  </tr>

  <tr>
  <td> __Git Source Control__ </td>
  <td> 
    Después de instalar:<br>
    `Tools -> Options -> Source Control -> Current Source Control -> Git` 
  </td>
  </tr>

  <tr>
  <td> __Github para Windows__ </td>
  <td> Instalación báisca. Después de instalar es aconsejable cambiar la ruta donde se va a sincronzar 
  el proyecto local. </td>
  </tr>

  <tr>
  <td> __SFML y wxWidgets__ </td>
  <td>
    Antes de instalar necesitas haber sincronizado tu proyecto<br>
    Las libererías necesarias que deben estar en la carpeta `..\pilasPaint\pilasPaint`<br>
    ej: `..\Carpeta de la Solución\Carpeta del Proyecto\SFML`
  </td>
  </tr>

  </table>

###Cómo guardar tus cambios desde Visual Studio
En el explorador de la solución: <br>
` Click derecho -> Git Pending Changes -> Seleccionar Cambios -> Commit ` <br>
Es necesario un mensaje para realizar el commit.
Los cambios que no se incluyen en el commit permanecen locales.
Todos los cambios serán locales hasta que sincronices el proyecto.
Los cambios externos no se refelejan hasta que sincronices el proyecto.

###Cómo sincronizar el proyecto con Git for Windows
Si no hay copia local, crearla con la opción `clone`, que copiará todos los archivos necesarios.

Em el menú lateral abrir el repositorio pilasPaint, pulsando en la flecha azul. <br>
En este momento Git comprueba los cambios pendientes. <br>
Si no está sincronizado, click a `sync` en el menú de la parte superior, a la derecha del nombre del repositorio. <br>
Si otra persona o tú ha realizado cambios en el proyecto, se sincronizarán en este momento <br>