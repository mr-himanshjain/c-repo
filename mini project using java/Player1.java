public class Player1 {
    private String Name;
    private String weapon;
    private int Health;

    public Player1(String Name,String weapon,int Health){
        this.Name=Name;
        this.weapon=weapon;
        if(Health < 0 || Health > 100){
            this.Health=100;
        }else this.Health=Health;
    } 

    public String getName(){
        return Name;
    }
    // public Void setName(String Name){
    //     this.Name = Name;
    //     //return this.Name; 
    // }
    
    public String getWeapon(){
        return weapon;
    }
    public void setWeapon(String weapon){
        this.weapon = weapon;
    } 
    public int getHealth(){
        return Health;
    }
    public void setHealth(int Health){
        this.Health = Health;
    }    

    public void Heal(){
        if(this.Health<=0) System.out.println("player is dead heal not posible"); else{
            this.Health=100;
        System.out.println("Health is "+this.Health);}
    }

    public void damagebygun1(){
        this.Health-=30;
        if(this.Health<=0)
        {
            this.Health=0;
        }
        System.out.println("got hit by gun 1 health is reduce by 30"+".new Health is "+this.Health);
        if(this.Health==0)
        {
            System.out.println(getName()+" is dead");
        }
        
    }
    
    public void damagebygun2() {
        this.Health-=50;
        if(this.Health<=0)
        {
            this.Health=0;
        }
        System.out.println("got hit by gun 1 health is reduce by 30"+".new Health is "+this.Health);
        if(this.Health==0)
        {
            System.out.println(getName()+" is dead");
        }
        
    }
}
