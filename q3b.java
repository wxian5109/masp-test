String jarfile ="./download/util.jar";
Byte[]loadFile = FileManager.getBytes(jarFile);
loadFile = encrypt(loadFile,privateKey);
FileManager.createFile(loadFile,jarFileName);

URL[]classURLs = new URL[]{new URL(http://filesave.com/download/util.jar));
URLConnection conn = classURLs.openConnection();
inputStream is = conn.getInputStream();
FileOutputStream fos = new FileOutputStream(new File(jarFile));
While(is.read(buf)!=-1){...}
Byte[]loadFile = FileManager.getBytes(jarFile);
loadFile = decrypt(loadFile,publicKey);
FileManager.createFile(loadFile,jarFile);
URLClassLoader loader = new URLClassLoader(classURLs);
Class loadedClass = Class.forName("MyClass"true,loader);