import hr.*;
import java.io.*;
import javax.xml.bind.*;

class XmlBindTest{

	public static void main(String[] args) throws Exception{
		JAXBContext context = JAXBContext.newInstance(Department.class);
		if(args.length > 0){
			Department dept = new Department();
			dept.setTitle(args[0]);
			dept.addEmployee(5, 45000);
			dept.addEmployee(6, 56000);
			dept.addEmployee(4, 34000);
			dept.addEmployee(7, 67000);
			dept.addEmployee(3, 23000);
			Marshaller m = context.createMarshaller();
			m.setProperty("jaxb.formatted.output", true);
			FileWriter target = new FileWriter("dept.xml");
			m.marshal(dept, target);
			target.close();
		}else{
			Unmarshaller u = context.createUnmarshaller();
			FileReader source = new FileReader("dept.xml");
			Department dept = (Department)u.unmarshal(source);
			source.close();
			System.out.printf("Employees of %s department%n", dept.getTitle());
			for(Employee emp : dept.getEmployees())
				System.out.println(emp);
		}
	}

}

