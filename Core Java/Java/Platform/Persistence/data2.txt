import java.io.*;

class FileStreamTest{

	public static void main(String[] args) throws Exception{
		FileInputStream fin = new FileInputStream(args[0]);
		FileOutputStream fout = new FileOutputStream(args[1]);
		byte[] buffer = new byte[80];
		while(fin.available() > 0){
			int n = fin.read(buffer, 0, buffer.length);
			for(int i = 0; i < n; ++i)
				buffer[i] = (byte)(buffer[i] ^ '#');
			fout.write(buffer, 0, n);
		}
		fout.close();
		fin.close();
	}

}

