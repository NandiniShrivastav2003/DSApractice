import java.util.*;
public class challenge {
    HashMap<String,String>M1=new HashMap<String,String>();
    HashMap<String,String>M2=new HashMap<String,String>();
public Map<String,String> saveCountryCapital(String countryName,String capital){
M1.put(countryName,capital);
return M1;
}
public String getCapital(String CountryName){
    return M1.get(CountryName);
}
public String getCountry(String CapitalName){
    String s = "";
    for (Object o : M1.keySet()) {
        if (M1.get(o).equals(CapitalName)) {
            s+= (String) o;
        }
    }
    return s;
}
public Map<String,String>CloneMap(){

    for(Map.Entry m:M1.entrySet()){
        String a= (String) m.getValue();
        String b= (String) m.getKey();
        M2.put(a,b);
    }
    return M2;
}
public ArrayList<String> conAl() {
    ArrayList<String> list = new ArrayList<String>();
    for(Map.Entry m:M1.entrySet()) {
        list.add((String)m.getKey());
    }
    return list;
}
    public static void main(String[] args) {
challenge obj=new challenge();
       System.out.println(obj.saveCountryCapital("India","Delhi"));
         System.out.println(obj.saveCountryCapital("japan","tokyo"));
        System.out.println(obj.getCapital("japan"));
        System.out.println(obj.getCountry("tokyo"));
        System.out.println(obj.CloneMap());
        System.out.println(obj.conAl());
    }
}
