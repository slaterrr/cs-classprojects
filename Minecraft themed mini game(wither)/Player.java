
import javax.swing.JOptionPane;
import java.util.Random;

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author slate
 */
public class Player 
{
    private static final int LEATHER_ARMOR_HP = 10;
    private static final int GOLD_ARMOR_HP = 20;
    private static final int IRON_ARMOR_HP = 30;
    private static final int DIAMOND_ARMOR_HP = 40;
    private static final int HEALTH = 10;
    
    private String name;
    private int armorHP;
    private int totalDamage;
    private int witherSkulls;
    private int HPbeforeAttack;
    private int HPafterAttack;
    
    /**
     * Represents a player in the mini game
     *
     */
    public Player()
    {
        
    }
    
    /**
     * 
     * @param name the name of player
     * @param armorHP the amount of HP their armor has
     * @param totalDamage the damage dealt by the Wither
     * @param witherSkulls the amount of wither skulls that were shot
     * @param HPbeforeAttack the amount of HP before the player is attacked
     * @param HPafterAttack the amount of HP after the player is attacked
     */
    public Player(String name, int armorHP, int totalDamage, int witherSkulls,
            int HPbeforeAttack, int HPafterAttack)
    {
        this.name = name;
        this.armorHP = armorHP;
        this.totalDamage = totalDamage;
        this.witherSkulls = witherSkulls;
        this.HPbeforeAttack = HPbeforeAttack;
        this.HPafterAttack = HPafterAttack;
    }

    /**
     * 
     * @param s the player's name
     */
    public void setName(String s)
    {
        name = s;
    }
    
    /**
     * 
     * @param a the player's armor choice
     */
    public void setArmorHP(char a)
    {
        a = Character.toUpperCase(a);

        switch (a)
        {
            case ('L'): armorHP = LEATHER_ARMOR_HP; break;
            case ('G'): armorHP = GOLD_ARMOR_HP; break;
            case ('I'): armorHP = IRON_ARMOR_HP;break;
            case ('D'): armorHP = DIAMOND_ARMOR_HP; break;
            default: JOptionPane.showMessageDialog(null,"You have no armor, "
                    + "you are cooked."); armorHP = 0;    
        }
    }
    

    /**
     * sets the amount of wither skulls with a random number generator
     */
    public void setWitherSkullAmount()
    {
       Random randomNumberGenerator = new Random();
       int randomWitherSkull = randomNumberGenerator.nextInt(1,7);
       witherSkulls = randomWitherSkull;       
    }
    
    /**
     * sets the amount of total damage done to the player
     */
    public void setTotalDamage()
    {
        totalDamage = witherSkulls * 8;
    }
   
    /**
     * sets the total HP before the attack
     */
    public void setTotalHPbeforeAttack()
    {
        HPbeforeAttack = HEALTH + armorHP;
    }
    
    /**
     * sets the total HP after the attack
     */
    public void setTotalHPafterAttack()
    {
        HPafterAttack = HPbeforeAttack - totalDamage;
    }
    
    /**
     * displays the result depending on the players HP 
     */
    public void setMessageResult()
    {
        if (HPafterAttack <= 0)
        {
            JOptionPane.showMessageDialog(null, name + " has been slain by the Wither.\n"
                    + "It attacked with " + witherSkulls + " wither skulls,"
                            + " which did " + totalDamage + " HP.");
        }
        else
        {
            JOptionPane.showMessageDialog(null,"You survived "
                    + name + "! The wither attacked"
                    + " with " + witherSkulls + " wither skulls, which did "
                            + totalDamage + " damage.\n"
                            + "            It wasn't enough to stop you!");
        }
    }
    
    /**
     * 
     * @return the player's name
     */
    public String getName()
    {
        return name;
    }
    
    /**
     * 
     * @return the player's starting health
     */
    public int getHealth()
    {
        return HEALTH;
    }
    
    /**
     * 
     * @return the player's armor choice HP
     */
    public int getArmorHP()
    {
        return armorHP;
    }


    
    
    
    
    
    
    
    
    
}
