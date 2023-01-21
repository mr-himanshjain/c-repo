package exchange;

import java.io.*;
import java.net.*;
import java.util.*;
import javax.lang.model.util.TypeKindVisitor9;
import javax.servlet.*;
import javax.servlet.http.*;
import java.net.*;
import java.io.InputStream;
import com.google.gson.*;

class Recv
{
    private String lhs;
    private String rhs;
   // private String error;
    //private String icc;
    public Recv()
    {
    }
    public String getlhs()
    {
        return lhs;
    }
    public String getrhs()
    {
        return rhs;
    }
}

public class Convert extends httpServlet {
    protected void processRequest(HttpsServletRequest req,HttpsServletResponse resp)
    throws ServletException, IOException{
        String query = "";
        String amount = "";
        String curTo = "";
        String curFrom = "";
        String submit = "";
        String res = "";
        HttpSession session;
        resp.setConttentType("text/html;charset=UTF-8");
        PrintWriter out = resp.getWriter();
        amount = req.getParameter("amount");
        curTo = req.getParameter("TO");
        curFrom = req.getParameter("From");

        try{
            query = "http://www.google.com/ig/calculator?hl=en&q="  + amount +curFrom + "=?" + curTo;
            URL url = new URL(query);
            InputStreamReader stream = new InputStreamReader(url.openStream());
            BufferedReader in = new BufferedReader(stream);
            String str = "";
            String temp = "";
            while ((temp = in.readline())!= null){
                str = str+temp;
            }
            Gson gson = new Gson();
            Recv st = gson.fromJson(str,Recv.class);
            String rhs = st.getrhs();
            rhs = rhs.replaceAll("?","");

            StringTokenizer strto = new StringTokenizer(rhs);
            String nextToken;
            out.write(strto.nextToken());
            nextToken = strto.nextToken();
            if(nextToken.equals("million")|| nextToken.equals("billion")|| nextToken.equals("trillion")){
                System.out.println(" "+nextToken);
            }
        }catch(NumberFormatException e) {
            out.println("the given amount is not valid number");
        }
    }
    
}
