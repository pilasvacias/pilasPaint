pilaspaint
==========

Para usar git en vs2012 hay que bajar: 1) El addon para vs: http://gitscc.codeplex.com/ 2) Github para windows (creo que no hace falta, pero es más cómodo): http://windows.github.com/

Conviene leerse los tutoriales de los 2 para saber como guardar repos de forma local y sincronizarlos.

Una vez instalado en el menú de vs2012 hay que cambiarlo para que use el addon: Tools -> Options -> Source Control -> Seleccionar Git Source Control

Si habéis usado el programa de git para Windows para que sincronice el proyecto al abrir el archivo pilasPaint.sln deberían aparecer unos simbólos en el explorador del proyecto al lado de los archivos que se están sincronizando.

Candado azul: Tracked. Cruz verde: Nuevo archivo que aún no se ha subido (saldrá cuando creas tu el archivo). Tick rojo: Modificado. Etc.

Información útil: archivo .gitignore: Para que no sincronice archivos o carpetas completos.

Comandos útiles (desde el bash de git): git add "nombre del archivo" //Añade un archivo para que se sincronice. git commit -m 'mensaje' //Sube los cambios pendientes con el mensaje que le pongas. git status //Información de los archivos que están manejando y los que se subirán haciendo commit.