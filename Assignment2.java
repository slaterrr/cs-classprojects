/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

/**
 * Name: Slater Zevallos
 * Date: 2.15.26
 * Description: This is a mini game program that allows the user to try and survive
 * attacks from an in-game enemy, by allowing the user to choose between different
 * sets of armor. The user will then be prompted with a result whether they survived or not
 * based on their armor strength and the probability of the wither skull damage.
 * @author slate
 */

import javax.swing.JOptionPane;

public class Assignment2 {
//DRIVE FUNCTION//
    public static void main(String[] args) 
    {
        
        Player user = new Player();
        
        JOptionPane.showMessageDialog(null,"       Welcome to the Minecraft HP Mini Game!\n" +
                "Can you survive the Wither's brutal skull attacks?\n" + 
                "⬛⬛⬛⬛⬛⬛⬛⬛      ⬛⬛⬛⬛⬛⬛⬛⬛      ⬛⬛⬛⬛⬛⬛⬛⬛\n" +
                "⬛⬛⬛⬜⬛⬛⬜⬛      ⬛⬛⬛⬜⬛⬛⬜⬛      ⬛⬛⬛⬜⬛⬛⬜⬛\n" +
                "⬛⬛⬛⬜⬛⬛⬜⬛      ⬛⬛⬛⬜⬛⬛⬜⬛      ⬛⬛⬛⬜⬛⬛⬜⬛\n" +
                "⬛⬛⬛⬛⬛⬛⬛⬛      ⬛⬛⬛⬛⬛⬛⬛⬛      ⬛⬛⬛⬛⬛⬛⬛⬛\n" +
                "⬛⬜⬜⬛⬛⬜⬜⬛      ⬛⬜⬜⬛⬛⬜⬜⬛      ⬛⬜⬜⬛⬛⬜⬜⬛\n" +
                "⬛⬜⬜⬛⬛⬜⬜⬛      ⬛⬜⬜⬛⬛⬜⬜⬛      ⬛⬜⬜⬛⬛⬜⬜⬛\n" +
                "⬛⬛⬛⬛⬛⬛⬛⬛      ⬛⬛⬛⬛⬛⬛⬛⬛      ⬛⬛⬛⬛⬛⬛⬛⬛\n" +
                "        ⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛       \n" +
                "        ⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛       \n" +
                "                                      ⬛⬛⬛⬛          \n");
       
        user.setName(JOptionPane.showInputDialog("Please enter your username:"));
        String input = JOptionPane.showInputDialog("Please enter the char of your armor choice\n"
                + "L - Leather\n"
                + "G - Gold\n"
                + "I - Iron\n"
                + "D - Diamond\n");
        char armorChoice = input.charAt(0);
        user.setArmorHP(armorChoice);
        user.setWitherSkullAmount();
        user.setTotalDamage();
        user.setTotalHPbeforeAttack();
        user.setTotalHPafterAttack();
        user.setMessageResult();
        
    }
}
