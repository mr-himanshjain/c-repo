public class Player2 extends Player1 {
    private int Health;
    private boolean armor;
    public Player2 (String Name, String weapon ,int Health,Boolean armor) {
        super(Name,weapon,Health);
        this.Health=Health;
        this.armor=armor;
    }

    @Override
    public void damagebygun1() {
        if(armor)
        {
            this.Health-=20;
            if(this.Health<=0)this.Health=0;
            System.out.println("armor is on got hit by gun 1. Health is reduce by 20."+"new Health "+this.Health);
        }
        if(!armor)
        {
            this.Health-=30 ;
            if(this.Health<=0)this.Health=0;
            System.out.println("armor is off got hit by gun 1. Health is reduce by 30 ."+" new Health "+this.Health);
        }
        if(this.Health==0){
            System.out.println(getName()+" is dead");
        }
        
    }
    @Override
    public void damagebygun2() {
        if(armor){
            this.Health-=40;
            if(this.Health<=0)this.Health=0;
            System.out.println("armor is on got hit by gun 1. Health is reduce by 40."+"new Health" +this.Health);
        }
        if(!armor){
            this.Health-=50 ;
            if(this.Health<=0)this.Health=0;
            System.out.println("armor is on got hit by gun 1. Health is reduce by 50 ."+"new Health "+this.Health);
        }
        if(this.Health==0){
            System.out.println(getName()+" is dead");
        }
    }

    @Override
    public void Heal() {
        super.Heal();
        
    }
    
}
