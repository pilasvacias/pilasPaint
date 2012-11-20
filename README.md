pilaspaint
==========

Para usar git en vs2012 hay que bajar: 
* El addon para vs: http://gitscc.codeplex.com/ 
* Github para windows (creo que no hace falta, pero es más cómodo): http://windows.github.com/

Conviene leerse los tutoriales de los 2 para saber como guardar <br> 
repos de forma local y sincronizarlos.

Una vez instalado en el menú de vs2012 hay que cambiarlo para que use el addon:<br> 
Tools -> Options -> Source Control -> Seleccionar Git Source Control

Si habéis usado el programa de git para Windows para que sincronice el proyecto <br>
al abrir el archivo pilasPaint.sln deberían aparecer unos simbólos en el explorador <br>
del proyecto al lado de los archivos que se están sincronizando.

Candado azul: Tracked. Cruz verde: Nuevo archivo que aún no se ha subido <br>
(saldrá cuando creas tu el archivo). Tick rojo: Modificado. Etc.

Sincronizar cambios: Pulsamos en repositories en el menú lateral. Después abrimos <br> 
el repositorio pilasPaint, pulsando en la flecha azul. Esperamos a que termine de refrescar los cambios. <br> 
Por último, pulsamos Sync en el menú de la parte superior, a la derecha del nombre del repositorio.

Información útil: 
* archivo .gitignore: Para que no sincronice archivos o carpetas completos.

Comandos útiles (desde el bash de git): 
* git add "nombre del archivo"
* git push origin master:master
* git commit -m 'mensaje'
* git status