
package innovaccerinfra;

import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.nio.file.StandardCopyOption;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;
import java.util.TreeMap;
import java.util.TreeSet;

public class FileOrganizer{

   public static boolean isLink(File file) throws IOException
  {
      String cnnpath = file.getCanonicalPath();
	  String abspath = file.getAbsolutePath();
	  return !abspath.equals(cnnpath);	
  
  }
    public static void main(String[] args) throws IOException {
	File directory=new File("C:\\Users\\HP LAP\\Desktop\\Test");
        File[] listFiles = directory.listFiles();
        
        for (File listFile : listFiles) 
        {
            String extension[]=listFile.getName().split("\\.");
            if(!isLink(listFile) && !listFile.isDirectory())
            {
                if(!(new File("Documents/"+extension[extension.length-1].toUpperCase()).exists()))
                       new File("Documents/"+extension[extension.length-1].toUpperCase()).mkdirs();                                
                Files.move(Paths.get(listFile.getPath()),Paths.get("Documents/" + extension[extension.length-1].toUpperCase()+"/"+listFile.getName()),StandardCopyOption.REPLACE_EXISTING);
            } 
        }
    }
    
}
